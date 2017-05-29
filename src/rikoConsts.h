#pragma once

#define _RIKO_VERSION_ "0.1.0"

#define SCRN_WIDTH 352
#define SCRN_HEIGHT 198

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