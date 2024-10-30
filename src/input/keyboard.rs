#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

use serde::{Deserialize, Serialize};
use windows::Win32::UI::Input::KeyboardAndMouse::{GetAsyncKeyState, SendInput, INPUT, INPUT_KEYBOARD, KEYEVENTF_EXTENDEDKEY, KEYEVENTF_KEYUP, VIRTUAL_KEY};

#[derive(Clone, Copy)]
#[derive(Debug)]
pub enum VirtualKeys {
	LBUTTON = 1,
	RBUTTON,
	CANCEL,
	MBUTTON,
	XBUTTON1,
	XBUTTON2,
	BACK = 8,
	TAB,
	CLEAR = 12,
	RETURN,
	SHIFT = 16,
	CONTROL,
	MENU,
	PAUSE,
	CAPITAL,
	HANGUL = 21,
	JUNJA = 23,
	FINAL,
	ESCAPE = 27,
	CONVERT,
	NONCONVERT,
	ACCEPT,
	MODECHANGE,
	SPACE,
	PRIOR,
	NEXT,
	END,
	HOME,
	LEFT,
	UP,
	RIGHT,
	DOWN,
	SELECT,
	PRINT,
	EXECUTE,
	SNAPSHOT,
	INSERT,
	DELETE,
	HELP,
	KEY_0,
	KEY_1,
	KEY_2,
	KEY_3,
	KEY_4,
	KEY_5,
	KEY_6,
	KEY_7,
	KEY_8,
	KEY_9,
	KEY_A = 65,
	KEY_B,
	KEY_C,
	KEY_D,
	KEY_E,
	KEY_F,
	KEY_G,
	KEY_H,
	KEY_I,
	KEY_J,
	KEY_K,
	KEY_L,
	KEY_M,
	KEY_N,
	KEY_O,
	KEY_P,
	KEY_Q,
	KEY_R,
	KEY_S,
	KEY_T,
	KEY_U,
	KEY_V,
	KEY_W,
	KEY_X,
	KEY_Y,
	KEY_Z,
	LWIN,
	RWIN,
	APPS,
	SLEEP = 95,
	NUMPAD0,
	NUMPAD1,
	NUMPAD2,
	NUMPAD3,
	NUMPAD4,
	NUMPAD5,
	NUMPAD6,
	NUMPAD7,
	NUMPAD8,
	NUMPAD9,
	MULTIPLY,
	ADD,
	SEPARATOR,
	SUBTRACT,
	DECIMAL,
	DIVIDE,
	F1,
	F2,
	F3,
	F4,
	F5,
	F6,
	F7,
	F8,
	F9,
	F10,
	F11,
	F12,
	F13,
	F14,
	F15,
	F16,
	F17,
	F18,
	F19,
	F20,
	F21,
	F22,
	F23,
	F24,
	NUMLOCK = 144,
	SCROLL,
	LSHIFT = 160,
	RSHIFT,
	LCONTROL,
	RCONTROL,
	LMENU,
	RMENU,
	BROWSER_BACK,
	BROWSER_FORWARD,
	BROWSER_REFRESH,
	BROWSER_STOP,
	BROWSER_SEARCH,
	BROWSER_FAVORITES,
	BROWSER_HOME,
	VOLUME_MUTE,
	VOLUME_DOWN,
	VOLUME_UP,
	MEDIA_NEXT_TRACK,
	MEDIA_PREV_TRACK,
	MEDIA_STOP,
	MEDIA_PLAY_PAUSE,
	LAUNCH_MAIL,
	LAUNCH_MEDIA_SELECT,
	LAUNCH_APP1,
	LAUNCH_APP2,
	OEM_1 = 186,
	OEM_PLUS,
	OEM_COMMA,
	OEM_MINUS,
	OEM_PERIOD,
	OEM_2,
	OEM_3,
	OEM_4 = 219,
	OEM_5,
	OEM_6,
	OEM_7,
	OEM_8,
	OEM_102 = 226,
	PROCESSKEY = 229,
	PACKET = 231,
	ATTN = 246,
	CRSEL,
	EXSEL,
	EREOF,
	PLAY,
	ZOOM,
	NONAME,
	PA1,
	OEM_CLEAR
}

