#pragma once
#include "quantum.h"

/*
 * Row3 verified by pin testing:
 * GP4=col0=LCtrl, GP5=col1=Win, GP6=col2=LAlt, GP7=col3=Del
 * GP8=col4=Space, GP9=col5=PrtSc, GP10=col6=MO(Fn)
 * GP11=col7=RAlt, GP12=col8=Win, GP13=col9=RCtrl
 */

#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A,      K2C, K2D, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39             \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B,   K0C,   K0D   }, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B,   K1C,   KC_NO }, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   KC_NO, K2C,   K2D   }, \
    { K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37,   K38,   K39,   KC_NO, KC_NO, KC_NO, KC_NO } \
}
