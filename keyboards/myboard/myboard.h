#pragma once
#include "quantum.h"

/*
 * Row3 verified by pin testing:
 * GP4=col0=LCtrl, GP5=col1=Win, GP6=col2=LAlt, GP7=col3=Del
 * GP9=col5=MO(Fn), GP10=col6=Space
 * GP13=col9=PrtSc, GP14=col10=RAlt, GP26=col12=Win
 * RCtrl = col13 (GP27)
 *
 *        col0  col1  col2  col3  col4  col5    col6   col7  col8  col9   col10  col11  col12  col13
 * row3:  LCtrl Win   LAlt  Del   ---   MO(Fn)  Space  ---   ---   PrtSc  RAlt   ---    Win    RCtrl
 */

#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A,      K2C, K2D, \
    K30, K31, K32, K33,      K35, K36,           K39, K3A,       K3C, K3D  \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B,   K0C,   K0D   }, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B,   K1C,   KC_NO }, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   KC_NO, K2C,   K2D   }, \
    { K30,   K31,   K32,   K33,   KC_NO, K35,   K36,   KC_NO, KC_NO, K39,   K3A,   KC_NO, K3C,   K3D   } \
}
