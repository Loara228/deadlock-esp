mod drawing;
mod input;
mod memory;
pub mod settings;
pub mod external;

use clap::*;
use settings::mgr;

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
        log::info!("Running mouse...");
        run_mouse();
        std::process::exit(0);
    }
    log::info!("Running main...");
    mgr::initialize();
    memory::initialize(args.offsets);
    drawing::overlay::run();
}

fn run_mouse()
{

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