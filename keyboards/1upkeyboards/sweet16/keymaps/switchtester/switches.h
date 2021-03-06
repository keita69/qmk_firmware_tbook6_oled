#pragma once

struct mechswitch
{
  unsigned int brand: 4;
  unsigned int variant: 4;
  unsigned int color: 5;
};

#define MAX_SWITCH_NAME_LENGTH 256

#define BRAND_KAILH     1
#define BRAND_KAILH_LOW 2
#define BRAND_GATERON   3
#define BRAND_CHERRY_MX 4
#define BRAND_CHERRY_ML 5
#define BRAND_OUTEMU    6
#define BRAND_GREETECH  7
#define BRAND_VARMILO   8
#define BRAND_MOD       9
#define BRAND_HAKO      10

#define COLOR_NO 0
#define COLOR_WHITE 1
#define COLOR_BLACK 2
#define COLOR_BLUE 3
#define COLOR_RED 4
#define COLOR_YELLOW 5
#define COLOR_BROWN 6
#define COLOR_GREEN 7
#define COLOR_CLEAR 8
#define COLOR_SILVER 9
#define COLOR_NATURE_WHITE 10
#define COLOR_GREY 11
#define COLOR_JADE 12
#define COLOR_NAVY 13
#define COLOR_BURNT_ORANGE 14
#define COLOR_PALE_BLUE 15
#define COLOR_DARK_YELLOW 16
#define COLOR_GOLD 17
#define COLOR_CHOCOLATE_WHITE 18
#define COLOR_BURGUNDY 19
#define COLOR_PURPLE 20
#define COLOR_LIGHT_GREEN 21
#define COLOR_TRUE 22
#define COLOR_BERRY 23
#define COLOR_PLUM 24
#define COLOR_SAGE 25
#define COLOR_VIOLET 26
#define COLOR_L 27
#define COLOR_M 28
#define COLOR_H 29
#define COLOR_SH 30

#define VARIANT_NO          0
#define VARIANT_BOX         1
#define VARIANT_BOX_THICK   2
#define VARIANT_BOX_HEAVY   3
#define VARIANT_SILENT      4
#define VARIANT_TACTILE     5
#define VARIANT_LINEAR      6
#define VARIANT_SPEED       7
#define VARIANT_SPEED_HEAVY 8
#define VARIANT_SPEED_CLICK_THICK 9
#define VARIANT_PRO         10
#define VARIANT_PRO_HEAVY   11
#define VARIANT_ROYAL       12
#define VARIANT_CLICK_THICK 13

#define CHERRY_MX_BLUE {BRAND_CHERRY_MX, VARIANT_NO, COLOR_BLUE}
#define CHERRY_MX_RED {BRAND_CHERRY_MX, VARIANT_NO, COLOR_RED}
#define CHERRY_MX_BROWN {BRAND_CHERRY_MX, VARIANT_NO, COLOR_BROWN}
#define CHERRY_MX_BLACK {BRAND_CHERRY_MX, VARIANT_NO, COLOR_BLACK}
#define CHERRY_MX_GREEN {BRAND_CHERRY_MX, VARIANT_NO, COLOR_GREEN}
#define CHERRY_MX_CLEAR {BRAND_CHERRY_MX, VARIANT_NO, COLOR_CLEAR}
#define CHERRY_MX_WHITE {BRAND_CHERRY_MX, VARIANT_NO, COLOR_WHITE}
#define CHERRY_MX_SILVER {BRAND_CHERRY_MX, VARIANT_NO, COLOR_SILVER}
#define CHERRY_MX_NATURE_WHITE {BRAND_CHERRY_MX, VARIANT_NO, COLOR_NATURE_WHITE}
#define CHERRY_MX_SILENT_BLACK {BRAND_CHERRY_MX, VARIANT_SILENT, COLOR_BLACK}
#define CHERRY_MX_SILENT_RED {BRAND_CHERRY_MX, VARIANT_SILENT, COLOR_RED}
#define CHERRY_MX_TACTILE_BLACK {BRAND_CHERRY_MX, VARIANT_SILENT, COLOR_GREY}
#define CHERRY_MX_LINEAR_BLACK {BRAND_CHERRY_MX, VARIANT_LINEAR, COLOR_GREY}

#define CHERRY_ML {BRAND_CHERRY_ML, VARIANT_NO, COLOR_NO}

