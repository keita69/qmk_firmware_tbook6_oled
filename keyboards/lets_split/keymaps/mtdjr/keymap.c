#include QMK_KEYBOARD_H
#include "mtdjr.h"

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_kc(
// ,-----------------------------.  .-----------------------------.
     TAB,  Q ,  W ,  E ,  R ,  T ,     Y ,  U ,  I ,  O ,  P ,BSPC,
// |----+----+----+----+----+----|  |----+----+----+----+----+----|
    EXC,   A ,  S ,  D ,  F ,  G ,     H ,  J ,  K ,  L ,SCLN,QUOT,
// |----+----+----+----+----+----|  |----+----+----+----+----+----|
    LSFT,  Z ,  X ,  C ,  V ,  B ,     N ,  M ,COMM, DOT,SLSH, ENT,
// |----+----+----+----+----+----|  |----+----+----+----+----+----|
    LOWR,LCTL,LALT,LGUI,LOWR, SPC,    SPC,RASE,LEFT,DOWN, UP ,RGHT
// '-----------------------------'  '-----------------------------'
  ),

  [_LOWER] = LAYOUT_kc(
// ,-----------------------------.  .-----------------------------.
    TILD,  1 ,  2 ,  3 ,  4 ,  5 ,     6 ,  7 ,  8 ,  9 ,  0 , DEL,
// |----+----+----+----+----+----|  |----+----+----+----+----+----|
    xxxx,xxxx,xxxx,xxxx,xxxx,xxxx,   xxxx,xxxx,xxxx,LBRC,RBRC,BSLS,
// |----+----+----+----+----+----|  |----+----+----+----+----+----|
        ,UNDO, CUT,XCPY,XINS,xxxx,   xxxx,xxxx,xxxx,xxxx,xxxx,    ,
// |----+----+----+----+----+----|  |----+----+----+----+----+----|
        ,    ,    ,    ,    ,    ,       ,    ,    ,    ,    ,
// '-----------------------------'  '-----------------------------'
  ),

  [_RAISE] = LAYOUT_kc(
// ,-----------------------------.  .-----------------------------.
     GRV,EXLM, AT ,HASH, DLR,PERC,   CIRC,AMPR,ASTR,LPRN,RPRN,    ,
// |----+----+----+----+----+----|  |----+----+----+----+----+----|
    xxxx,xxxx,xxxx,xxxx,xxxx,xxxx,   MINS, EQL,xxxx,LCBR,RCBR,PIPE,
// |----+----+----+----+----+----|  |----+----+----+----+----+----|
        ,xxxx,xxxx,xxxx,xxxx,xxxx,   UNDS,PLUS,xxxx,xxxx,xxxx,    ,
// |----+----+----+----+----+----|  |----+----+----+----+----+----|
        ,    ,    ,    ,    ,    ,       ,    ,MNXT,VOLD,VOLU,MPLY
// '-----------------------------'  '-----------------------------'
  ),

  [_ADJUST] =  LAYOUT_kc( \
// ,-----------------------------.  .-----------------------------.
    xxxx,ROOT,PPLY,PSEF,xxxx,xxxx,    RST,STOG,xxxx,xxxx,xxxx, DEL,
// |----+----+----+----+----+----|  |----+----+----+----+----+----|
     RGB,RHUI,RSAI,RVAI, MOD,xxxx,    F1 , F2 , F3 , F4 , F5 , F6 ,
// |----+----+----+----+----+----|  |----+----+----+----+----+----|
    RBTH,RHUD,RSAD,RVAD,RMOD,xxxx,    F7 , F8 , F9 , F10, F11, F12,
// |----+----+----+----+----+----|  |----+----+----+----+----+----|
        ,xxxx,xxxx,xxxx,    ,xxxx,   xxxx,    ,xxxx,xxxx,xxxx,xxxx
// '-----------------------------'  '-----------------------------'
  )
};
