#pragma once

#ifdef RGBLIGHT_ENABLE
#undef RGBLIGHT_SAT_STEP
#define RGBLIGHT_SAT_STEP 12

#define RGBLIGHT_EFFECT_KNIGHT_LENGTH 3
#define RGBLIGHT_EFFECT_SNAKE_LENGTH 3
#define RGBLIGHT_EFFECT_BREATHE_CENTER 1
#endif // RGBLIGHT_ENABLE


#undef PRODUCT
#define PRODUCT         DrashnaDox - Hacked ErgoDox EZ Shine

#undef DEBOUNCE
#define DEBOUNCE 5
