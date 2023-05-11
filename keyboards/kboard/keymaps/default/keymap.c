// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

//#define _BASE_LAYER 0
//#define _TEST_LAYER 1

enum layer_names {
  _BASE_LAYER,
  _TEST_LAYER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE_LAYER] = LAYOUT(
        DF(_TEST_LAYER), LCTL(KC_C), LCTL(LSFT(KC_C)), LCTL(KC_V), LCTL(LSFT(KC_V))
    ),
    [_TEST_LAYER] = LAYOUT(
        DF(_BASE_LAYER), KC_A, KC_B, KC_C, KC_D
    )
};

#ifdef OLED_ENABLE
bool oled_task_user() {
  oled_set_cursor(0,1);
  switch (get_highest_layer(layer_state)) {
    case _BASE_LAYER :
      oled_write("Share", false);
      break;
    case _TEST_LAYER :
      oled_write("Alpha", false);
      break;
    default:
      oled_write("n/a", false);

  }
  return false;
}


#endif
