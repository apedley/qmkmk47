#include QMK_KEYBOARD_H
#include "split_util.h"
#include "edvorakjp.h"

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

#define __KC_TRNS_x4__ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define __KC_TRNS_x6__ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_EDVORAKJP_BASE] = LAYOUT_wrapper(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,                       KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_GRV,            __EDVORAKJP_BASE_L1__           ,                                __EDVORAKJP_BASE_R1__            , KC_BSLS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_EQL,            __EDVORAKJP_BASE_L2__           ,                                __EDVORAKJP_BASE_R2__            , KC_MINS,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
       KC_ESC,            __EDVORAKJP_BASE_L3__           , XXXXXXX,    XXXXXXX,           __EDVORAKJP_BASE_R3__            , KC_SLSH,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
             __EDVORAKJP_PAGE__         ,  LA_TAB,  LS_SPC,LOWER_TD,   RAISE_TD, RC_BSPC,  RG_ENT,        __EDVORAKJP_CURSOR__
  //`--------------------------------------------------------------'  `--------------------------------------------------------------'
  ),

  [L_EDVORAKJP_LOWER] = LAYOUT_wrapper(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
                                 __KC_TRNS_x6__           ,                                __KC_TRNS_x6__                            ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, __EDVORAKJP_BRACKET_L__  , XXXXXXX,                      XXXXXXX,  __EDVORAKJP_BRACKET_R__ , XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                       __EDVORAKJP_FUNCTION_L__           ,                                __EDVORAKJP_FUNCTION_R__                  ,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
      KC_PSCR, XXXXXXX,      __EDVORAKJP_PAGE__           , KC_TRNS,    KC_TRNS,           __EDVORAKJP_CURSOR__    , XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                __KC_TRNS_x4__          , KC_TRNS, KC_TRNS, XXXXXXX,     KC_MAC,  RC_DEL, KC_TRNS,          __KC_TRNS_x4__
  //`--------------------------------------------------------------'  `--------------------------------------------------------------'
  ),

  [L_EDVORAKJP_RAISE] = LAYOUT_wrapper(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
                                 __KC_TRNS_x6__           ,                                __KC_TRNS_x6__                            ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX,  __EDVORAKJP_SYMBOL_L__           ,                                __EDVORAKJP_SYMBOL_R__  , XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,           __EDVORAKJP_NUMBER_L__           ,                                __EDVORAKJP_NUMBER_R__           , XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
      KC_PSCR, XXXXXXX,      __EDVORAKJP_PAGE__           , KC_TRNS,    KC_TRNS,           __EDVORAKJP_CURSOR__    , XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                __KC_TRNS_x4__          , KC_TRNS, KC_TRNS,  KC_WIN,    XXXXXXX, KC_TRNS, KC_TRNS,          __KC_TRNS_x4__
  //`--------------------------------------------------------------'  `--------------------------------------------------------------'
  )
};
// clang-format on

// keymaps definitions are moved to keymap_Xrows.c.

#ifdef RGBLIGHT_ENABLE
layer_state_t layer_state_set_keymap(layer_state_t state) {
    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
    switch (get_highest_layer(state)) {
        case L_EDVORAKJP_LOWER:
            rgblight_sethsv_noeeprom(HSV_RED);
            break;
        case L_EDVORAKJP_RAISE:
            rgblight_sethsv_noeeprom(HSV_GREEN);
            break;
        default:  //  for any other layers, or the default layer
            rgblight_mode(RGBLIGHT_MODE_STATIC_GRADIENT + 3);
            rgblight_sethsv(HSV_RED);
            break;
    }
    return state;
}
#endif
