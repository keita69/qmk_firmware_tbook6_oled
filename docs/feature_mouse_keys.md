# Mousekeys


Mousekeys is a feature that allows you to emulate a mouse using your keyboard. You can move the pointer around, click up to 5 buttons, and even scroll in all 4 directions.

There are 2 ways to define how the mousekeys behave, using "[auto-accelerating](#configuring-the-behavior-of-mousekeys-with-auto-accelerated-movement)" or "[3-speed constant](#configuring-the-behavior-of-mousekeys-with-3-speed-constant-movement)" behavior.

In either case, you will need to enable mousekeys in your makefile,
and add the relevant [keycodes](#mapping-mouse-actions-to-keyboard-keys) to your keymap.

#### Enable Mousekeys

To enable the mousekey functionality, add the following line to your keymap's `rules.mk`:

```
MOUSEKEY_ENABLE = yes
```

#### Mapping Mouse Actions to Keyboard Keys

You can use these keycodes within your keymap to map button presses to mouse actions:

|Key             |Aliases  |Description                        |
|----------------|---------|-----------------------------------|
|`KC_MS_UP`      |`KC_MS_U`|Mouse Cursor Up                    |
|`KC_MS_DOWN`    |`KC_MS_D`|Mouse Cursor Down                  |
|`KC_MS_LEFT`    |`KC_MS_L`|Mouse Cursor Left                  |
|`KC_MS_RIGHT`   |`KC_MS_R`|Mouse Cursor Right                 |
|`KC_MS_BTN1`    |`KC_BTN1`|Mouse Button 1                     |
|`KC_MS_BTN2`    |`KC_BTN2`|Mouse Button 2                     |
|`KC_MS_BTN3`    |`KC_BTN3`|Mouse Button 3                     |
|`KC_MS_BTN4`    |`KC_BTN4`|Mouse Button 4                     |
|`KC_MS_BTN5`    |`KC_BTN5`|Mouse Button 5                     |
|`KC_MS_WH_UP`   |`KC_WH_U`|Mouse Wheel Up                     |
|`KC_MS_WH_DOWN` |`KC_WH_D`|Mouse Wheel Down                   |
|`KC_MS_WH_LEFT` |`KC_WH_L`|Mouse Wheel Left                   |
|`KC_MS_WH_RIGHT`|`KC_WH_R`|Mouse Wheel Right                  |
|`KC_MS_ACCEL0`  |`KC_ACL0`|Set mouse acceleration to 0(slow)  |
|`KC_MS_ACCEL1`  |`KC_ACL1`|Set mouse acceleration to 1(medium)|
|`KC_MS_ACCEL2`  |`KC_ACL2`|Set mouse acceleration to 2(fast)  |


## Configuring the Behavior of Mousekeys with auto-accelerated movement

This behavior is intended to emulate the X Window System MouseKeysAccel feature. You can read more about it [on Wikipedia](https://en.wikipedia.org/wiki/Mouse_keys).

The default speed for controlling the mouse with the keyboard is intentionally slow. You can adjust these parameters by adding these settings to your keymap's `config.h` file. All times are specified in milliseconds (ms).

```
#define MOUSEKEY_DELAY             300
#define MOUSEKEY_INTERVAL          50
#define MOUSEKEY_MAX_SPEED         10
#define MOUSEKEY_TIME_TO_MAX       20
#define MOUSEKEY_WHEEL_MAX_SPEED   8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40
```

#### `MOUSEKEY_DELAY`

When one of the mouse movement buttons is pressed this setting is used to define the delay between that button press and the mouse cursor moving. Some people find that small movements are impossible if this setting is too low, while settings that are too high feel sluggish.

#### `MOUSEKEY_INTERVAL`

When a movement key is held down this specifies how long to wait between each movement report. Lower settings will translate into an effectively higher mouse speed.

#### `MOUSEKEY_MAX_SPEED`

As a movement key is held down the speed of the mouse cursor will increase until it reaches `MOUSEKEY_MAX_SPEED`.

#### `MOUSEKEY_TIME_TO_MAX`

How long you want to hold down a movement key for until `MOUSEKEY_MAX_SPEED` is reached. This controls how quickly your cursor will accelerate.

#### `MOUSEKEY_WHEEL_MAX_SPEED`

The top speed for scrolling movements.

#### `MOUSEKEY_WHEEL_TIME_TO_MAX`

How long you want to hold down a scroll key for until `MOUSEKEY_WHEEL_MAX_SPEED` is reached. This controls how quickly your scrolling will accelerate.


## Configuring the Behavior of Mousekeys with 3-speed constant movement

In your keymap's `config.h`, you must add the line:
```
#define MK_3_SPEED
```
Then you can precisely define 3 different speeds for both the cursor and the mouse wheel, and also whether speed selection is momentary or tap-to-select.
For each speed, you can specify how many milliseconds you want between reports(interval), and how far you want to it to move per report(offset).

For example:

```
#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL // comment this out for tap-to-select acceleration
// cursor speeds:
#define MK_C_OFFSET_SLOW     1 // pixels
#define MK_C_INTERVAL_SLOW 100 // milliseconds
#define MK_C_OFFSET_MED      4
#define MK_C_INTERVAL_MED   16
#define MK_C_OFFSET_FAST    12
#define MK_C_INTERVAL_FAST  16
// scroll wheel speeds:
#define MK_W_OFFSET_SLOW     1 // wheel clicks
#define MK_W_INTERVAL_SLOW 400 // milliseconds
#define MK_W_OFFSET_MED      1
#define MK_W_INTERVAL_MED  200
#define MK_W_OFFSET_FAST     1
#define MK_W_INTERVAL_FAST 100
```

Medium values will be used as the default or unmodified speed.
The speed at which both the cursor and scrolling move can be selected with KC_ACL0, KC_ACL1, KC_ACL2 for slow, medium, and fast. However, if you leave MK_MOMENTARY_ACCEL defined then there is no need to ever send KC_ACL1, since that will be the unmodified speed.