impl VirtualKeys {
    pub fn get_keys() -> Vec<VirtualKeys> {
        vec![
            VirtualKeys::LBUTTON,
            VirtualKeys::RBUTTON,
            VirtualKeys::CANCEL,
            VirtualKeys::MBUTTON,
            VirtualKeys::XBUTTON1,
            VirtualKeys::XBUTTON2,
            VirtualKeys::BACK,
            VirtualKeys::TAB,
            VirtualKeys::CLEAR,
            VirtualKeys::RETURN,
            VirtualKeys::SHIFT,
            VirtualKeys::CONTROL,
            VirtualKeys::MENU,
            VirtualKeys::PAUSE,
            VirtualKeys::CAPITAL,
            VirtualKeys::HANGUL,
            VirtualKeys::JUNJA,
            VirtualKeys::FINAL,
            VirtualKeys::ESCAPE,
            VirtualKeys::CONVERT,
            VirtualKeys::NONCONVERT,
            VirtualKeys::ACCEPT,
            VirtualKeys::MODECHANGE,
            VirtualKeys::SPACE,
            VirtualKeys::PRIOR,
            VirtualKeys::NEXT,
            VirtualKeys::END,
            VirtualKeys::HOME,
            VirtualKeys::LEFT,
            VirtualKeys::UP,
            VirtualKeys::RIGHT,
            VirtualKeys::DOWN,
            VirtualKeys::SELECT,
            VirtualKeys::PRINT,
            VirtualKeys::EXECUTE,
            VirtualKeys::SNAPSHOT,
            VirtualKeys::INSERT,
            VirtualKeys::DELETE,
            VirtualKeys::HELP,
            VirtualKeys::KEY_0,
            VirtualKeys::KEY_1,
            VirtualKeys::KEY_2,
            VirtualKeys::KEY_3,
            VirtualKeys::KEY_4,
            VirtualKeys::KEY_5,
            VirtualKeys::KEY_6,
            VirtualKeys::KEY_7,
            VirtualKeys::KEY_8,
            VirtualKeys::KEY_9,
            VirtualKeys::KEY_A,
            VirtualKeys::KEY_B,
            VirtualKeys::KEY_C,
            VirtualKeys::KEY_D,
            VirtualKeys::KEY_E,
            VirtualKeys::KEY_F,
            VirtualKeys::KEY_G,
            VirtualKeys::KEY_H,
            VirtualKeys::KEY_I,
            VirtualKeys::KEY_J,
            VirtualKeys::KEY_K,
            VirtualKeys::KEY_L,
            VirtualKeys::KEY_M,
            VirtualKeys::KEY_N,
            VirtualKeys::KEY_O,
            VirtualKeys::KEY_P,
            VirtualKeys::KEY_Q,
            VirtualKeys::KEY_R,
            VirtualKeys::KEY_S,
            VirtualKeys::KEY_T,
            VirtualKeys::KEY_U,
            VirtualKeys::KEY_V,
            VirtualKeys::KEY_W,
            VirtualKeys::KEY_X,
            VirtualKeys::KEY_Y,
            VirtualKeys::KEY_Z,
            VirtualKeys::LWIN,
            VirtualKeys::RWIN,
            VirtualKeys::APPS,
            VirtualKeys::SLEEP,
            VirtualKeys::NUMPAD0,
            VirtualKeys::NUMPAD1,
            VirtualKeys::NUMPAD2,
            VirtualKeys::NUMPAD3,
            VirtualKeys::NUMPAD4,
            VirtualKeys::NUMPAD5,
            VirtualKeys::NUMPAD6,
            VirtualKeys::NUMPAD7,
            VirtualKeys::NUMPAD8,
            VirtualKeys::NUMPAD9,
            VirtualKeys::MULTIPLY,
            VirtualKeys::ADD,
            VirtualKeys::SEPARATOR,
            VirtualKeys::SUBTRACT,
            VirtualKeys::DECIMAL,
            VirtualKeys::DIVIDE,
            VirtualKeys::F1,
            VirtualKeys::F2,
            VirtualKeys::F3,
            VirtualKeys::F4,
            VirtualKeys::F5,
            VirtualKeys::F6,
            VirtualKeys::F7,
            VirtualKeys::F8,
            VirtualKeys::F9,
            VirtualKeys::F10,
            VirtualKeys::F11,
            VirtualKeys::F12,
            VirtualKeys::F13,
            VirtualKeys::F14,
            VirtualKeys::F15,
            VirtualKeys::F16,
            VirtualKeys::F17,
            VirtualKeys::F18,
            VirtualKeys::F19,
            VirtualKeys::F20,
            VirtualKeys::F21,
            VirtualKeys::F22,
            VirtualKeys::F23,
            VirtualKeys::F24,
            VirtualKeys::NUMLOCK,
            VirtualKeys::SCROLL,
            VirtualKeys::LSHIFT,
            VirtualKeys::RSHIFT,
            VirtualKeys::LCONTROL,
            VirtualKeys::RCONTROL,
            VirtualKeys::LMENU,
            VirtualKeys::RMENU,
            VirtualKeys::BROWSER_BACK,
            VirtualKeys::BROWSER_FORWARD,
            VirtualKeys::BROWSER_REFRESH,
            VirtualKeys::BROWSER_STOP,
            VirtualKeys::BROWSER_SEARCH,
            VirtualKeys::BROWSER_FAVORITES,
            VirtualKeys::BROWSER_HOME,
            VirtualKeys::VOLUME_MUTE,
            VirtualKeys::VOLUME_DOWN,
            VirtualKeys::VOLUME_UP,
            VirtualKeys::MEDIA_NEXT_TRACK,
            VirtualKeys::MEDIA_PREV_TRACK,
            VirtualKeys::MEDIA_STOP,
            VirtualKeys::MEDIA_PLAY_PAUSE,
            VirtualKeys::LAUNCH_MAIL,
            VirtualKeys::LAUNCH_MEDIA_SELECT,
            VirtualKeys::LAUNCH_APP1,
            VirtualKeys::LAUNCH_APP2,
            VirtualKeys::OEM_1,
            VirtualKeys::OEM_PLUS,
            VirtualKeys::OEM_COMMA,
            VirtualKeys::OEM_MINUS,
            VirtualKeys::OEM_PERIOD,
            VirtualKeys::OEM_2,
            VirtualKeys::OEM_3,
            VirtualKeys::OEM_4,
            VirtualKeys::OEM_5,
            VirtualKeys::OEM_6,
            VirtualKeys::OEM_7,
            VirtualKeys::OEM_8,
            VirtualKeys::OEM_102,
            VirtualKeys::PROCESSKEY,
            VirtualKeys::PACKET,
            VirtualKeys::ATTN,
            VirtualKeys::CRSEL,
            VirtualKeys::EXSEL,
            VirtualKeys::EREOF,
            VirtualKeys::PLAY,
            VirtualKeys::ZOOM,
            VirtualKeys::NONAME,
            VirtualKeys::PA1,
            VirtualKeys::OEM_CLEAR]
    }
}

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

