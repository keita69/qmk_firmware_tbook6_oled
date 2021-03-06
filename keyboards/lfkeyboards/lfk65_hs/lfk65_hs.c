#include <avr/sfr_defs.h>
#include <avr/timer_avr.h>
#include <avr/wdt.h>
#include "lfk65_hs.h"
#include "keymap.h"

void matrix_init_kb(void)
{
    matrix_init_user();

}

void matrix_scan_kb(void)
{
    matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t* record)
{
    if (keycode == RESET) {
        reset_keyboard_kb();
    } else {
    }
    return process_record_user(keycode, record);
}

void reset_keyboard_kb(){
#ifdef WATCHDOG_ENABLE
    MCUSR = 0;
    wdt_disable();
    wdt_reset();
#endif
    reset_keyboard();
}
