mod drawing;
mod input;
mod memory;
pub mod settings;
pub mod external;

use settings::mgr;

// todo:
// - spectators?
// - info grid (window)
// - хп (bar)
// > configs сделать выбор конфигов
fn main() {
    env_logger::builder()
        .filter_module("deadlock", log::LevelFilter::Info)
        .init();

    log::info!("Running...");

    mgr::initialize();
    memory::initialize();
    drawing::overlay::run();
}

fn check_update()
{
    // update required?
}

const ENT_LIST_END: i32 = 1900;
const ENT_LIST_START: i32 = 150;