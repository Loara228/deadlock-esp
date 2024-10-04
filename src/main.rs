mod drawing;
mod input;
mod memory;
pub mod settings;
pub mod external;

use std::env;

use clap::*;
use settings::mgr;

pub mod connection
{
    use std::net::UdpSocket;

    pub fn run_server()
    {
        let socket = UdpSocket::bind("127.0.0.1:228").unwrap();
        let mut buf = [0; 8];
        loop {
            socket.recv_from(&mut buf).unwrap();
            let mut i = 0;
            let mut x_buf: [u8; 4] = [0u8; 4];
            let mut y_buf: [u8; 4] = [0u8; 4];
            for _ in 0..4
            {
                x_buf[i] = buf[i];
                i += 1;
            }
            for _ in 4..8
            {
                y_buf[i - 4] = buf[i];
                i += 1;
            }
            let x: i32 = i32::from_ne_bytes(x_buf);
            let y: i32 = i32::from_ne_bytes(y_buf);
            crate::input::mouse::send_move(x, y); // отправляем ОС
        }
    }

    pub fn send_move(socket: &UdpSocket, x: i32, y: i32)
    {
        let mut arr: [u8; 8] = [0u8; 8];
        let mut i = 0;
        for byte in x.to_ne_bytes().iter() {
            arr[i] = byte.clone();
            i += 1;
        }
        for byte in y.to_ne_bytes().iter() {
            arr[i] = byte.clone();
            i += 1;
        }
        socket.send_to(&arr, "127.0.0.1:228").unwrap(); // отправляет в программу
    }
}


#[derive(Parser)]
#[command(version)]
struct Cli {
    #[arg(short, long)]
    offsets: bool,
    #[arg(short, long)]
    mouse: bool,

    #[arg(short, long, value_enum)]
    #[arg(default_value = "3")]
    logs: usize
}

impl Cli {
    fn get_filter(&self) -> log::LevelFilter {
        match self.logs {
            1 => log::LevelFilter::Error,
            2 => log::LevelFilter::Warn,
            3 => log::LevelFilter::Info,
            _ => log::LevelFilter::Off,
        }
    }
}

fn main() {
    let args = parse_arguments();
    if args.mouse {
        log::info!("Running server...");
        connection::run_server();
        std::process::exit(0);
    }

    check_processes();

    log::info!("Running mouse...");
    run_mouse_proc();
    log::info!("Running main...");

    mgr::initialize();
    memory::initialize(args.offsets);
    drawing::overlay::run();
}

fn check_processes()
{
    let mut system = sysinfo::System::new();
    system.refresh_processes(sysinfo::ProcessesToUpdate::All);
    let mut i = 0;
    
    let cur_proc = module_path!();
    for p in system.processes_by_name(cur_proc.as_ref()) {
        i += 1;
    }

    if i > 1 {
        let cur_file = get_current_file_name();
        log::error!("Something went wrong. close all \"{}\" processes and restart program", cur_file);
        std::process::exit(0);
    }
}

fn run_mouse_proc()
{
    _ = std::thread::spawn(|| {
        std::process::Command::new(get_current_file_name()).arg("-m").spawn().unwrap();
    });
    std::thread::sleep(std::time::Duration::from_secs(1));
}

fn parse_arguments() -> Cli
{
    let args = Cli::parse();
    env_logger::builder()
        .filter_module(module_path!(), log::LevelFilter::from(args.get_filter()))
        .init();
    args
}

fn get_current_file_name() -> String
{   
    let exe_path = env::current_exe().unwrap();
    exe_path.file_name().unwrap().to_str().unwrap().to_owned()
}

const ENT_LIST_END: i32 = 2000;
const ENT_LIST_START: i32 = 200;