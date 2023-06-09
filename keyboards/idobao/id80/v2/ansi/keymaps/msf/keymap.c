/* Copyright 2021 Miguel Filipe <miguel.filipe@gmail.com>
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ansi(
        KC_ESC,    KC_F1,   KC_F2,   KC_F3,   KC_F4,     KC_F5,   KC_VOLD, KC_VOLU, KC_F8,     KC_F9,   KC_F10,  KC_PSTE, KC_PSCR,    KC_DEL,    MO(1),
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,            KC_HOME,
        KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,        KC_END,
        KC_CAPS,       KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT,            KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,
        KC_LCTL,   KC_LGUI,   KC_LALT,                       KC_SPC,                              KC_RALT,     KC_RCTL,        KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_ansi(
        QK_BOOT,   KC_CALC, _______, _______, _______,    KC_MUTE, KC_F6, KC_F7, KC_MPLY,      KC_MSTP, KC_BRID, KC_BRIU, KC_F11,     KC_F12,    _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            KC_INS,
        _______,     RGB_TOG, _______, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______,        KC_DEL,
        _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,            _______, _______, BL_DOWN, BL_TOGG, BL_UP,   NK_TOGG, _______, _______, _______, _______, _______,          BL_UP,
        _______,   _______,   _______,                      _______,                              _______,     _______,        BL_TOGG, BL_DOWN, BL_STEP
    ),
    [2] = LAYOUT_ansi(
        _______,   _______, _______, _______, _______,   _______, _______, _______, _______,   _______, _______, _______, _______,    _______,   _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______,
        _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______,
        _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,   _______,   _______,                      _______,                              _______,     _______,        _______, _______, _______
    ),
};

enum combos {
  SLSHDN_PGDN,
  SLSHUP_PGUP,
  RALTBKSPC_DELETE,
};

const uint16_t PROGMEM slashDown_combo[] = {KC_SLSH, KC_DOWN, COMBO_END};
const uint16_t PROGMEM slashUp_combo[] = {KC_SLSH, KC_UP, COMBO_END};
const uint16_t PROGMEM raltBackspace_combo[] = {KC_RALT, KC_BSPC, COMBO_END};

combo_t key_combos[] = {
  [SLSHDN_PGDN] = COMBO(slashDown_combo, KC_PGDN),
  [SLSHUP_PGUP] = COMBO(slashUp_combo, KC_PGUP),
  [RALTBKSPC_DELETE] = COMBO(raltBackspace_combo, KC_DEL),
};
