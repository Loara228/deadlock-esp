mod drawing;
mod input;
mod memory;
pub mod settings;
pub mod external;

fn main() {
    env_logger::builder()
        .filter_module("deadlock", log::LevelFilter::Info)
        .init();
    
    log::info!("Running...");

    memory::initialize();
    drawing::overlay::run();
}