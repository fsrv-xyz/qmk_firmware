// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _BASE_LAYER 0
#define _TEST_LAYER 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE_LAYER] = LAYOUT(
        OSL(_TEST_LAYER), KC_A, KC_B
    ),
    [_TEST_LAYER] = LAYOUT(
        KC_C, KC_D, KC_E
    )

};
