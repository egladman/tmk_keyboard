#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* 0: qwerty */
  KEYMAP_ANSI(
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
    LGUI,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
    LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          FN9,  \
    FN10,FN0,LALT,          FN8,                     RALT, FN2, FN1, FN0),

  /* 1: colemak */
  KEYMAP_ANSI(
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
    TAB, Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCLN,LBRC,RBRC,BSLS, \
    BSPC,A,   R,   S,   T,   D,   H,   N,   E,   I,   O,   QUOT,     ENT,  \
    LSFT,Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,          FN9,  \
    FN10,FN0,LALT,          FN8,                     RALT, FN2, FN1, FN0),

  /* 2: dvorak */
  KEYMAP_ANSI(
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   LBRC,RBRC,BSPC, \
    TAB, QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   SLSH,EQL, BSLS, \
    LGUI,A,   O,   E,   U,   I,   D,   H,   T,   N,   S,   MINS,     ENT,  \
    LSFT,SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z,             FN9,  \
    FN10,FN0,LALT,          FN8,                     RALT, FN2, FN1, FN0),

  /* 3: workman */
  KEYMAP_ANSI(
      ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
      TAB, Q,   D,   R,   W,   B,   J,   F,   U,   P,   SCLN,LBRC,RBRC,BSLS, \
      LGUI,A,   S,   H,   T,   G,   Y,   N,   E,   O,   I,   QUOT,     ENT,  \
      LSFT,Z,   X,   M,   C,   V,   K,   L,   COMM,DOT, SLSH,          FN9,  \
      FN10,FN0,LALT,          FN8,                     RALT, FN2, FN1, FN0),

  /* 4: Primary Function Layer */
  KEYMAP_ANSI(
    GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,   DEL, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,TRNS,UP,  SYSREQ,INS, \
    TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,TRNS,TRNS,HOME,PGUP,LEFT,RGHT,TRNS,       \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,END, PGDN,DOWN,TRNS,            \
    TRNS,TRNS,TRNS,          TRNS,                     TRNS,TRNS,TRNS,TRNS),

  /* 5: Mouse Mode */
  KEYMAP_ANSI(
    TRNS,ACL0,ACL1,ACL2,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
    TRNS,TRNS,MS_U,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WH_U,TRNS,TRNS, \
    TRNS,MS_L,MS_D,MS_R,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WH_L,WH_R,     TRNS, \
    TRNS,TRNS,TRNS,BTN3,BTN1,BTN2,BTN4,BTN5,TRNS,TRNS,WH_D,          TRNS, \
    TRNS,TRNS,TRNS,          BTN1,                    TRNS,TRNS,TRNS,TRNS),

  /* 6: Layout selector */
  KEYMAP_ANSI(
    TRNS,FN4, FN5, FN6, FN7, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,SLEP,PWR, TRNS, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WBAK,WFWD,TRNS,          TRNS, \
    TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(4),  // to Primary Function overlay
  [1] = ACTION_LAYER_MOMENTARY(6),  // to Layout Selector overlay
  [2] = ACTION_LAYER_MOMENTARY(5),  // to Mouse Mode

  [4] = ACTION_DEFAULT_LAYER_SET(0),  // set qwerty layout
  [5] = ACTION_DEFAULT_LAYER_SET(1),  // set colemak layout
  [6] = ACTION_DEFAULT_LAYER_SET(2),  // set dvorak layout
  [7] = ACTION_DEFAULT_LAYER_SET(3),  // set workman layout

  [8] = ACTION_LAYER_TAP_KEY(4, KC_SPC),
  [9] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_GRV),
  [10] = ACTION_MODS_ONESHOT(MOD_LCTL),
};