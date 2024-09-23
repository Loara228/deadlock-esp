use serde::{Deserialize, Serialize};
use windows::Win32::UI::Input::KeyboardAndMouse::GetAsyncKeyState;

#[derive(Serialize, Deserialize)]
#[derive(Clone, Copy)]
#[derive(PartialEq)]
#[derive(Debug)]
pub enum KeyState
{
    None,
    Pressed,
    Down,
    Released
}

#[derive(Serialize, Deserialize)]
pub struct Key
{
    pub state: KeyState,
    pub code: i32
}

impl Key
{
    /// Все влавиши можно найти тут: <br>
    /// https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
    pub fn new(vk_code: i32) -> Self
    {
        Self {
            state: KeyState::None,
            code: vk_code,
        }
    }

    pub fn update(&mut self)
    {
        unsafe {
            let down = GetAsyncKeyState(self.code) < 0;
            if down
            {
                match self.state {
                    KeyState::None => self.state = KeyState::Pressed,
                    KeyState::Pressed => self.state = KeyState::Down,
                    _ => ()
                }
            }
            else
            {
                match self.state {
                    KeyState::None => (),
                    KeyState::Pressed => self.state = KeyState::Released,
                    KeyState::Down => self.state = KeyState::Released,
                    KeyState::Released => self.state = KeyState::None,
                }
            }
        }
    }
}