#define GATERON_BLUE {BRAND_GATERON, VARIANT_NO, COLOR_BLUE}
#define GATERON_BROWN {BRAND_GATERON, VARIANT_NO, COLOR_BROWN}
#define GATERON_BLACK {BRAND_GATERON, VARIANT_NO, COLOR_BLACK}
#define GATERON_RED {BRAND_GATERON, VARIANT_NO, COLOR_RED}
#define GATERON_CLEAR {BRAND_GATERON, VARIANT_NO, COLOR_CLEAR}
#define GATERON_GREEN {BRAND_GATERON, VARIANT_NO, COLOR_GREEN}
#define GATERON_YELLOW {BRAND_GATERON, VARIANT_NO, COLOR_YELLOW}

#define GATERON_SILENT_CLEAR {BRAND_GATERON, VARIANT_SILENT, COLOR_CLEAR}
#define GATERON_SILENT_RED {BRAND_GATERON, VARIANT_SILENT, COLOR_RED}
#define GATERON_SILENT_YELLOW {BRAND_GATERON, VARIANT_SILENT, COLOR_YELLOW}
#define GATERON_SILENT_BLACK {BRAND_GATERON, VARIANT_SILENT, COLOR_BLACK}
#define GATERON_SILENT_BROWN {BRAND_GATERON, VARIANT_SILENT, COLOR_BROWN}

#define GREETECH_BLUE {BRAND_GREETECH, VARIANT_NO, COLOR_BLUE}
#define GREETECH_BROWN {BRAND_GREETECH, VARIANT_NO, COLOR_BROWN}
#define GREETECH_BLACK {BRAND_GREETECH, VARIANT_NO, COLOR_BLACK}
#define GREETECH_RED {BRAND_GREETECH, VARIANT_NO, COLOR_RED}

#define OUTEMU_BLUE {BRAND_OUTEMU, VARIANT_NO, COLOR_BLUE}
#define OUTEMU_BROWN {BRAND_OUTEMU, VARIANT_NO, COLOR_BROWN}
#define OUTEMU_BLACK {BRAND_OUTEMU, VARIANT_NO, COLOR_BLACK}
#define OUTEMU_RED {BRAND_OUTEMU, VARIANT_NO, COLOR_RED}

#define KAILH_BLUE {BRAND_KAILH, VARIANT_NO, COLOR_BLUE}
#define KAILH_BROWN {BRAND_KAILH, VARIANT_NO, COLOR_BROWN}
#define KAILH_BLACK {BRAND_KAILH, VARIANT_NO, COLOR_BLACK}
#define KAILH_RED {BRAND_KAILH, VARIANT_NO, COLOR_RED}
#define KAILH_GREEN {BRAND_KAILH, VARIANT_NO, COLOR_GREEN}

#define KAILH_BOX_WHITE {BRAND_KAILH, VARIANT_BOX, COLOR_WHITE}
#define KAILH_BOX_RED {BRAND_KAILH, VARIANT_BOX, COLOR_RED}
#define KAILH_BOX_BLACK {BRAND_KAILH, VARIANT_BOX, COLOR_BLACK}
#define KAILH_BOX_BROWN {BRAND_KAILH, VARIANT_BOX, COLOR_BROWN}
#define KAILH_BOX_ROYAL {BRAND_KAILH, VARIANT_BOX, COLOR_ROYAL}

#define KAILH_BOX_THICK_JADE {BRAND_KAILH, VARIANT_BOX_THICK, COLOR_JADE}
#define KAILH_BOX_THICK_NAVY {BRAND_KAILH, VARIANT_BOX_THICK, COLOR_NAVY}
#define KAILH_BOX_HEAVY_BURNT_ORANGE {BRAND_KAILH, VARIANT_BOX_HEAVY, COLOR_BURNT_ORANGE}
#define KAILH_BOX_HEAVY_PALE_BLUE {BRAND_KAILH, VARIANT_BOX_HEAVY, COLOR_PALE_BLUE}
#define KAILH_BOX_HEAVY_DARK_YELLOW {BRAND_KAILH, VARIANT_BOX_HEAVY, COLOR_DARK_YELLOW}

#define KAILH_SPEED_BRONZE {BRAND_KAILH, VARIANT_SPEED, COLOR_BRONZE}
#define KAILH_SPEED_COPPER {BRAND_KAILH, VARIANT_SPEED, COLOR_COPPER}
#define KAILH_SPEED_GOLD {BRAND_KAILH, VARIANT_SPEED, COLOR_GOLD}
#define KAILH_SPEED_SILVER {BRAND_KAILH, VARIANT_SPEED, COLOR_SILVER}

