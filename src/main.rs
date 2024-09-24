mod drawing;
mod input;
mod memory;
pub mod settings;
pub mod external;

use settings::mgr;

// todo:
// - aimbot distance limit, player distance text.
// - spectators?
// - info grid (window)
// > configs
// 
fn main() {
    env_logger::builder()
        .filter_module("deadlock", log::LevelFilter::Info)
        .init();

    log::info!("Running...");

    mgr::initialize();
    memory::initialize();
    drawing::overlay::run();
}

const ENT_LIST_END: i32 = 800;
const ENT_LIST_START: i32 = 300;
const ENT_LIST_DELAY_1: u64 = 60; // ms (main)
const ENT_LIST_DELAY_2: u64 = 60; // 1/60*1000;