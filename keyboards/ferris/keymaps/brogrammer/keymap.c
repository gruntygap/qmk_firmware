#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum ferris_layers {
  _QWERTY,
  _GAME,
  _NUM,
  _SYB,
  _COMBO,
  _MOUSE,
  _PAD,
  _FN
};

enum ferris_tap_dances {
  Q_ESC
};

#define KC_LSA LSFT_T(KC_A)
#define KC_LAS LALT_T(KC_S)
#define KC_LCD LCTL_T(KC_D)
#define KC_LGF LGUI_T(KC_F)

#define KC_RGJ RGUI_T(KC_J)
#define KC_RCK RCTL_T(KC_K)
#define KC_RAL RALT_T(KC_L)
#define KC_RSS RSFT_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_split_3x5_2(
        TD(Q_ESC),  KC_W,       KC_E,       KC_R,       KC_T,               KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,
        KC_LSA,     KC_LAS,     KC_LCD,     KC_LGF,     KC_G,               KC_H,       KC_RGJ,     KC_RCK,     KC_RAL,     KC_RSS,
        KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,               KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,
        LT(_SYB,KC_ESC), KC_BSPC, 											KC_SPC, LT(_NUM,KC_ENT)
    ),
    [_NUM] = LAYOUT_split_3x5_2(
        KC_1, KC_2, KC_3, KC_4, KC_5,                       KC_6, KC_7, KC_8, KC_9, KC_0,
        KC_DEL, KC_CAPS, KC_PSCR, KC_INS, KC_TAB,          KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,
        TO(_PAD), TO(_FN), TO(_GAME), KC_TAB, KC_TAB,     KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,
        LT(_COMBO,KC_TAB), KC_TRNS,                          KC_NO, KC_NO
    ),
    [_GAME] = LAYOUT_split_3x5_2(
        KC_ESC,  KC_Q, KC_W, KC_E, KC_R, 	KC_T, KC_Y, KC_U, KC_I, KC_O,
        KC_LCTL, KC_A, KC_S, KC_D, KC_F, 	KC_G, KC_H, KC_J, KC_K, KC_L,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, 	KC_B, KC_N, KC_M, KC_P, KC_LALT,
        MO(_NUM), KC_SPC, 				KC_BSPC, TO(_QWERTY)
    ),
    [_SYB] = LAYOUT_split_3x5_2(
        KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,           KC_CIRC, KC_AMPR, KC_ASTR, KC_GRV, KC_TILD,
        KC_DQUO, KC_LBRC, KC_LCBR, KC_LPRN, KC_TRNS,        KC_SLSH, KC_MINS, KC_EQL, KC_COLN, KC_SCLN,
        KC_QUOT, KC_RBRC, KC_RCBR, KC_RPRN, KC_TRNS,        KC_BSLS, KC_UNDS, KC_PLUS, KC_PIPE, KC_QUES,
        KC_NO, KC_NO,                                       KC_TAB, LT(_COMBO,KC_TAB)
    ),
    [_COMBO] = LAYOUT_split_3x5_2(
        KC_F1, KC_F2, KC_F3, KC_F4, QK_BOOT,        KC_VOLU, KC_MNXT, KC_NO, KC_NO, KC_NO,
        KC_F5, KC_F6, KC_F7, KC_F8, QK_BOOT,        KC_MUTE, KC_MPLY, TO(_MOUSE), KC_NO, KC_NO,
        KC_F9, KC_F10, KC_F11, KC_F12, QK_BOOT,     KC_VOLD, KC_MPRV, KC_NO, KC_NO, KC_NO,
        KC_VOLD, KC_VOLU,                           KC_VOLD, KC_VOLU
    ),
    [_MOUSE] = LAYOUT_split_3x5_2(
        KC_ACL0, KC_NO, KC_BTN4, KC_BTN5, KC_NO,    KC_ACL0, KC_BTN4, KC_BTN1, KC_BTN2, KC_BTN5,
        KC_ACL1, KC_NO, KC_BTN2, KC_BTN1, KC_NO,    KC_ACL1, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
        KC_ACL2, KC_NO, KC_NO, KC_NO, KC_NO,        KC_ACL2, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
        TO(_QWERTY), TO(_QWERTY),                   TO(_QWERTY), TO(_QWERTY)
    ),
    [_PAD] = LAYOUT_split_3x5_2(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,          KC_PSLS, KC_P7, KC_P8, KC_P9, KC_PMNS,
        KC_LSFT, KC_LALT, KC_LCTL, KC_LGUI,         KC_NUM, KC_PAST, KC_P4, KC_P5, KC_P6,
        KC_PPLS, KC_TRNS, KC_NO, KC_NO, KC_NO,      KC_NO, KC_PDOT, KC_P1, KC_P2, KC_P3, KC_EQL,
        TO(_QWERTY), TO(_QWERTY),                   KC_PENT, KC_P0
    ),
    [_FN] = LAYOUT_split_3x5_2(
        KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,		KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,
        KC_F11, KC_F12, KC_F13, KC_F14, KC_F15, 	KC_F16, KC_F17, KC_F18, KC_F19, KC_F20,
        KC_F21, KC_F22, KC_F23, KC_F24, KC_NO,		KC_NO,  KC_NO,  KC_NO,  KC_SLEP,KC_PWR,
        TO(_QWERTY),  TO(_QWERTY),					TO(_QWERTY), TO(_QWERTY)
    )
};

// Tap Dance Definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Q, twice for ESC
    [Q_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC)
};