#define KAILH_SPEED_HEAVY_BURNT_ORANGE {BRAND_KAILH, VARIANT_SPEED_HEAVY, COLOR_BURNT_ORANGE}
#define KAILH_SPEED_HEAVY_PALE_BLUE {BRAND_KAILH, VARIANT_SPEED_HEAVY, COLOR_PALE_BLUE}
#define KAILH_SPEED_HEAVY_DARK_YELLOW {BRAND_KAILH, VARIANT_SPEED_HEAVY, COLOR_DARK_YELLOW}

#define KAILH_SPEED_THICK_CLICK_NAVY {BRAND_KAILH, VARIANT_SPEED_CLICK_THICK, COLOR_NAVY}

#define KAILH_PRO_BURGUNDY {BRAND_KAILH, VARIANT_PRO, COLOR_BURGUNDY}
#define KAILH_PRO_PURPLE {BRAND_KAILH, VARIANT_PRO, COLOR_PURPLE}
#define KAILH_PRO_LIGHT_GREEN {BRAND_KAILH, VARIANT_PRO, COLOR_LIGHT_GREEN}

#define KAILH_PRO_HEAVY_BERRY {BRAND_KAILH, VARIANT_PRO_HEAVY, COLOR_BERRY}
#define KAILH_PRO_HEAVY_PLUM {BRAND_KAILH, VARIANT_PRO_HEAVY, COLOR_PLUM}
#define KAILH_PRO_GEAVY_SAGE {BRAND_KAILH, VARIANT_PRO_HEAVY, COLOR_SAGE}

#define KAILH_LOW_WHITE {BRAND_KAILH_LOW, VARIANT_NO, COLOR_WHITE}
#define KAILH_LOW_BROWN {BRAND_KAILH_LOW, VARIANT_NO, COLOR_BROWN}
#define KAILH_LOW_RED {BRAND_KAILH_LOW, VARIANT_NO, COLOR_RED}
#define KAILH_LOW_CHOCOLATE_WHITE {BRAND_KAILH_LOW, VARIANT_NO, COLOR_CHOCOLATE_WHITE}
#define KAILH_LOW_THICK_CLICK_NAVY {BRAND_KAILH_LOW, VARIANT_THICK_CLICK, COLOR_NAVY}
#define KAILH_LOW_THICK_CLICK_JADE {BRAND_KAILH_LOW, VARIANT_THICK_CLICK, COLOR_JADE}
#define KAILH_LOW_HEAVY_DARK_YELLOW {BRAND_KAILH_LOW, VARIANT_HEAVY, COLOR_DARK_YELLOW}
#define KAILH_LOW_HEAVY_BURNT_ORANGE {BRAND_KAILH_LOW, VARIANT_HEAVY, COLOR_BURNT_ORANGE}
#define KAILH_LOW_HEAVY_PALE_BLUE {BRAND_KAILH_LOW, VARIANT_HEAVY, COLOR_PALE_BLUE}

#define HAKO_ROYAL_CLEAR {BRAND_HAKO, VARIANT_ROYAL, COLOR_CLEAR}
#define HAKO_ROYAL_TRUE {BRAND_HAKO, VARIANT_ROYAL, COLOR_TRUE}

#define HAKO_CLEAR {BRAND_HAKO, VARIANT_NO, COLOR_CLEAR}
#define HAKO_TRUE {BRAND_HAKO, VARIANT_NO, COLOR_TRUE}
#define HAKO_VIOLET {BRAND_HAKO, VARIANT_NO, COLOR_VIOLET}

#define MOD_L_TACTILE {BRAND_MOD, VARIANT_TACTILE, COLOR_L}
#define MOD_M_TACTILE {BRAND_MOD, VARIANT_TACTILE, COLOR_M}
#define MOD_H_TACTILE {BRAND_MOD, VARIANT_TACTILE, COLOR_H}
#define MOD_SH_TACTILE {BRAND_MOD, VARIANT_TACTILE, COLOR_SH}

#define MOD_L_LINEAR {BRAND_MOD, VARIANT_LINEAR, COLOR_L}
#define MOD_M_LINEAR {BRAND_MOD, VARIANT_LINEAR, COLOR_M}
#define MOD_H_LINEAR {BRAND_MOD, VARIANT_LINEAR, COLOR_H}

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0') 


const char *brand_name(struct mechswitch ms);
const char *variant_name(struct mechswitch ms);
const char *color_name(struct mechswitch ms);
void switch_name(struct mechswitch ms, char *buf);
int bitfieldtoi(struct mechswitch ms);
