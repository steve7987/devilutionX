#pragma once

#define TRUE true
#define FALSE false

#define PeekMessage PeekMessageA
#define DispatchMessage DispatchMessageA
#define PostMessage PostMessageA

//
// File I/O
//

#define FILE_CURRENT DVL_FILE_CURRENT

//
// Events
//

#define WM_QUIT DVL_WM_QUIT

#define WM_MOUSEMOVE DVL_WM_MOUSEMOVE
#define WM_LBUTTONDOWN DVL_WM_LBUTTONDOWN
#define WM_LBUTTONUP DVL_WM_LBUTTONUP
#define WM_RBUTTONDOWN DVL_WM_RBUTTONDOWN
#define WM_RBUTTONUP DVL_WM_RBUTTONUP

#define WM_KEYDOWN DVL_WM_KEYDOWN
#define WM_KEYUP DVL_WM_KEYUP
#define WM_SYSKEYDOWN DVL_WM_SYSKEYDOWN

#define WM_SYSCOMMAND DVL_WM_SYSCOMMAND

#define WM_CHAR DVL_WM_CHAR
#define WM_CAPTURECHANGED DVL_WM_CAPTURECHANGED

#define WM_PAINT DVL_WM_PAINT
#define WM_CLOSE DVL_WM_CLOSE
#define WM_QUERYENDSESSION DVL_WM_QUERYENDSESSION
#define WM_ERASEBKGND DVL_WM_ERASEBKGND
#define WM_QUERYNEWPALETTE DVL_WM_QUERYNEWPALETTE

#define SC_CLOSE DVL_SC_CLOSE

// Virtual key codes.
//
// ref: https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
#define VK_BACK DVL_VK_BACK         // BACKSPACE key
#define VK_TAB DVL_VK_TAB           // TAB key
#define VK_RETURN DVL_VK_RETURN     // ENTER key
#define VK_SHIFT DVL_VK_SHIFT       // SHIFT key
#define VK_CONTROL DVL_VK_CONTROL   // CONTROL key
#define VK_MENU DVL_VK_MENU         // ALT key
#define VK_PAUSE DVL_VK_PAUSE       // PAUSE key
#define VK_CAPITAL DVL_VK_CAPITAL   // CAPS LOCK key
#define VK_ESCAPE DVL_VK_ESCAPE     // ESC key
#define VK_SPACE DVL_VK_SPACE       // SPACEBAR
#define VK_PRIOR DVL_VK_PRIOR       // PAGE UP key
#define VK_NEXT DVL_VK_NEXT         // PAGE DOWN key
#define VK_END DVL_VK_END           // END key
#define VK_HOME DVL_VK_HOME         // HOME key
#define VK_LEFT DVL_VK_LEFT         // LEFT ARROW key
#define VK_UP DVL_VK_UP             // UP ARROW key
#define VK_RIGHT DVL_VK_RIGHT       // RIGHT ARROW key
#define VK_DOWN DVL_VK_DOWN         // DOWN ARROW key
#define VK_SNAPSHOT DVL_VK_SNAPSHOT // PRINT SCREEN key
#define VK_INSERT DVL_VK_INSERT     // INS key
#define VK_DELETE DVL_VK_DELETE     // DEL key
// VK_0 through VK_9 correspond to '0' - '9'
#define VK_0 DVL_VK_0
#define VK_1 DVL_VK_1
#define VK_2 DVL_VK_2
#define VK_3 DVL_VK_3
#define VK_4 DVL_VK_4
#define VK_5 DVL_VK_5
#define VK_6 DVL_VK_6
#define VK_7 DVL_VK_7
#define VK_8 DVL_VK_8
#define VK_9 DVL_VK_9
// VK_A through VK_Z correspond to 'A' - 'Z'
#define VK_A DVL_VK_A
#define VK_B DVL_VK_B
#define VK_C DVL_VK_C
#define VK_D DVL_VK_D
#define VK_E DVL_VK_E
#define VK_F DVL_VK_F
#define VK_G DVL_VK_G
#define VK_H DVL_VK_H
#define VK_I DVL_VK_I
#define VK_J DVL_VK_J
#define VK_K DVL_VK_K
#define VK_L DVL_VK_L
#define VK_M DVL_VK_M
#define VK_N DVL_VK_N
#define VK_O DVL_VK_O
#define VK_P DVL_VK_P
#define VK_Q DVL_VK_Q
#define VK_R DVL_VK_R
#define VK_S DVL_VK_S
#define VK_T DVL_VK_T
#define VK_U DVL_VK_U
#define VK_V DVL_VK_V
#define VK_W DVL_VK_W
#define VK_X DVL_VK_X
#define VK_Y DVL_VK_Y
#define VK_Z DVL_VK_Z

