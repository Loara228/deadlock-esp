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

// todo:
// - spectators?
// - info grid (window)
// > configs сделать выбор конфигов

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

    log::info!("Running mouse...");
    run_mouse_proc();
    log::info!("Running main...");

    mgr::initialize();
    memory::initialize(args.offsets);
    drawing::overlay::run();
}

fn run_mouse_proc()
{
    let exe_path = env::current_exe().unwrap();
    let current_file = exe_path.file_name().unwrap().to_owned();
    
    _ = std::thread::spawn(|| {
        std::process::Command::new(current_file).arg("-m").spawn().unwrap();
    });
    std::thread::sleep(std::time::Duration::from_secs(1));
}

fn parse_arguments() -> Cli
{
    let args = Cli::parse();
    env_logger::builder()
        .filter_module("deadlock", log::LevelFilter::from(args.get_filter()))
        .init();
    args
}

const ENT_LIST_END: i32 = 1900;
const ENT_LIST_START: i32 = 150;