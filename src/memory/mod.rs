use core::{ffi::c_void, str};
use windows::Win32::{Foundation::{HANDLE, HMODULE}, System::{Diagnostics::Debug::ReadProcessMemory, ProcessStatus::{EnumProcessModules, GetModuleBaseNameA, GetModuleInformation, MODULEINFO}, Threading::{OpenProcess, PROCESS_QUERY_INFORMATION, PROCESS_VM_READ}}};

pub fn initialize()
{
    unsafe
    {
        PROCESS_HANDLE = find_process();
        CLIENT_MODULE = find_module("client.dll");
        log::info!("Initialized");
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

pub static mut PROCESS_HANDLE: HANDLE = HANDLE(0);
pub static mut CLIENT_MODULE: MODULEINFO = MODULEINFO { lpBaseOfDll: 0 as *mut c_void, SizeOfImage: 0, EntryPoint: 0 as *mut c_void };