#define VK_LWIN DVL_VK_LWIN             // Left Windows key (Natural keyboard)
#define VK_RWIN DVL_VK_RWIN             // Right Windows key (Natural keyboard)
#define VK_NUMPAD0 DVL_VK_NUMPAD0       // Numeric keypad 0 key
#define VK_NUMPAD1 DVL_VK_NUMPAD1       // Numeric keypad 1 key
#define VK_NUMPAD2 DVL_VK_NUMPAD2       // Numeric keypad 2 key
#define VK_NUMPAD3 DVL_VK_NUMPAD3       // Numeric keypad 3 key
#define VK_NUMPAD4 DVL_VK_NUMPAD4       // Numeric keypad 4 key
#define VK_NUMPAD5 DVL_VK_NUMPAD5       // Numeric keypad 5 key
#define VK_NUMPAD6 DVL_VK_NUMPAD6       // Numeric keypad 6 key
#define VK_NUMPAD7 DVL_VK_NUMPAD7       // Numeric keypad 7 key
#define VK_NUMPAD8 DVL_VK_NUMPAD8       // Numeric keypad 8 key
#define VK_NUMPAD9 DVL_VK_NUMPAD9       // Numeric keypad 9 key
#define VK_MULTIPLY DVL_VK_MULTIPLY     // Multiply key
#define VK_ADD DVL_VK_ADD               // Add key
#define VK_SUBTRACT DVL_VK_SUBTRACT     // Subtract key
#define VK_DECIMAL DVL_VK_DECIMAL       // Decimal key
#define VK_DIVIDE DVL_VK_DIVIDE         // Divide key
#define VK_F1 DVL_VK_F1                 // F1 key
#define VK_F2 DVL_VK_F2                 // F2 key
#define VK_F3 DVL_VK_F3                 // F3 key
#define VK_F4 DVL_VK_F4                 // F4 key
#define VK_F5 DVL_VK_F5                 // F5 key
#define VK_F6 DVL_VK_F6                 // F6 key
#define VK_F7 DVL_VK_F7                 // F7 key
#define VK_F8 DVL_VK_F8                 // F8 key
#define VK_F9 DVL_VK_F9                 // F9 key
#define VK_F10 DVL_VK_F10               // F10 key
#define VK_F11 DVL_VK_F11               // F11 key
#define VK_F12 DVL_VK_F12               // F12 key
#define VK_NUMLOCK DVL_VK_NUMLOCK       // NUM LOCK key
#define VK_SCROLL DVL_VK_SCROLL         // SCROLL LOCK key
#define VK_LSHIFT DVL_VK_LSHIFT         // Left SHIFT key
#define VK_RSHIFT DVL_VK_RSHIFT         // Right SHIFT key
#define VK_LCONTROL DVL_VK_LCONTROL     // Left CONTROL key
#define VK_RCONTROL DVL_VK_RCONTROL     // Right CONTROL key
#define VK_LMENU DVL_VK_LMENU           // Left MENU key
#define VK_RMENU DVL_VK_RMENU           // Right MENU key
#define VK_OEM_1 DVL_VK_OEM_1           // For the US standard keyboard, the ';:' key
#define VK_OEM_PLUS DVL_VK_OEM_PLUS     // For any country/region, the '+' key
#define VK_OEM_COMMA DVL_VK_OEM_COMMA   // For any country/region, the ',' key
#define VK_OEM_MINUS DVL_VK_OEM_MINUS   // For any country/region, the '-' key
#define VK_OEM_PERIOD DVL_VK_OEM_PERIOD // For any country/region, the '.' key
#define VK_OEM_2 DVL_VK_OEM_2           // For the US standard keyboard, the '/?' key
#define VK_OEM_3 DVL_VK_OEM_3           // For the US standard keyboard, the '`~' key
#define VK_OEM_4 DVL_VK_OEM_4           // For the US standard keyboard, the '[{' key
#define VK_OEM_5 DVL_VK_OEM_5           // For the US standard keyboard, the '\|' key
#define VK_OEM_6 DVL_VK_OEM_6           // For the US standard keyboard, the ']}' key
#define VK_OEM_7 DVL_VK_OEM_7           // For the US standard keyboard, the 'single-quote/double-quote' key

#define MK_SHIFT DVL_MK_SHIFT
#define MK_LBUTTON DVL_MK_LBUTTON
#define MK_RBUTTON DVL_MK_RBUTTON
