/*
Copyright 2021 vuckale

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

#include "config_common.h"

#define VENDOR_ID       0x0210
#define PRODUCT_ID      0x002B
#define DEVICE_VER      0x0001
#define MANUFACTURER    Ampex
#define PRODUCT         210 Plus
#define DESCRIPTION     Terminal Keyboard

#define CORE_TEENSY

/* key matrix size */
#define MATRIX_ROWS 11
#define MATRIX_COLS 16

#define MATRIX_ROW_PINS \
    { E6, E7, B0, B1, B2, B3, B4, B5, F4, F0, F2}
#define MATRIX_COL_PINS \
    { B7, D0, D1, D2, F6, F7, D7, E0, E1, C0, C3, C4, C5, C6, F1, F3}
#define UNUSED_PINS \
    { D3, D5, D6, C1, C2, C7, A0, A1, A2, A3, A4, A5, A6, A7, E4, E5, F5}

#define DIODE_DIRECTION COL2ROW

#define AUDIO_PIN_ALT B6
#ifdef AUDIO_ENABLE
#    define STARTUP_SONG SONG(STARTUP_SOUND)
#endif

//Define bootmagic on ESC
#define BOOTMAGIC_LITE_ROW 5
#define BOOTMAGIC_LITE_COLUMN 2

// Set 0 if debouncing isn't needed
#define DEBOUNCE 5

#define MATRIX_HAS_GHOST
