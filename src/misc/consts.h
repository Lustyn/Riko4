#pragma once

#define _RIKO_VERSION_ "0.1.0"

#define OPEN_FS_DESC 128

#define SCRN_WIDTH 280
#define SCRN_HEIGHT 160

#define DEFAULT_SCALE 2

#define COLOR_LIMIT 16
#define INIT_COLORS {       \
        {24,   24,   24},   \
        {29,   43,   82},   \
        {126,  37,   83},   \
        {0,    134,  81},   \
        {171,  81,   54},   \
        {86,   86,   86},   \
        {157,  157,  157},  \
        {255,  0,    76},   \
        {255,  163,  0},    \
        {255,  240,  35},   \
        {0,    231,  85},   \
        {41,   173,  255},  \
        {130,  118,  156},  \
        {255,  119,  169},  \
        {254,  204,  169},  \
        {236,  236,  236},  \
    }

#define sane_NUM_SCANCODES 512

#ifndef NULL
#define NULL 0
#endif

#ifndef MAX_PATH
#  include <limits.h>
#  ifdef PATH_MAX
#    define MAX_PATH PATH_MAX
#  else
#    define MAX_PATH 256
#  endif
#endif

#if MAX_PATH > 1024
#  undef MAX_PATH
#  define MAX_PATH 1024
#endif

#ifndef __INT_MAX__
#  define  __INT_MAX__ 2147483647
#endif

#define FS_LINE_INCR 256

static const char *sane_scancode_names[sane_NUM_SCANCODES] = {
    NULL, NULL, NULL, NULL,
    "a",
    "b",
    "c",
    "d",
    "e",
    "f",
    "g",
    "h",
    "i",
    "j",
    "k",
    "l",
    "m",
    "n",
    "o",
    "p",
    "q",
    "r",
    "s",
    "t",
    "u",
    "v",
    "w",
    "x",
    "y",
    "z",
    "1",
    "2",
    "3",
    "4",
    "5",
    "6",
    "7",
    "8",
    "9",
    "0",
    "return",
    "escape",
    "backspace",
    "tab",
    "space",
    "-",
    "=",
    "[",
    "]",
    "\\",
    "#",
    ";",
    "'",
    "`",
    ",",
    ".",
    "/",
    "capsLock",
    "f1",
    "f2",
    "f3",
    "f4",
    "f5",
    "f6",
    "f7",
    "f8",
    "f9",
    "f10",
    "f11",
    "f12",
    "printScreen",
    "scrollLock",
    "pause",
    "insert",
    "home",
    "pageUp",
    "delete",
    "end",
    "pageDown",
    "right",
    "left",
    "down",
    "up",
    "numlock",
    "keypadSlash",
    "keypadAsterisk",
    "keypadMinus",
    "keypadPlus",
    "keypadEnter",
    "keypad1",
    "keypad2",
    "keypad3",
    "keypad4",
    "keypad5",
    "keypad6",
    "keypad7",
    "keypad8",
    "keypad9",
    "keypad0",
    "keypadDecimal",
    NULL,
    "application",
    "power",
    "keypadEquals",
    "f13",
    "f14",
    "f15",
    "f16",
    "f17",
    "f18",
    "f19",
    "f20",
    "f21",
    "f22",
    "f23",
    "f24",
    "execute",
    "help",
    "menu",
    "select",
    "stop",
    "again",
    "undo",
    "cut",
    "copy",
    "paste",
    "find",
    "mute",
    "volumeUp",
    "volumeDown",
    NULL, NULL, NULL,
    "keypadComma",
    "keypadAS400",
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL,
    "altErase",
    "sysReq",
    "cancel",
    "clear",
    "prior",
    "return",
    "separator",
    "out",
    "oper",
    "clearAgain",
    "crSel",
    "exSel",
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    "keypad00",
    "keypad000",
    "thousandsSeparator",
    "decimalSeparator",
    "currencyUnit",
    "currencySubUnit",
    "keypadOpenParen",
    "keypadCloseParen",
    "keypadOpenBracket",
    "keypadCloseBracket",
    "keypadTab",
    "keypadBackspace",
    "keypadA",
    "keypadB",
    "keypadC",
    "keypadD",
    "keypadE",
    "keypadF",
    "keypadXOR",
    "keypadExponentiate",
    "keypadPercent",
    "keypadLessThan",
    "keypadGreaterThan",
    "keypadAnd",
    "keypadDoubleAnd",
    "keypadPipe",
    "keypadDoublePipe",
    "keypadColon",
    "keypadPound",
    "keypadSpace",
    "keypadAt",
    "keypadExclamation",
    "keypadMemStore",
    "keypadMemRecall",
    "keypadMemClear",
    "keypadMemAdd",
    "keypadMemSubtract",
    "keypadMemMultiply",
    "keypadMemDivide",
    "keypadPlusOrMinus",
    "keypadClear",
    "keypadClearEntry",
    "keypadBinary",
    "keypadOctal",
    "keypadDecimal",
    "keypadHexadecimal",
    NULL, NULL,
    "leftCtrl",
    "leftShift",
    "leftAlt",
    "leftGUI",
    "rightCtrl",
    "rightShift",
    "rightAlt",
    "rightGUI",
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL,
    "modeSwitch",
    "audioNext",
    "audioPrev",
    "audioStop",
    "audioPlay",
    "audioMute",
    "mediaSelect",
    "www",
    "mail",
    "calculator",
    "computer",
    "acSearch",
    "acHome",
    "acBack",
    "acForward",
    "acStop",
    "acRefresh",
    "acBookmarks",
    "brightnessDown",
    "brightnessUp",
    "displaySwitch",
    "KBDIllumToggle",
    "kbdIllumDown",
    "kbdIllumUp",
    "eject",
    "sleep",
};
