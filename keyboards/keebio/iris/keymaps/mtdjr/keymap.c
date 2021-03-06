#include QMK_KEYBOARD_H
#include "mtdjr.h"

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     EXC , 1  , 2  , 3  , 4  , 5  ,                6  , 7  , 8  , 9  , 0  ,BSPC,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     TAB , Q  , W  , E  , R  , T  ,                Y  , U  , I  , O  , P  ,QUOT,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     LSFT, A  , S  , D  , F  , G  ,                H  , J  , K  , L  ,SCLN,ENT ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
      EQL, Z  , X  , C  , V  , B  ,LGUI,     LALT, N  , M  ,COMM,DOT ,SLSH,MINS,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                       LCTL,RASE,SPC ,         SPC ,LOWR,xxxx
  //                  `----+----+----'        `----+----+----'
  ),

  [_LOWER] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,                   ,    ,    ,LCBR,RCBR,DEL ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,                   ,    , UP ,    ,    ,PIPE,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,                   ,LEFT,DOWN,RGHT,    ,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,    ,         ,    ,HOME,    ,END ,    ,EQL ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,    ,             ,    ,
  //                  `----+----+----'        `----+----+----'
  ),

  [_RAISE] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         , F1 , F2 , F3 , F4 ,    ,                   ,    ,    ,LBRC,RBRC,DEL ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         , F5 , F6 , F7 , F8 ,    ,                   ,    ,    ,    ,    ,BSLS,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         , F9 ,F10 ,F11 ,F12 ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
         ,    ,    ,XCPY,XINS,    ,    ,         ,    ,    ,    ,    ,    ,    ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,    ,             ,    ,
  //                  `----+----+----'        `----+----+----'
  ),

  [_ADJUST] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     STOG,ROOT,PPLY,PSEF,xxxx,xxxx,               xxxx,xxxx,xxxx,xxxx,xxxx,xxxx,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     xxxx,xxxx,xxxx,xxxx,xxxx,xxxx,               xxxx,xxxx,xxxx,xxxx,xxxx,BSLS,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     xxxx,xxxx,xxxx,xxxx,xxxx,xxxx,               xxxx,xxxx,xxxx,xxxx,xxxx,xxxx,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
     xxxx,xxxx,xxxx,xxxx,xxxx,xxxx,xxxx,     xxxx,xxxx,xxxx,xxxx,xxxx,xxxx,xxxx,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                       xxxx,    ,xxxx,         xxxx,    ,
  //                  `----+----+----'        `----+----+----'
  )
};
