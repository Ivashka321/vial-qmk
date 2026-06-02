#pragma once
#include "quantum.h"

/*
 * Matrix: 4 rows x 14 cols
 *
 * Row 0: cols 0-13 (14 keys, no gaps)
 * Row 1: cols 0-12 (13 keys, no gaps)
 * Row 2: cols 0-10, 12, 13 (13 keys, col11 empty)
 * Row 3: cols 0-3, 5, 6, 7, 8, 9, 10 (10 keys, col4 empty, col11-13 empty)
 *
 * Real hardware (verified by pin testing):
 * Row3: col0=LCtrl col1=Win col2=LAlt col3=Del
 *       col5=Space col6=PrtSc col7=MO(Fn) col8=Win col9=RCtrl
 *
 *        col0  col1  col2  col3  col4  col5  col6  col7  col8  col9  col10 col11 col12 col13
 * row0:  K00   K01   K02   K03   K04   K05   K06   K07   K08   K09   K0A   K0B   K0C   K0D
 * row1:  K10   K11   K12   K13   K14   K15   K16   K17   K18   K19   K1A   K1B   K1C   ---
 * row2:  K20   K21   K22   K23   K24   K25   K26   K27   K28   K29   K2A   ---   K2C   K2D
 * row3:  K30   K31   K32   K33   ---   K35   K36   K37   K38   K39   ---   ---   ---   ---
 */

#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A,      K2C, K2D, \
    K30, K31, K32, K33,      K35, K36, K37, K38, K39                       \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B,   K0C,   K0D   }, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B,   K1C,   KC_NO }, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   KC_NO, K2C,   K2D   }, \
    { K30,   K31,   K32,   K33,   KC_NO, K35,   K36,   K37,   K38,   K39,   KC_NO, KC_NO, KC_NO, KC_NO } \
}
