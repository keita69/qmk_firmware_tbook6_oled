/* Copyright 2018 MechMerlin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef AL1_H
#define AL1_H

#include "quantum.h"

#define CONFIG_LED_IO \
  DDRB |= (1<<7) | (1<<6); \
  DDRD |= (1<<0) | (1<<1);


#define LAYOUT( \
               K500, K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, K415, K414,\
               K501, K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, K215, K413,\
               K502, K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211,             K212, K213, K214,      \
               K503, K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K312, K313, K314, K315, K412,\
               K400, K401, K402, K403, K404, K405, K406,                                     K407, K408, K409, K410, K411       \
) \
{ \
    { K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015}, \
    { K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115}, \
    { K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215}, \
    { K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314, K315}, \
    { K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411, K412, K413, K414, K415}, \
    { K500, K501, K502, K503, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO} \
}

#define LAYOUT_split_bs( \
               K500, K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K512, K012, K013, K014, K015, K415, K414, \
               K501, K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, K215, K413,\
               K502, K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211,             K212, K213, K214,      \
               K503, K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K312, K313, K314, K315, K412,\
               K400, K401, K402, K403, K404, K405, K406,                                     K407, K408, K409, K410, K411       \
) \
{ \
    { K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015}, \
    { K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115}, \
    { K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215}, \
    { K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314, K315}, \
    { K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411, K412, K413, K414, K415}, \
    { K500, K501, K502, K503, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K512, KC_NO, KC_NO, KC_NO} \
}

#endif
