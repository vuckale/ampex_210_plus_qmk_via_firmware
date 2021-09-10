#pragma once

#include "config_common.h"

// USB Device descriptor parameter
#define VENDOR_ID       0x049F
#define PRODUCT_ID      0x000E
#define DEVICE_VER      0x0001
#define MANUFACTURER    Ampex
#define PRODUCT         210 Plus
#define DESCRIPTION     Terminal Keyboard

// Add teensy core
#define CORE_TEENSY

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 17

#define MATRIX_ROW_PINS \
    { E6, E7, B0, B1, B2, B3, B4, B5, C7, F0, F2, F4}
#define MATRIX_COL_PINS \
    { B7, D0, D1, D2, F6, F7, D7, E0, E1, C0, C3, C4, C5, C6, F1, F3, F5}
#define UNUSED_PINS \
    { D3, D5, D6, C1, C2, A0, A1, A2, A3, A4, A5, A6, A7, E4, E5}

#define DIODE_DIRECTION COL2ROW

#define AUDIO_PIN_ALT B6
#ifdef AUDIO_ENABLE
#    define STARTUP_SONG SONG(STARTUP_SOUND)
#endif

//Define bootmagic on ESC
#define BOOTMAGIC_LITE_ROW 5
#define BOOTMAGIC_LITE_COLUMN 2

/* COL2ROW or ROW2COL */
// #define DIODE_DIRECTION COL2ROW

// Set 0 if debouncing isn't needed
#define DEBOUNCE 5

// Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap
// #define LOCKING_SUPPORT_ENABLE
// Locking resynchronize hack
#define LOCKING_RESYNC_ENABLE

// Disable RGB Backlight
#define RGB_BACKLIGHT_ENABLED 0

// Define layers count
#ifndef DYNAMIC_KEYMAP_LAYER_COUNT
#    define DYNAMIC_KEYMAP_LAYER_COUNT 12
#endif

// Define keymap macro count
#ifndef DYNAMIC_KEYMAP_MACRO_COUNT
#    define DYNAMIC_KEYMAP_MACRO_COUNT 16
#endif

// This is the default EEPROM max address to use for dynamic keymaps.
// The default is the Teensy 2.0++ EEPROM max address.
// Explicitly override it if the keyboard uses a microcontroller with
// more or less EEPROM.
#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 4095

#define MATRIX_HAS_GHOST