#[derive(Debug)]
#[derive(Serialize, Deserialize)]
#[derive(Clone, Copy)]
pub struct Key
{
    pub state: KeyState,
    pub code: i32
}

impl Key
{
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

pub fn send_key(vk_code: VirtualKeys) {
    let mut input_down = INPUT::default();
    input_down.r#type = INPUT_KEYBOARD;
    input_down.Anonymous.ki.wVk = VIRTUAL_KEY(vk_code as u16);
    input_down.Anonymous.ki.dwFlags = KEYEVENTF_EXTENDEDKEY;
    
    let mut input_up = INPUT::default();
    input_up.r#type = INPUT_KEYBOARD;
    input_up.Anonymous.ki.wVk = VIRTUAL_KEY(vk_code as u16);
    input_up.Anonymous.ki.dwFlags = KEYEVENTF_KEYUP;

    let inputs = [input_down, input_up];
    unsafe {
        SendInput(&inputs, std::mem::size_of::<INPUT>() as i32);
    }
}


pub fn send_key_thread(vk_code: VirtualKeys) {
    let mut input_down = INPUT::default();
    input_down.r#type = INPUT_KEYBOARD;
    input_down.Anonymous.ki.wVk = VIRTUAL_KEY(vk_code as u16);
    input_down.Anonymous.ki.dwFlags = KEYEVENTF_EXTENDEDKEY;
    
    let mut input_up = INPUT::default();
    input_up.r#type = INPUT_KEYBOARD;
    input_up.Anonymous.ki.wVk = VIRTUAL_KEY(vk_code as u16);
    input_up.Anonymous.ki.dwFlags = KEYEVENTF_KEYUP;

    let inputs_down = [input_down];
    let inputs_up = [input_up];

    std::thread::spawn(move || {
        unsafe {
            SendInput(&inputs_down, std::mem::size_of::<INPUT>() as i32);
            std::thread::sleep(std::time::Duration::from_millis(50));
            SendInput(&inputs_up, std::mem::size_of::<INPUT>() as i32);
        };
    });
}