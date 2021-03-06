/* Copyright 2018 Yiancar
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
#ifndef LEFT_H
#define LEFT_H

#include "quantum.h"

#define XXX KC_NO

// This a shortcut to help you visually see your layout.
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
#define LAYOUT_ansi( \
    K00, K01, K02, K03, K04, K05, K45,        K07, K08, K09, K0A, K0B, K0C, K0D,   K0E, K0F, K0G,   K0H, K0J, K0K, K0L, \
    K10, K11, K12, K13, K14, K15,        K16, K17, K18, K19, K1A, K1B, K1C, K1D,   K1E, K1F, K1G,   K1H, K1J, K1K, K1L, \
    K20, K21, K22, K23, K24, K25,        K26, K27, K28, K29, K2A, K2B,      K2D,                    K2H, K2J, K2K, K2L, \
    K30, K31, K32, K33, K34, K35,        K36, K37, K38, K39, K3A,           K3D,        K3F,        K3H, K3J, K3K,      \
    K40, K41, K42, K43,                  K46, K47, K48, K49, K4A, K4B,             K4E, K4F, K4G,   K4H, K4J, K4K, K4L  \
) \
{ \
    { K00, K01, K02, K03, K04, K05,   XXX, K07, K08, K09, K0A, K0B, K0C, K0D,   K0E, K0F, K0G,   K0H, K0J, K0K, K0L }, \
    { K10, K11, K12, K13, K14, K15,   K16, K17, K18, K19, K1A, K1B, K1C, K1D,   K1E, K1F, K1G,   K1H, K1J, K1K, K1L }, \
    { K20, K21, K22, K23, K24, K25,   K26, K27, K28, K29, K2A, K2B, XXX, K2D,   XXX, XXX, XXX,   K2H, K2J, K2K, K2L }, \
    { K30, K31, K32, K33, K34, K35,   K36, K37, K38, K39, K3A, XXX, XXX, K3D,   XXX, K3F, XXX,   K3H, K3J, K3K, XXX }, \
    { K40, K41, K42, K43, XXX, K45,   K46, K47, K48, K49, K4A, K4B, XXX, XXX,   K4E, K4F, K4G,   K4H, K4J, K4K, K4L }  \
}

#endif
