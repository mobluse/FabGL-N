/*
  Created by Fabrizio Di Vittorio (fdivitto2013@gmail.com) - <http://www.fabgl.com>
  Copyright (c) 2019-2020 Fabrizio Di Vittorio.
  All rights reserved.

  This file is part of FabGL Library.

  FabGL is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  FabGL is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with FabGL.  If not, see <http://www.gnu.org/licenses/>.
 */


 #include "kbdlayouts.h"




 namespace fabgl {





/**************************************************************************************/
/* US LAYOUT                                                                          */
/**************************************************************************************/
const KeyboardLayout USLayout {
  // name
  "US",

  // desc
  "US English",

  // inherited layout
  nullptr,

  // single byte scancodes
  {
    { 0x76, VK_ESCAPE },
    { 0x05, VK_F1 },
    { 0x06, VK_F2 },
    { 0x04, VK_F3 },
    { 0x0C, VK_F4 },
    { 0x03, VK_F5 },
    { 0x0B, VK_F6 },
    { 0x83, VK_F7 },
    { 0x0A, VK_F8 },
    { 0x01, VK_F9 },
    { 0x09, VK_F10 },
    { 0x78, VK_F11 },
    { 0x07, VK_F12 },
    { 0x16, VK_1 },
    { 0x1E, VK_2 },
    { 0x26, VK_3 },
    { 0x25, VK_4 },
    { 0x2E, VK_5 },
    { 0x36, VK_6 },
    { 0x3D, VK_7 },
    { 0x3E, VK_8 },
    { 0x46, VK_9 },
    { 0x45, VK_0 },
    { 0x15, VK_q },
    { 0x1D, VK_w },
    { 0x24, VK_e },
    { 0x2D, VK_r },
    { 0x2C, VK_t },
    { 0x35, VK_y },
    { 0x3C, VK_u },
    { 0x43, VK_i },
    { 0x44, VK_o },
    { 0x4D, VK_p },
    { 0x1C, VK_a },
    { 0x1b, VK_s },
    { 0x23, VK_d },
    { 0x2b, VK_f },
    { 0x34, VK_g },
    { 0x33, VK_h },
    { 0x3B, VK_j },
    { 0x42, VK_k },
    { 0x4B, VK_l },
    { 0x1A, VK_z },
    { 0x22, VK_x },
    { 0x21, VK_c },
    { 0x2A, VK_v },
    { 0x32, VK_b },
    { 0x31, VK_n },
    { 0x3A, VK_m },
    { 0x0E, VK_GRAVEACCENT },
    { 0x4E, VK_MINUS },
    { 0x55, VK_EQUALS },
    { 0x54, VK_LEFTBRACKET },
    { 0x5B, VK_RIGHTBRACKET },
    { 0x5D, VK_BACKSLASH },
    { 0x4C, VK_SEMICOLON },
    { 0x52, VK_QUOTE },
    { 0x41, VK_COMMA },
    { 0x49, VK_PERIOD },
    { 0x4A, VK_SLASH },
    { 0x70, VK_KP_INSERT },
    { 0x69, VK_KP_END },
    { 0x72, VK_KP_DOWN },
    { 0x7A, VK_KP_PAGEDOWN },
    { 0x6B, VK_KP_LEFT },
    { 0x73, VK_KP_CENTER }, // "5" in the keypad
    { 0x74, VK_KP_RIGHT },
    { 0x6C, VK_KP_HOME },
    { 0x75, VK_KP_UP },
    { 0x7D, VK_KP_PAGEUP },
    { 0x71, VK_KP_DELETE },
    { 0x7C, VK_KP_MULTIPLY },
    { 0x79, VK_KP_PLUS },
    { 0x7B, VK_KP_MINUS },
    { 0x66, VK_BACKSPACE },
    { 0x0D, VK_TAB },
    { 0x5A, VK_RETURN },
    { 0x77, VK_NUMLOCK },
    { 0x7E, VK_SCROLLLOCK },
    { 0x58, VK_CAPSLOCK },
    { 0x12, VK_LSHIFT },
    { 0x59, VK_RSHIFT },
    { 0x14, VK_LCTRL },
    { 0x11, VK_LALT },
    { 0x29, VK_SPACE },
    { 0x84, VK_SYSREQ },  // ALT + PRINTSCREEN directly translated by the keyboard
  },

  // extended scancodes (0xE0..)
  {
    { 0x14, VK_RCTRL },
    { 0x11, VK_RALT },
    { 0x1F, VK_LGUI },
    { 0x27, VK_RGUI },
    { 0x2F, VK_APPLICATION },
    { 0x70, VK_INSERT },
    { 0x71, VK_DELETE },
    { 0x4A, VK_KP_DIVIDE },
    { 0x5A, VK_KP_ENTER },
    { 0x7D, VK_PAGEUP },
    { 0x7A, VK_PAGEDOWN },
    { 0x6C, VK_HOME },
    { 0x69, VK_END },
    { 0x75, VK_UP },
    { 0x72, VK_DOWN },
    { 0x6B, VK_LEFT },
    { 0x74, VK_RIGHT },
    { 0x7C, VK_PRINTSCREEN },
    // pressing CTRL + PAUSE will generate "E0 7E" instead of normal Pause sequence. Here is translated to VK_BREAK.
    { 0x7E, VK_BREAK },
    // these codes are discarded. They are a sort of extended left and right shifts.
    // They are prefixed/postfixed on some special keys (insert, cursor,...) in combination with SHIFT or NUM LOCK, and even in unshifted PRINTSCREEN
    { 0x12, VK_NONE },
    { 0x59, VK_NONE },
  },

  // virtual keys generated by other virtual keys combinations
  //  in_key, { CTRL, ALT, SHIFT, CAPSLOCK }, out_key
  {
    { VK_1,            { 0, 0, 1, 0 }, VK_EXCLAIM },      // SHIFT "1" = "!"
    { VK_2,            { 0, 0, 1, 0 }, VK_AT },           // SHIFT "2" = "@"
    { VK_3,            { 0, 0, 1, 0 }, VK_HASH },         // SHIFT "3" = "#"
    { VK_4,            { 0, 0, 1, 0 }, VK_DOLLAR },       // SHIFT "4" = "$"
    { VK_5,            { 0, 0, 1, 0 }, VK_PERCENT },      // SHIFT "5" = "%"
    { VK_6,            { 0, 0, 1, 0 }, VK_CARET },        // SHIFT "6" = "^"
    { VK_7,            { 0, 0, 1, 0 }, VK_AMPERSAND },    // SHIFT "7" = "&"
    { VK_8,            { 0, 0, 1, 0 }, VK_ASTERISK },     // SHIFT "8" = "*"
    { VK_9,            { 0, 0, 1, 0 }, VK_LEFTPAREN },    // SHIFT "9" = "("
    { VK_0,            { 0, 0, 1, 0 }, VK_RIGHTPAREN },   // SHIFT "0" = ")"

    { VK_GRAVEACCENT,  { 0, 0, 1, 0 }, VK_TILDE },        // SHIFT "`" = "~"
    { VK_MINUS,        { 0, 0, 1, 0 }, VK_UNDERSCORE },   // SHIFT "-" = "_"
    { VK_EQUALS,       { 0, 0, 1, 0 }, VK_PLUS },         // SHIFT "=" = "+"
    { VK_LEFTBRACKET,  { 0, 0, 1, 0 }, VK_LEFTBRACE },    // SHIFT "[" = "{"
    { VK_RIGHTBRACKET, { 0, 0, 1, 0 }, VK_RIGHTBRACE },   // SHIFT "]" = "}"
    { VK_BACKSLASH,    { 0, 0, 1, 0 }, VK_VERTICALBAR },  // SHIFT "\" = "|"
    { VK_SEMICOLON,    { 0, 0, 1, 0 }, VK_COLON },        // SHIFT ";" = ":"
    { VK_QUOTE,        { 0, 0, 1, 0 }, VK_QUOTEDBL },     // SHIFT "'" = """
    { VK_COMMA,        { 0, 0, 1, 0 }, VK_LESS },         // SHIFT "," = "<"
    { VK_PERIOD,       { 0, 0, 1, 0 }, VK_GREATER },      // SHIFT "." = ">"
    { VK_SLASH,        { 0, 0, 1, 0 }, VK_QUESTION },     // SHIFT "/" = "?"

    // SHIFT or CAPSLOCK "a".."z" = "A".."Z"
    { VK_a,            { 0, 0, 1, 1 }, VK_A },
    { VK_b,            { 0, 0, 1, 1 }, VK_B },
    { VK_c,            { 0, 0, 1, 1 }, VK_C },
    { VK_d,            { 0, 0, 1, 1 }, VK_D },
    { VK_e,            { 0, 0, 1, 1 }, VK_E },
    { VK_f,            { 0, 0, 1, 1 }, VK_F },
    { VK_g,            { 0, 0, 1, 1 }, VK_G },
    { VK_h,            { 0, 0, 1, 1 }, VK_H },
    { VK_i,            { 0, 0, 1, 1 }, VK_I },
    { VK_j,            { 0, 0, 1, 1 }, VK_J },
    { VK_k,            { 0, 0, 1, 1 }, VK_K },
    { VK_l,            { 0, 0, 1, 1 }, VK_L },
    { VK_m,            { 0, 0, 1, 1 }, VK_M },
    { VK_n,            { 0, 0, 1, 1 }, VK_N },
    { VK_o,            { 0, 0, 1, 1 }, VK_O },
    { VK_p,            { 0, 0, 1, 1 }, VK_P },
    { VK_q,            { 0, 0, 1, 1 }, VK_Q },
    { VK_r,            { 0, 0, 1, 1 }, VK_R },
    { VK_s,            { 0, 0, 1, 1 }, VK_S },
    { VK_t,            { 0, 0, 1, 1 }, VK_T },
    { VK_u,            { 0, 0, 1, 1 }, VK_U },
    { VK_v,            { 0, 0, 1, 1 }, VK_V },
    { VK_w,            { 0, 0, 1, 1 }, VK_W },
    { VK_x,            { 0, 0, 1, 1 }, VK_X },
    { VK_y,            { 0, 0, 1, 1 }, VK_Y },
    { VK_z,            { 0, 0, 1, 1 }, VK_Z },
  },

  // deadkeys
  {
  },

  // deadkeys translation
  {
  },
};


/**************************************************************************************/
/* UK LAYOUT                                                                          */
/**************************************************************************************/
const KeyboardLayout UKLayout {
  // name
  "UK",

  // desc
  "UK British",

  // inherited layout
  &USLayout,

  // single byte scancodes
  {
    { 0x5D, VK_HASH },
    { 0x61, VK_BACKSLASH },
  },

  // extended scancodes (0xE0..)
  {
  },

  // virtual keys generated by other virtual keys combinations
  //  in_key, { CTRL, ALT, SHIFT, CAPSLOCK, NUMLOCK }, out_key
  {
    { VK_GRAVEACCENT, { 0, 0, 1, 0 }, VK_NEGATION },     // SHIFT "`" = "¬"
    { VK_2,           { 0, 0, 1, 0 }, VK_QUOTEDBL },     // SHIFT "2" = """
    { VK_3,           { 0, 0, 1, 0 }, VK_POUND },        // SHIFT "3" = "£"
    { VK_QUOTE,       { 0, 0, 1, 0 }, VK_AT },           // SHIFT "'" = "@"
    { VK_HASH,        { 0, 0, 1, 0 }, VK_TILDE },        // SHIFT "#" = "~"
    { VK_BACKSLASH,   { 0, 0, 1, 0 }, VK_VERTICALBAR },  // SHIFT "\" = "|"
  },

  // deadkeys
  {
  },

  // deadkeys translation
  {
  },
};


/**************************************************************************************/
/* GERMAN LAYOUT                                                                      */
/**************************************************************************************/
const KeyboardLayout GermanLayout {
  // name
  "DE",

  // desc
  "German",

  // inherited layout
  &USLayout,

  // single byte scancodes
  {
    { 0x0E, VK_CARET },
    { 0x4E, VK_ESZETT },
    { 0x55, VK_ACUTEACCENT },
    { 0x54, VK_UMLAUT_u },
    { 0x5B, VK_PLUS },
    { 0x4C, VK_UMLAUT_o },
    { 0x52, VK_UMLAUT_a },
    { 0x5D, VK_HASH },
    { 0x61, VK_LESS },
    { 0x4A, VK_MINUS },
    { 0x35, VK_z },
    { 0x1A, VK_y },
  },

  // extended scancodes (0xE0..)
  {
  },

  // virtual keys generated by other virtual keys combinations
  //  in_key, { CTRL, ALT, SHIFT, CAPSLOCK, NUMLOCK }, out_key
  {
    { VK_CARET,       { 0, 0, 1, 0 }, VK_DEGREE },       // SHIFT "^" = "°"
    { VK_2,           { 0, 0, 1, 0 }, VK_QUOTEDBL },     // SHIFT "2" = """
    { VK_3,           { 0, 0, 1, 0 }, VK_SECTION },      // SHIFT "3" = "§"
    { VK_6,           { 0, 0, 1, 0 }, VK_AMPERSAND },    // SHIFT "6" = "&"
    { VK_7,           { 0, 0, 1, 0 }, VK_SLASH },        // SHIFT "7" = "/"
    { VK_8,           { 0, 0, 1, 0 }, VK_LEFTPAREN },    // SHIFT "8" = "("
    { VK_9,           { 0, 0, 1, 0 }, VK_RIGHTPAREN },   // SHIFT "9" = ")"
    { VK_0,           { 0, 0, 1, 0 }, VK_EQUALS },       // SHIFT "0" = "="
    { VK_ESZETT,      { 0, 0, 1, 0 }, VK_QUESTION },     // SHIFT "ß" = "?"
    { VK_ACUTEACCENT, { 0, 0, 1, 0 }, VK_GRAVEACCENT },  // SHIFT "´" = "`"
    { VK_PLUS,        { 0, 0, 1, 0 }, VK_ASTERISK },     // SHIFT "+" = "*"
    { VK_HASH,        { 0, 0, 1, 0 }, VK_QUOTE },        // SHIFT "#" = "'"
    { VK_LESS,        { 0, 0, 1, 0 }, VK_GREATER },      // SHIFT "<" = ">"
    { VK_COMMA,       { 0, 0, 1, 0 }, VK_SEMICOLON },    // SHIFT "," = ";"
    { VK_PERIOD,      { 0, 0, 1, 0 }, VK_COLON },        // SHIFT "." = ":"
    { VK_MINUS,       { 0, 0, 1, 0 }, VK_UNDERSCORE },   // SHIFT "-" = "_"
    { VK_7,           { 0, 1, 0, 0 }, VK_LEFTBRACE },    // ALT "7"   = "{"
    { VK_8,           { 0, 1, 0, 0 }, VK_LEFTBRACKET },  // ALT "8"   = "["
    { VK_9,           { 0, 1, 0, 0 }, VK_RIGHTBRACKET }, // ALT "9"   = "]"
    { VK_0,           { 0, 1, 0, 0 }, VK_RIGHTBRACE },   // ALT "0"   = "}"
    { VK_ESZETT,      { 0, 1, 0, 0 }, VK_BACKSLASH },    // ALT "ß"   = "\"
    { VK_q,           { 0, 1, 0, 0 }, VK_AT },           // ALT "q"   = "@"
    { VK_e,           { 0, 1, 0, 0 }, VK_EURO },         // ALT "e"   = "€"
    { VK_PLUS,        { 0, 1, 0, 0 }, VK_TILDE },        // ALT "+"   = "~"
    { VK_LESS,        { 0, 1, 0, 0 }, VK_VERTICALBAR },  // ALT "<"   = "|"
  },

  // deadkeys
  {
  },

  // deadkeys translation
  {
  },
};


/**************************************************************************************/
/* ITALIAN LAYOUT                                                                     */
/**************************************************************************************/
const KeyboardLayout ItalianLayout {
  // name
  "IT",

  // desc
  "Italian",

  // inherited layout
  &USLayout,

  // single byte scancodes
  {
    { 0x0E, VK_BACKSLASH },
    { 0x4E, VK_QUOTE },
    { 0x55, VK_GRAVE_i },
    { 0x54, VK_GRAVE_e },
    { 0x5B, VK_PLUS },
    { 0x4C, VK_GRAVE_o },
    { 0x52, VK_GRAVE_a },
    { 0x5D, VK_GRAVE_u },
    { 0x61, VK_LESS },
    { 0x4A, VK_MINUS },
  },

  // extended scancodes (0xE0..)
  {
  },

  // virtual keys generated by other virtual keys combinations
  //  in_key, { CTRL, ALT, SHIFT, CAPSLOCK, NUMLOCK }, out_key
  {
    { VK_BACKSLASH, { 0, 0, 1, 0 }, VK_VERTICALBAR },  // SHIFT "\" = "|"
    { VK_2,         { 0, 0, 1, 0 }, VK_QUOTEDBL },     // SHIFT "2" = """
    { VK_3,         { 0, 0, 1, 0 }, VK_POUND },        // SHIFT "3" = "£"
    { VK_6,         { 0, 0, 1, 0 }, VK_AMPERSAND },    // SHIFT "6" = "&"
    { VK_7,         { 0, 0, 1, 0 }, VK_SLASH },        // SHIFT "7" = "/"
    { VK_8,         { 0, 0, 1, 0 }, VK_LEFTPAREN },    // SHIFT "8" = "("
    { VK_9,         { 0, 0, 1, 0 }, VK_RIGHTPAREN },   // SHIFT "9" = ")"
    { VK_0,         { 0, 0, 1, 0 }, VK_EQUALS },       // SHIFT "0" = "="
    { VK_QUOTE,     { 0, 0, 1, 0 }, VK_QUESTION },     // SHIFT "'" = "?"
    { VK_GRAVE_i,   { 0, 0, 1, 0 }, VK_CARET },        // SHIFT "ì" = "^"
    { VK_GRAVE_e,   { 0, 0, 1, 0 }, VK_ACUTE_e },      // SHIFT "è" = "é"
    { VK_PLUS,      { 0, 0, 1, 0 }, VK_ASTERISK },     // SHIFT "+" = "*"
    { VK_GRAVE_o,   { 0, 0, 1, 0 }, VK_CEDILLA_c },    // SHIFT "ò" = "ç"
    { VK_GRAVE_a,   { 0, 0, 1, 0 }, VK_DEGREE },       // SHIFT "à" = "°"
    { VK_GRAVE_u,   { 0, 0, 1, 0 }, VK_SECTION },      // SHIFT "ù" = "§"
    { VK_LESS,      { 0, 0, 1, 0 }, VK_GREATER },      // SHIFT "<" = ">"
    { VK_COMMA,     { 0, 0, 1, 0 }, VK_SEMICOLON },    // SHIFT "," = ";"
    { VK_PERIOD,    { 0, 0, 1, 0 }, VK_COLON },        // SHIFT "." = ":"
    { VK_MINUS,     { 0, 0, 1, 0 }, VK_UNDERSCORE },   // SHIFT "-" = "_"
    { VK_BACKSLASH, { 0, 1, 0, 0 }, VK_GRAVEACCENT },  // ALT "\"   = "`"
    { VK_5,         { 0, 1, 0, 0 }, VK_TILDE },        // ALT "5"   = "~"
    { VK_e,         { 0, 1, 0, 0 }, VK_EURO },         // ALT "e"   = "€"
    { VK_GRAVE_e,   { 0, 1, 0, 0 }, VK_LEFTBRACKET },  // ALT "è"   = "["
    { VK_PLUS,      { 0, 1, 0, 0 }, VK_RIGHTBRACKET }, // ALT "+"   = "]"
    { VK_GRAVE_o,   { 0, 1, 0, 0 }, VK_AT },           // ALT "ò"   = "@"
    { VK_GRAVE_a,   { 0, 1, 0, 0 }, VK_HASH },         // ALT "à"   = "#"
    { VK_GRAVE_e,   { 0, 1, 1, 0 }, VK_LEFTBRACE },    // SHIFT ALT "è" = "{"
    { VK_PLUS,      { 0, 1, 1, 0 }, VK_RIGHTBRACE },   // SHIFT ALT "+" = "}"
  },

  // deadkeys
  {
  },

  // deadkeys translation
  {
  },
};


/**************************************************************************************/
/* SPANISH LAYOUT                                                                     */
/*                                                                                    */
/* Implemented by Carles Oriol (https://github.com/carlesoriol)                       */
/**************************************************************************************/
const KeyboardLayout SpanishLayout {
  // name
  "ES",

  // desc
  "Spanish",

  // inherited layout
  &USLayout, // To avoid conflict key combinations

  // single byte scancodes
  {
    { 0x0E, VK_DEGREE },
    { 0x4E, VK_QUOTE },
    { 0x55, VK_EXCLAIM_INV }, // inverted exclaim
    { 0x5D, VK_CEDILLA_c },

    { 0x54, VK_GRAVEACCENT },
    { 0x5B, VK_PLUS },

    { 0x4C, VK_TILDE_n },     // spanish ñ
    { 0x52, VK_ACUTEACCENT },

    { 0x61, VK_LESS },
    { 0x4A, VK_MINUS }


	},

  // extended scancodes (0xE0..)
  {
  },


  // virtual keys generated by other virtual keys combinations
  //  in_key, { CTRL, ALT, SHIFT, CAPSLOCK, NUMLOCK }, out_key
  {

    { VK_DEGREE,      { 0, 1, 0, 0 }, VK_BACKSLASH },     // ALT   "º" = "\"
    { VK_DEGREE,      { 0, 0, 1, 0 }, VK_UPPER_a },       // SHIFT "º" = "ª"

    { VK_1,           { 0, 1, 0, 0 }, VK_VERTICALBAR },   // ALT   "1" = "|"
    { VK_1,           { 0, 0, 1, 0 }, VK_EXCLAIM },       // SHIFT "1" = "!"

    { VK_2,           { 0, 0, 1, 0 }, VK_QUOTEDBL },      // SHIFT "2" = """
    { VK_2,           { 0, 1, 0, 0 }, VK_AT },            // ALT   "2" = "@"

    { VK_3,           { 0, 0, 1, 0 }, VK_INTERPUNCT },    // SHIFT "3" = "·"
    { VK_3,           { 0, 1, 0, 0 }, VK_HASH },          // SHIFT "3" = "#"

    { VK_4,           { 0, 1, 0, 0 }, VK_TILDE },         // SHIFT "4" = "~"

    { VK_6,           { 0, 0, 1, 0 }, VK_AMPERSAND },     // SHIFT "6" = "&"
    { VK_6,           { 0, 1, 0, 0 }, VK_NEGATION },      // ALT   "6" = "¬"

    { VK_7,           { 0, 0, 1, 0 }, VK_SLASH },         // SHIFT "7" = "/"
    { VK_8,           { 0, 0, 1, 0 }, VK_LEFTPAREN },     // SHIFT "8" = "("
    { VK_9,           { 0, 0, 1, 0 }, VK_RIGHTPAREN },    // SHIFT "9" = ")"
    { VK_0,           { 0, 0, 1, 0 }, VK_EQUALS },        // SHIFT "0" = "="

    { VK_QUOTE,       { 0, 0, 1, 0 }, VK_QUESTION },      // SHIFT "'" = "?"
    { VK_EXCLAIM_INV, { 0, 0, 1, 0 }, VK_QUESTION_INV },  // SHIFT "¡" = "¿"

    { VK_GRAVEACCENT, { 0, 0, 1, 0 }, VK_CARET },         // SHIFT "`" = "^"
    { VK_GRAVEACCENT, { 0, 1, 0, 0 }, VK_LEFTBRACKET },   // SHIFT "`" = "["

    { VK_PLUS,        { 0, 0, 1, 0 }, VK_ASTERISK },      // SHIFT "'" = "*"
    { VK_PLUS,        { 0, 1, 0, 0 }, VK_RIGHTBRACKET },  // SHIFT "'" = "]"

    { VK_CEDILLA_c,   { 0, 0, 1, 0 }, VK_CEDILLA_C },     // SHIFT "ç" = "Ç" // should be upper case
    { VK_CEDILLA_c,   { 0, 1, 0, 0 }, VK_RIGHTBRACE },    // ALT   "ç" = "}" // should be upper case

    { VK_ACUTEACCENT, { 0, 0, 1, 0 }, VK_DIAERESIS },     // ALT   "'" = "¨" // should be diaeresis for vocals
    { VK_ACUTEACCENT, { 0, 1, 0, 0 }, VK_LEFTBRACE },     // ALT   "'" = "{" //

    { VK_LESS,        { 0, 0, 1, 0 }, VK_GREATER },       // SHIFT "<" = ">"
    { VK_LESS,        { 0, 1, 0, 0 }, VK_VERTICALBAR },   // ALT   "<" = "|"

    { VK_COMMA,       { 0, 0, 1, 0 }, VK_SEMICOLON },     // SHIFT "," = ";"
    { VK_PERIOD,      { 0, 0, 1, 0 }, VK_COLON },         // SHIFT "." = ":"

    { VK_MINUS,       { 0, 0, 1, 0 }, VK_UNDERSCORE },    // SHIFT "-" = "_"

    { VK_TILDE_n,     { 0, 0, 1, 0 }, VK_TILDE_N },       // SHIFT "ñ" = "Ñ"
  },

  // deadkeys
  {
	  VK_GRAVEACCENT,
    VK_ACUTEACCENT,
    VK_DIAERESIS,
    VK_CARET,
  },

  // deadkeys translation
  {
	 { VK_GRAVEACCENT, VK_SPACE, VK_GRAVEACCENT },
	 { VK_ACUTEACCENT, VK_SPACE, VK_ACUTEACCENT },
	 { VK_DIAERESIS,   VK_SPACE, VK_DIAERESIS },
	 { VK_CARET,       VK_SPACE, VK_CARET },

	 { VK_GRAVEACCENT, VK_a,     VK_GRAVE_a },
	 { VK_GRAVEACCENT, VK_e,     VK_GRAVE_e },
	 { VK_GRAVEACCENT, VK_i,     VK_GRAVE_i },
	 { VK_GRAVEACCENT, VK_o,     VK_GRAVE_o },
	 { VK_GRAVEACCENT, VK_u,     VK_GRAVE_u },

	 { VK_GRAVEACCENT, VK_A,     VK_GRAVE_A },
	 { VK_GRAVEACCENT, VK_E,     VK_GRAVE_E },
	 { VK_GRAVEACCENT, VK_I,     VK_GRAVE_I },
	 { VK_GRAVEACCENT, VK_O,     VK_GRAVE_O },
	 { VK_GRAVEACCENT, VK_U,     VK_GRAVE_U },

	 { VK_ACUTEACCENT, VK_a,     VK_ACUTE_a },
	 { VK_ACUTEACCENT, VK_e,     VK_ACUTE_e },
	 { VK_ACUTEACCENT, VK_i,     VK_ACUTE_i },
	 { VK_ACUTEACCENT, VK_o,     VK_ACUTE_o },
	 { VK_ACUTEACCENT, VK_u,     VK_ACUTE_u },

	 { VK_ACUTEACCENT, VK_A,     VK_ACUTE_A },
	 { VK_ACUTEACCENT, VK_E,     VK_ACUTE_E },
	 { VK_ACUTEACCENT, VK_I,     VK_ACUTE_I },
	 { VK_ACUTEACCENT, VK_O,     VK_ACUTE_O },
	 { VK_ACUTEACCENT, VK_U,     VK_ACUTE_U },

	 { VK_CARET,       VK_a,     VK_CARET_a },
	 { VK_CARET,       VK_e,     VK_CARET_e },
	 { VK_CARET,       VK_i,     VK_CARET_i },
	 { VK_CARET,       VK_o,     VK_CARET_o },
	 { VK_CARET,       VK_u,     VK_CARET_u },

	 { VK_CARET,       VK_A,     VK_CARET_A },
	 { VK_CARET,       VK_E,     VK_CARET_E },
	 { VK_CARET,       VK_I,     VK_CARET_I },
	 { VK_CARET,       VK_O,     VK_CARET_O },
	 { VK_CARET,       VK_U,     VK_CARET_U },

	 { VK_DIAERESIS,   VK_a,     VK_UMLAUT_a },
	 { VK_DIAERESIS,   VK_e,     VK_UMLAUT_e },
	 { VK_DIAERESIS,   VK_i,     VK_UMLAUT_i },
	 { VK_DIAERESIS,   VK_o,     VK_UMLAUT_o },
	 { VK_DIAERESIS,   VK_u,     VK_UMLAUT_u },

	 { VK_DIAERESIS,   VK_A,     VK_UMLAUT_A },
	 { VK_DIAERESIS,   VK_E,     VK_UMLAUT_E },
	 { VK_DIAERESIS,   VK_I,     VK_UMLAUT_I },
	 { VK_DIAERESIS,   VK_O,     VK_UMLAUT_O },
	 { VK_DIAERESIS,   VK_U,     VK_UMLAUT_U },
  },
};










 } // end of namespace
