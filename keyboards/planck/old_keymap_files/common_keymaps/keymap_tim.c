#include "keymap.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP(
  ESC,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    BSPC,
  TAB,  A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, ENT,
  LSFT, Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH, RSFT,
  LCTL, LALT, DEL,  LGUI, FN2,    SPC,     FN1,   F2,   F5,   F9,   F12),
[2] = KEYMAP( /* RAISE */
  TRNS,  1,    2,    3,    4,    5,    6,    7,    8,    9,    0,   BSPC,
  GRV,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, MINS, EQL,  LBRC, RBRC, BSLS,
  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, QUOT, FN29, TRNS, TRNS,
  TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS,    FN1,  TRNS, TRNS, TRNS, TRNS),
[3] = KEYMAP( /* LOWER */
  TRNS, FN10, FN11, FN12, FN13, FN14, FN15, FN16, FN17, FN18, FN19, BSPC,
  FN22, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, FN20, FN21, FN23, FN24, FN28,
  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, QUOT, FN29, TRNS, TRNS,
  TRNS, TRNS, TRNS, TRNS, FN2,    TRNS,     TRNS, TRNS, TRNS, TRNS, TRNS),
};
const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_MOMENTARY(2),  // to Fn overlay
    [2] = ACTION_LAYER_MOMENTARY(3),  // to Fn overlay

    [3] = ACTION_DEFAULT_LAYER_SET(0),  
    [4] = ACTION_DEFAULT_LAYER_SET(1),

    [10] = ACTION_MODS_KEY(MOD_LSFT, KC_1),
    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_2),
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_3),
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_4),
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_5),
    [15] = ACTION_MODS_KEY(MOD_LSFT, KC_6),
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),
    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    [24] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
    [28] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),
    [29] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),
};
