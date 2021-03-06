# XD75

![XD75](https://cdn.shopify.com/s/files/1/2711/4238/products/HTB1MzOISXXXXXXgXpXXq6xXFXXXO_1024x1024.jpg)

The XD75Re is a 15x5 full-grid ortholinear keyboard manufactured by XIUDI. This port of the QMK firmware is my first shot at using QMK, so if you see any features done wrong (or just plain missing), feel free to fix them and put in a pull request!

Keyboard Maintainer: [The QMK Community](https://github.com/qmk)  
Hardware Supported: XD75Re  
Hardware Availability: [KPrepublic](https://kprepublic.com/products/xd75re-xd75am-xd75-xiudi-60-custom-keyboard-pcb), [AliExpress](https://www.aliexpress.com/item/xd75re-Custom-Mechanical-Keyboard-75-keys-TKG-TOOLS-Underglow-RGB-PCB-GH60-60-programmed-gh60-kle/32818745981.html)

Make example for this keyboard (after setting up your build environment):

    make xd75:default

Flashing example:

    make xd75:default:dfu

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).


## LED control

There are 3 individual LEDs that can be turned on and off, plus the keycap LEDs (which are all wired into the same pin).  The functions are named according to how they're labeled on the PCB.

TODO: it would be nice to have PWM support on these LEDs for fade-in/fade-out effects.

```c
capslock_led_on();
gp100_led_on();
gp103_led_on();
keycaps_led_on();


// led_set_user example - you could also turn these on/off in response
// to events in process_record_user or matrix_scan_user
void led_set_user(uint8_t usb_led) {
    if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
        capslock_led_on();
    } else {
        capslock_led_off();
    }

    if (some_custom_state) {
      gp100_led_on();
    }
    else {
      gp100_led_off();
    }
}
```

For the curious:

```
CAPSLOCK_LED    B2
GP103_LED       F4
KEYCAPS_LED     F5
GP100_LED       F7
```
