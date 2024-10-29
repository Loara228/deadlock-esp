use core::{ffi::c_void, str};
use std::thread;
use windows::Win32::{Foundation::{HANDLE, HMODULE}, System::{Diagnostics::Debug::ReadProcessMemory, ProcessStatus::{EnumProcessModules, GetModuleBaseNameA, GetModuleInformation, MODULEINFO}, Threading::{OpenProcess, PROCESS_QUERY_INFORMATION, PROCESS_VM_READ}}};

#[derive(Debug)]
pub struct Signature
{
    pattern: String,
    offset: usize,
    extra: usize,
}

impl Signature
{
    pub fn new(pattern: &str, offset: usize, extra: usize) -> Self
    {
        Signature
        {
            pattern: pattern.to_owned(),
            offset,
            extra
        }
    }

    pub unsafe fn find(&self, memory: &Vec<u8>, module_ptr: *mut c_void) -> (bool, *mut c_void)
    {
        let pattern: Vec<u8> = self.parse_pattern();
        for i in 0..memory.len()
        {
            let mut pattern_match = true;
            for j in 0..pattern.len()
            {
                if pattern[j] != 0
                {
                    if memory[i + j] != pattern[j]
                    {
                        pattern_match = false;
                        break;
                    }
                }
            }
            if pattern_match
            {
                let pattern_address = module_ptr.add(i);
                let of: i32 = read_memory(pattern_address.add(self.offset));
                let result = pattern_address.add(of as usize).add(self.extra).sub(module_ptr as usize);
                log::info!("{:?}\t({})", result, self.pattern);
                return (true, result);
            }
        }
        log::error!("not found {:?}", self);
        return (false, 0 as *mut c_void);
    }

    pub fn parse_pattern(&self) -> Vec<u8>
    {
        let mut bytes: Vec<u8> = Vec::new();
        for byte_str in self.pattern.split(' ')
        {
            if byte_str == "?" || byte_str == "??"
            {
                bytes.push(0);
            }
            else
            {
                bytes.push(u8::from_str_radix(byte_str, 16).expect("pattern format"));
            }
        }
        return bytes;
    }
}

pub fn initialize()
{
    unsafe
    {
        let find_offsets = true;
        PROCESS_HANDLE = find_process();
        CLIENT_MODULE = find_module("client.dll");
        log::info!("Initialized");
        if find_offsets {
            let client_memory = read_memory_bytes(CLIENT_MODULE.lpBaseOfDll, CLIENT_MODULE.SizeOfImage as usize);

            let entity_list_sig = Signature::new("48 8B 0D ? ? ? ? 8B C5 48 C1 E8", 3, 7);
            crate::external::offsets::client::dwEntityList = entity_list_sig.find(&client_memory, CLIENT_MODULE.lpBaseOfDll).1 as usize;
            
            let view_matrix_sig = Signature::new("48 63 C2 48 8D 0D ? ? ? ? 48 C1 E0", 6, 10);
            crate::external::offsets::client::dwViewMatrix = view_matrix_sig.find(&client_memory, CLIENT_MODULE.lpBaseOfDll).1 as usize;

            let local_player_sig = Signature::new("48 8B 0D ? ? ? ? 48 85 C9 74 65 83 FF FF", 3, 7);
            crate::external::offsets::client::dwLocalPlayerController = local_player_sig.find(&client_memory, CLIENT_MODULE.lpBaseOfDll).1 as usize;

            let camera_sig = Signature::new("48 8D 3D ? ? ? ? 8B D9", 3, 7);
            crate::external::offsets::client::dwCCitadelCameraManager = camera_sig.find(&client_memory, CLIENT_MODULE.lpBaseOfDll).1 as usize;

            let global_vars_sig = Signature::new("48 8B 05 ? ? ? ? 44 3B 40", 3, 7);
            crate::external::offsets::client::dwGlobalVars = global_vars_sig.find(&client_memory, CLIENT_MODULE.lpBaseOfDll).1 as usize;
            let game_rules_sig = Signature::new("48 89 1d ? ? ? ? ff 15 ? ? ? ? 84 c0", 3, 7);
            crate::external::offsets::client::dwGameRules = game_rules_sig.find(&client_memory, CLIENT_MODULE.lpBaseOfDll).1 as usize;
            
            // let game_entity_system_sig = Signature::new("48 8B 1D ? ? ? ? 48 89 1D", 3, 7);
            // crate::external::offsets::client::dwGameEntitySystem = game_entity_system_sig.find(&client_memory, CLIENT_MODULE.lpBaseOfDll).1 as usize;

            // 2 байта
            // // 8B 81 ? ? ? ? 89 02 48 8B C2 C3 CC CC CC CC 48 89 5C 24 ? 48 89 6C 24
        }
    }
}

