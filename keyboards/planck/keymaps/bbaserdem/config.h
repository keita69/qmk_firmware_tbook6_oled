#ifndef CONFIG_KEYMAP_H
#define CONFIG_KEYMAP_H

#include "config_common.h"

// LED strip stuff
#ifdef RGBLIGHT_ENABLE
#define RGB_DI_PIN B2
#define RGBLED_NUM 12
#define RGBLIGHT_HUE_STEP 6
#define RGBLIGHT_SAT_STEP 12
#define RGBLIGHT_VAL_STEP 20
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_SNAKE_LENGTH 6
#define RGBLIGHT_EFFECT_KNIGHT_LENGTH 2
#define RGBLIGHT_EFFECT_KNIGHT_OFFSET 6
#define RGBLIGHT_EFFECT_KNIGHT_LED_NUM 6
#define RGBLIGHT_EFFECT_CHRISTMAS_INTERVAL 2000
#define RGBLIGHT_EFFECT_CHRISTMAS_STEP 1
#endif

#define ENCODER_RESOLUTION 4

#endif
