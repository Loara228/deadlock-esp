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