unsafe fn find_process() -> HANDLE
{
    let mut system = sysinfo::System::new();
    system.refresh_processes(sysinfo::ProcessesToUpdate::All);
    let process = system.processes_by_name("project8".as_ref()).next();
    match process
    {
        Some(proc) => 
        {
            thread::spawn(move || {
                let mut system = sysinfo::System::new();
                system.refresh_processes(sysinfo::ProcessesToUpdate::All);
                let process = system.processes_by_name("project8".as_ref()).next();
                process.unwrap().wait();
                log::info!("Game exited. Bye!");
                crate::exit();
            });
            let handle = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, false, proc.pid().as_u32()).unwrap();
            log::info!("Process found: {:?}", handle);
            handle
        },
        None => 
        {
            log::warn!("Process not found");
            HANDLE::default()
        },
    }
}

unsafe fn find_module(module_name: &str) -> MODULEINFO
{
    if !PROCESS_HANDLE.is_invalid()
    {
        let mut h_mods: [HMODULE; 256] = [HMODULE::default(); 256];
        let mut cb_needed = 0u32;
        EnumProcessModules(PROCESS_HANDLE, &mut h_mods[0], std::mem::size_of::<HMODULE>() as u32 * h_mods.len() as u32, &mut cb_needed).unwrap();
        
        for i in 0..cb_needed as usize / std::mem::size_of::<HMODULE>()
        {
            let mut file_name: [u8; 32] = [0u8; 32];
            GetModuleBaseNameA(PROCESS_HANDLE, h_mods[i], &mut file_name);
            let file_name_str = str::from_utf8(&file_name).unwrap();
            if file_name_str.starts_with(module_name)
            {
                let mut module_info = MODULEINFO::default();
                GetModuleInformation(PROCESS_HANDLE, h_mods[i], &mut module_info, std::mem::size_of::<MODULEINFO>() as u32).unwrap();
                log::info!("Client: {:?}", module_info);
                return module_info;
            }
        }
    }
    log::error!("Client module not found");
    return MODULEINFO::default();
}

pub fn read_memory<T: Copy>(address: *mut c_void) -> T
{
    unsafe 
    {
        let size = std::mem::size_of::<T>();
        let mut buffer = std::mem::zeroed::<T>();
        let bytes_of_read: Option<*mut usize> = Default::default();
        _ = ReadProcessMemory(PROCESS_HANDLE, address, &mut buffer as *const T as *mut c_void, size, bytes_of_read);
        return buffer;
    }
}

pub unsafe fn read_memory_bytes(address:  *mut c_void, size: usize) -> Vec<u8>
{
    let buffer = vec![0u8; size];
    let buffer_ptr = buffer.as_ptr() as *mut c_void;

    let bytes_of_read: Option<*mut usize> = Default::default();
    _ = ReadProcessMemory(PROCESS_HANDLE, address, buffer_ptr, size, bytes_of_read);
    return buffer;
}

pub static mut PROCESS_HANDLE: HANDLE = HANDLE(std::ptr::null_mut());
pub static mut CLIENT_MODULE: MODULEINFO = MODULEINFO { lpBaseOfDll: 0 as *mut c_void, SizeOfImage: 0, EntryPoint: 0 as *mut c_void };