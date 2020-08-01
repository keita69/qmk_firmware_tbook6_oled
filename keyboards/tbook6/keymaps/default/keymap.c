/* Copyright 2019 foostan
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "lufa.h"
#include "ssd1306.h"

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( /* Base */
    KC_A, RGB_MOD, RGB_HUI  \
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_A:
      if (record->event.pressed) {
        for ( ; ; )
        {
          iota_gfx_task();
          // 60秒間隔でマウスカーソルを上下に動かす。
          register_code(KC_MS_UP);
          unregister_code(KC_MS_UP);
          wait_ms(60000);
          register_code(KC_MS_DOWN);
          unregister_code(KC_MS_DOWN);
        }
      } else {
        // when keycode QMKBEST is released
      }
      break;
  }
  return true;
}

void matrix_init_user(void) {
  iota_gfx_init(false);
}

void matrix_scan_user(void) {
//  iota_gfx_task();
}

void matrix_update(struct CharacterMatrix *dest, const struct CharacterMatrix *source) {
  if (memcmp(dest->display, source->display, sizeof(dest->display))) {
    memcpy(dest->display, source->display, sizeof(dest->display));
    dest->dirty = true;
  }
}

bool p1 = true;
void iota_gfx_task_user(void) {

  if (p1) {
    struct CharacterMatrix matrix;
    matrix_clear(&matrix);
    matrix_write_P(&matrix, PSTR("===================\n Stop Screen Lock \n==================="));
    matrix_update(&display, &matrix);
    p1 = false;
  } else {
    struct CharacterMatrix matrix;
    matrix_clear(&matrix);
    matrix_write_P(&matrix, PSTR(" \n\n===================\n Never Screen Lock\n==================="));
    matrix_update(&display, &matrix);
    p1 = true;
  }
}

void led_set_user(uint8_t usb_led) {

}
