#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4
#define _LAYER5 5
#define _LAYER6 6
#define _LAYER7 7
#define _LAYER8 8

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
    LAYER5,
    LAYER6,
    LAYER7,
    LAYER8,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_NO, KC_NO, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, KC_A, KC_R, KC_S, KC_T, KC_G, KC_NO, KC_NO, KC_M, KC_N, KC_E, KC_I, KC_O, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_NO, KC_NO, KC_NO, KC_NO, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, LT(4,KC_ESC), LSFT_T(KC_SPC), LT(7,KC_TAB), LT(3,KC_ENT), LT(2,KC_BSPC), LT(5,KC_DEL)),

[_LAYER1] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_QUOT, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_N, KC_M, KC_COMM, KC_COMM, KC_SLSH, KC_RSFT, KC_LALT, KC_SPC, LT(6,KC_HOME), LT(3,KC_ENT), LT(2,KC_BSPC), LT(5,KC_DEL)),

[_LAYER2] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SCLN, KC_4, KC_5, KC_6, KC_EQL, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, KC_GRV, KC_1, KC_2, KC_3, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DOT, KC_0, KC_MINS, KC_NO, KC_TRNS, KC_NO),

[_LAYER3] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_LSFT, KC_LALT, KC_RGUI, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_UNDS, KC_TRNS, KC_NO, KC_NO),

[_LAYER4] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_Y), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, SGUI(KC_Z), SGUI(KC_S), KC_ENT, KC_BSPC, KC_DEL),

[_LAYER5] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_BTN5, KC_BTN4, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN3, KC_BTN1, KC_BTN2, KC_NO, KC_NO, KC_TRNS),

[_LAYER6] = LAYOUT(KC_GRV, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F10, KC_F7, KC_F8, KC_F9, KC_Y, KC_U, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, KC_H, KC_J, KC_NO, KC_NO, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, KC_F12, KC_F1, KC_F2, KC_F3, KC_N, KC_M, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DF(0), DF(1), KC_TRNS, MO(8), KC_NO, KC_NO),

[_LAYER7] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MSTP, KC_MRWD, KC_MFFD, KC_MPLY, KC_INS, KC_NO, KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_CAPS, KC_NO, KC_NO, KC_NO, KC_F4, KC_F5, KC_F6, KC_F11, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F12, DF(0), DF(1), KC_TRNS, MO(8), KC_PSCR, KC_NO),

[_LAYER8] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, BL_BRTG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, BL_STEP, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, BL_TOGG, RGB_TOG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, QK_BOOT, KC_NO) 

};