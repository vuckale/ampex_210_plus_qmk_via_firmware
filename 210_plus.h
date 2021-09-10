
#pragma once

#include "quantum.h"
#include "via.h"

#define LAYOUT( \
    K52,  K51, K71, K50, K53, K54, K55, K56, K57, K12, K11, K10, K13, K14, K15, K16,        K18, K19, K1A, K1B,  \
    K62, K60,  K63, K64, K65, K66, K67, K22, K21, K20,  K23, K24, K25,      K26,             K28, K29, K2A, K2B,  \
    K80, K72,  K70, K73, K74, K75, K76, K77, K32, K31,  K30, K33, K34, K35, K36,             K38, K39, K3A, K3B,  \
    K6B, K10F, K4A, K5A, K69, K59, K49, K79, K78, K68,  K58, K5C,     K9E,     K5D, K4D,          K2D, K3C, K2C, K1C,  \
    K5B, K6A, K4B,                  K48,                    K6C, K4C, K6D, K7D,               K1D,    K0C        \
) { \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   K0C,   KC_NO, KC_NO, KC_NO, KC_NO}, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,   KC_NO, K18,   K19,   K1A,   K1B,     K1C,   K1D,   KC_NO, KC_NO, KC_NO}, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26,   KC_NO, K28,   K29,   K2A,   K2B,     K2C,   K2D,   KC_NO, KC_NO, KC_NO}, \
    { K30,   K31,   K32,   K33,   K34,   K35,   K36,   KC_NO, K38,   K39,   K3A,   K3B,     K3C,   KC_NO, KC_NO, KC_NO, KC_NO}, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K48,   K49,   K4A,   K4B,     K4C,   K4D,   KC_NO, KC_NO, KC_NO}, \
    { K50,   K51,   K52,   K53,   K54,   K55,   K56,   K57,   K58,   K59,   K5A,   K5B,     K5C,   K5D,   KC_NO, KC_NO, KC_NO}, \
    { K60,   KC_NO, K62,   K63,   K64,   K65,   K66,   K67,   K68,   K69,   K6A,   K6B,     K6C,   K6D,   KC_NO, KC_NO, KC_NO}, \
    { K70,   K71,   K72,   K73,   K74,   K75,   K76,   K77,   K78,   K79,   KC_NO, KC_NO,   KC_NO, K7D,   KC_NO, KC_NO, KC_NO}, \
    { K80,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO}, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, K9E  , KC_NO, KC_NO  },  \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, K10F, KC_NO },  \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }  \
}

// lctrl 5B
