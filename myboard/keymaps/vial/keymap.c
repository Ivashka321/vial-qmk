#include QMK_KEYBOARD_H

enum layers {
    _BASE = 0,
    _FN,
    _EMPTY2,
    _EMPTY3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
     * Row0: Tab  Q    W    E    R    T    Y    U    I    O    P    [    ]    Bksp
     * Row1: LCtrl A   S    D    F    G    H    J    K    L    ;    '    Enter
     * Row2: LSft  Z    X    C    V    B    N    M    ,    .    /    RSft Fn
     * Row3: LCtrl Win  LAlt Del  SPC  PrtSc MO(1) RAlt Win  RCtrl
     *
     * Real matrix positions row3:
     * col0=LCtrl col1=Win col2=LAlt col3=Del
     * col5=Space col6=PrtSc col7=MO(Fn) col8=RAlt col9=Win col10=RCtrl
     */
    [_BASE] = LAYOUT(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(_FN),
        KC_LCTL, KC_LGUI, KC_LALT, KC_DEL,           KC_SPC,  KC_PSCR, MO(_FN), KC_RALT, KC_RGUI, QK_CLEAR_EEPROM
    ),

    [_FN] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_UP,   KC_F12,  KC_DEL,
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_LEFT, KC_RGHT, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_0,    KC_DOWN, _______, _______,
        _______, _______, _______, _______,           _______, _______, MO(_FN), _______, _______, _______
    ),

    [_EMPTY2] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______
    ),

    [_EMPTY3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______
    )
};
