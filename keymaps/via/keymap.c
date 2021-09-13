#include QMK_KEYBOARD_H

#define ____ KC_TRANSPARENT

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   /*
    ,--------. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----.                ,-----. ,-----. ,-----. ,-----.
    |Loc Esc | |     | |     | |     | |     | |     | |     | |     | |     | |     | |     | |     | |     | |     | |     | |Back |                |Char | |Line | |Erase| |Setup|
    |Esc     | |1    | |2    | |3    | |4    | |5    | |6    | |7    | |8    | |9    | |0    | |ß    | |´    | |+    | |<    | |Space|                |Ins  | |Ins  | |Line | |Send |
    `        ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´                `     ´ `     ´ `     ´ `     ´
    ,-----------. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,--. ,--------.                     ,-----. ,-----. ,-----. ,-----.
    |Tab        | |Q    | |W    | |E    | |R    | |T    | |Z    | |U    | |I    | |O    | |P    | |Ü    | |#    | |  | |Clear   |                     |     | |     | |     | |     |
    |           | |     | |     | |     | |     | |     | |     | |     | |     | |     | |     | |     | |     | |  | |Home    |                     |7    | |8    | |9    | |-    |
    `           ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ |  | `        ´                     `     ´ `     ´ `     ´ `     ´
    ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----`  | ,--------.                     ,-----. ,-----. ,-----. ,-----.
    |Ctrl | |Caps | |A    | |S    | |D    | |F    | |G    | |H    | |J    | |K    | |L    | |Ö    | |Ä    | |Return  | |Break   |                     |     | |     | |     | |     |
    |     | |Lock | |     | |     | |     | |     | |     | |     | |     | |     | |     | |     | |     | |        | |        |                     |4    | |5    | |6    | |,    |
    `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `        ´ `        ´                     `     ´ `     ´ `     ´ `     ´
    ,-----. ,-------. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,-----. ,---------. ,-----. ,-----.                     ,-----. ,-----. ,-----. ,-----.
    |Back | |Shift  | |Y    | |X    | |C    | |V    | |B    | |N    | |M    | |,    | |.    | |_    | |Shift    | |  ^  | |Del  |                     |     | |     | |     | |     |
    |Tab  | |       | |     | |     | |     | |     | |     | |     | |     | |     | |     | |     | |         | |     | |     |                     |1    | |2    | |3    | |     |
    `     ´ `       ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `     ´ `         ´ `     ´ `     ´                     `     ´ `     ´ `     ´ |     | 
    ,-----. ,-----. ,-----. ,-------------------------------------------------------------------. ,-----. ,-----. ,-----. ,-----.                     ,-------------. ,-----. |Enter|                    
    |No   | |Funct| |Print| |                               Space                               | |Line | |  ^  | |  <  | |  >  |                     |             | |     | |     |
    |Ctrl | |     | |     | |                                                                   | |Feed | |     | |     | |     |                     |0            | |.    | |     |
    `     ´ `     ´ `     ´ `                                                                   ´ `     ´ `     ´ `     ´ `     ´                     `             ´ `     ´ `     ´
   */

    [0] = LAYOUT(
        KC_ESC,  KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_RBRC, KC_NUBS, KC_BSPC,            KC_DEL, KC_INS, KC_PGUP, KC_PGDN,
        KC_TAB,    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,  KC_LBRC, KC_NUHS,               KC_HOME,            KC_F7,  KC_F8,  KC_F9,  KC_F14,
        KC_LCTL, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,    KC_ENT,     KC_END,            KC_F4,  KC_F5,  KC_F6,  KC_F13,
        KC_LSFT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,     KC_RSFT, KC_UP, TG(1),            KC_F1,  KC_F2,  KC_F3,  KC_F12,
        ____, KC_LALT, KC_LGUI,                       KC_SPC,                        KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT,                KC_F10,         KC_F11
    ),
    [1] = LAYOUT(
        KC_GRV,  ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,            ____,    ____,    ____,    ____,
        ____,    ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,  ____, ____,      ____,                  KC_P7,   KC_P8,   KC_P9,   KC_PMNS,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,    ____, RESET,                 KC_P4,   KC_P5,   KC_P6,   KC_PCMM,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,     ____,      ____, ____,            KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_PSCR, ____, ____,                   ____,                    ____, ____, ____, ____,                          KC_P0,            KC_PDOT
    ),
};


