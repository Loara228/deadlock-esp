use core::str;

use core::ffi::c_void;
use windows::Win32::{Foundation::{HANDLE, HMODULE}, System::{Diagnostics::Debug::ReadProcessMemory, ProcessStatus::{EnumProcessModules, GetModuleBaseNameA, GetModuleInformation, MODULEINFO}, Threading::{OpenProcess, PROCESS_QUERY_INFORMATION, PROCESS_VM_READ}}};

pub struct Signature
{
    pattern: String,
    offset: u32,
    extra: u32,
}

impl Signature
{
    pub fn new(pattern: &str, offset: u32, extra: u32) -> Self
    {
        Signature
        {
            pattern: pattern.to_owned(),
            offset,
            extra
        }
    }

    pub unsafe fn find(&self, memory: &Vec<u8>, proccess_handle: HANDLE, module_ptr: *mut c_void)
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
                let of: i32 = read_memory(proccess_handle, pattern_address.add(self.offset as usize) as usize);
                let result = pattern_address.add(of as usize).add(self.extra as usize);
                println!("+ {:?}", result.sub(module_ptr as usize));
            }
        }
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
                bytes.push(u8::from_str_radix(byte_str, 16).expect("не удалось спарсить паттерн"));
            }
        }
        return bytes;
    }
}

fn main() {
    unsafe
    {
        let local_player_sig = Signature::new("48 8B 0D ? ? ? ? 48 85 C9 74 65 83 FF FF", 3, 7);
        let view_matrix_sig = Signature::new("48 8D 0D ? ? ? ? 48 C1 E0", 3, 7);
        let entity_list_sig = Signature::new("48 8B 0D ? ? ? ? 8B C5 48 C1 E8", 3, 7);
        let chemas_sig = Signature::new("48 89 05 ? ? ? ? 4C 8D 0D ? ? ? ? 0F B6 45 E8 4C 8D 45 E0 33 F6", 3, 7);

        let proc_handle = get_process_handle().expect("Процесс игры не найден");
        let module_info = get_module_info(proc_handle, "client.dll").expect("client.dll не найден");
        let module_info_2 = get_module_info(proc_handle, "schemasystem.dll").expect("schemasystem.dll не найден");
        let client_memory = read_memory_bytes(proc_handle, module_info.lpBaseOfDll as usize, module_info.SizeOfImage as usize);
        let chemas_memory = read_memory_bytes(proc_handle, module_info_2.lpBaseOfDll as usize, module_info_2.SizeOfImage as usize);

        println!("LocalPlayerController:");
        local_player_sig.find(&client_memory, proc_handle, module_info.lpBaseOfDll);
        println!("ViewMatrix:");
        view_matrix_sig.find(&client_memory, proc_handle, module_info.lpBaseOfDll);
        println!("EntityList:");
        entity_list_sig.find(&client_memory, proc_handle, module_info.lpBaseOfDll);
        println!("chemas:");
        chemas_sig.find(&chemas_memory, proc_handle, module_info_2.lpBaseOfDll);
    }
}

pub unsafe fn get_process_handle() -> Option<HANDLE>
{let mut system = sysinfo::System::new();
    system.refresh_processes(sysinfo::ProcessesToUpdate::All);
    let process = system.processes_by_name("project8".as_ref()).next();
    match process
    {
        Some(proc) => 
        {
            Some(OpenProcess(PROCESS_VM_READ | PROCESS_QUERY_INFORMATION, false, proc.pid().as_u32()).unwrap())
        },
        None => 
        {
            None
        },
    }
}

pub unsafe fn get_module_info(proccess_handle: HANDLE, module_name: &str) -> Option<MODULEINFO>
{
    let mut h_mods: [HMODULE; 256] = [HMODULE::default(); 256];
    let mut cb_needed = 0u32;
    EnumProcessModules(proccess_handle, &mut h_mods[0], std::mem::size_of::<HMODULE>() as u32 * h_mods.len() as u32, &mut cb_needed).unwrap();
    
    for i in 0..cb_needed as usize / std::mem::size_of::<HMODULE>()
    {
        let mut file_name: [u8; 32] = [0u8; 32];
        GetModuleBaseNameA(proccess_handle, h_mods[i], &mut file_name);
        let file_name_str = str::from_utf8(&file_name).unwrap();
        if file_name_str.starts_with(module_name)
        {
            let mut module_info = MODULEINFO::default();
            GetModuleInformation(proccess_handle, h_mods[i], &mut module_info, std::mem::size_of::<MODULEINFO>() as u32).unwrap();
            return Some(module_info);
        }
    }
    return None;
}

pub unsafe fn read_memory_bytes(proccess_handle: HANDLE, address: usize, size: usize) -> Vec<u8>
{
    let buffer = vec![0u8; size];
    let buffer_ptr = buffer.as_ptr() as *mut c_void;

    let bytes_of_read: Option<*mut usize> = Default::default();
    ReadProcessMemory(proccess_handle, address as *const c_void, buffer_ptr, size, bytes_of_read).unwrap();
    return buffer;
}

pub unsafe fn read_memory<T: Copy>(proccess_handle: HANDLE, address: usize) -> T
{
    let size = std::mem::size_of::<T>();
    let mut buffer = std::mem::zeroed::<T>();
    let bytes_of_read: Option<*mut usize> = Default::default();
    ReadProcessMemory(proccess_handle, address as *const _, &mut buffer as *const T as *mut c_void, size, bytes_of_read).unwrap();
    return buffer;
}