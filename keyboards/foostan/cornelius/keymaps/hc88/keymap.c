/* Copyright 2020 foostan
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

// Left-hand home row mods
#define HOME_A LCTL_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LGUI_T(KC_D)
#define HOME_F LSFT_T(KC_F)

// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K RGUI_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RCTL_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
      KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,     KC_I,    KC_O,   KC_P,  KC_BSPC,
      KC_ESC,    HOME_A,  HOME_S,  HOME_D,  HOME_F,  KC_G,   KC_H,  HOME_J, HOME_K, HOME_L, HOME_SCLN,   KC_QUOT,
     SC_LSPO,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH, SC_RSPC,
     XXXXXXX, KC_LCTL, KC_LGUI, KC_LALT,   MO(1),  KC_SPC,  KC_ENT,   MO(2),  KC_RALT, KC_RGUI, KC_RCTL, XXXXXXX
  ),

[1] = LAYOUT(
     _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,     KC_9,    KC_0, KC_BSPC,
      KC_DEL,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, KC_LEFT, KC_DOWN,   KC_UP, KC_RIGHT, XXXXXXX, XXXXXXX,
     _______,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,
     _______, _______, _______, _______,   MO(1), _______, _______,   MO(3), _______,  _______, _______, _______
  ),

[2] = LAYOUT(
     _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
     _______, _______, _______, _______,   MO(3), _______, _______,   MO(2), _______, _______, _______, _______
  ),

[3] = LAYOUT(
     QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     _______, _______, _______, _______,   MO(3), _______, _______,   MO(3), _______, _______, _______, _______
  ),
};
