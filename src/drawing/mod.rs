pub mod overlay;
pub mod screen;
pub mod windows;

pub mod connection
{
    use std::net::UdpSocket;

    // pub fn run_server()
    // {
    //     let socket = UdpSocket::bind("127.0.0.1:228").unwrap();
    //     let mut buf = [0; 8];
    //     loop {
    //         socket.recv_from(&mut buf).unwrap();
    //         // x, y - from bytes
    //         crate::input::mouse::send_move(x, y); // отправляем ОС
    //     }
    // }

    // pub fn connect() -> UdpSocket
    // {
    //     UdpSocket::bind("127.0.0.1:229").unwrap()
    // }

    // pub fn send_move(socket: &UdpSocket, x: i32, y: i32)
    // {
    //     // let x.to_ne_bytes();
    //     socket.send_to(&[0; 8], "127.0.0.1:228").unwrap(); // отправляет в программу
    // }
}