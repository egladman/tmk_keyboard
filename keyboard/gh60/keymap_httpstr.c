#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: qwerty */
  KEYMAP_ANSI(
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
    LGUI,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
    LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
    LCTL,LGUI,LALT,          SPC,                     RALT, RGUI,APP, FN0),
  /* 1: colemak */
  KEYMAP_ANSI(
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
    TAB, Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCLN,LBRC,RBRC,BSLS, \
    BSPC,A,   R,   S,   T,   D,   H,   N,   E,   I,   O,   QUOT,     ENT,  \
    LSFT,Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,          FN0, \
    LCTL,LGUI,LALT,          SPC,                     RALT, RGUI,APP, FN0),
  /* 2: dvorak */
  KEYMAP_ANSI(
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   LBRC,RBRC,BSPC, \
    TAB, QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   SLSH,EQL, BSLS, \
    LGUI,A,   O,   E,   U,   I,   D,   H,   T,   N,   S,   MINS,     ENT,  \
    LSFT,SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z,             FN0, \
    LCTL,LGUI,LALT,          SPC,                     RALT, RGUI,APP, FN0),
  /* 3: workman */
  KEYMAP_ANSI(
      GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
      TAB, Q,   D,   R,   W,   B,   J,   F,   U,   P,   SCLN,LBRC,RBRC,BSLS, \
      BSPC,A,   S,   H,   T,   G,   Y,   N,   E,   O,   I,   QUOT,     ENT,  \
      LSFT,Z,   X,   M,   C,   V,   K,   L,   COMM,DOT, SLSH,          FN0, \
      LCTL,LGUI,LALT,          SPC,                     RALT, RGUI,APP, FN0),
  /* 4: Poker with Arrow */
  KEYMAP_ANSI(
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,   \
    TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
  /* 5: Poker with Esc */
  KEYMAP_ANSI(
    TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
    TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
  /* 6: Foo */
  KEYMAP_ANSI(
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, \
    TRNS, TRNS, TRNS,  TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,TRNS,UP,TRNS, INS, \
    TRNS, VOLD,VOLU,MUTE,TRNS,TRNS,TRNS,TRNS,HOME,PGUP,LEFT, RGHT, TRNS, \
    TRNS,TRNS, TRNS,BTN3,BTN2,BTN1,BTN4,BTN5,END,PGDN,DOWN,         TRNS, \
    TRNS,TRNS,TRNS,          BTN1,                     FN0,FN1,FN2,TRNS),
};
const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(6),  // to Fn overlay
  [1] = ACTION_DEFAULT_LAYER_SET(1),  // set colemak layout
  // [7] = ACTION_DEFAULT_LAYER_SET(2),  // set dvorak layout
};
