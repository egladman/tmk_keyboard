/*
 * HHKB Layout
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif

  /* 0: qwerty */
  KEYMAP(
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
    LGUI,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,             \
    LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,FN9,FN0,             \
         FN10,LALT,          FN8,                FN2, FN1),

  /* 1: colemak */
  KEYMAP(
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,  \
    TAB, Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCLN,   LBRC,RBRC,BSPC,   \
    LGUI,A,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT,ENT,               \
    LSFT,Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,FN9,FN0,            \
         FN10,LALT,          FN8,                FN2, FN1),

  /* 2: dvorak */
  KEYMAP(
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   LBRC,RBRC,BSLS,GRV,  \
    TAB,QUOT, COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   SLSH,EQL,BSPC,       \
    LGUI,A,   O,   E,   U,   I,   D,   H,   T,   N,   S,   MINS,ENT,            \
    LSFT,SCLN, Q,   J,   K,   X,   B,   M,   W,   V,   Z,  FN9,FN0,            \
         FN10,LALT,          FN8,                FN2, FN1),

  /* 3: workman */
  KEYMAP(
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,  \
    TAB, Q,   D,   R,   W,   B,   J,   F,   U,   P,   SCLN,LBRC,RBRC,BSPC,      \
    LGUI,A,   S,   H,   T,   G,   Y,   N,   E,   O,   I,   QUOT,ENT,            \
    LSFT,Z,   X,   M,   C,   V,   K,   L,   COMM,DOT, SLSH,FN9,FN0,            \
         FN10,LALT,          FN8,                FN2, FN1),

  /* 4: Primary Function Layer */
  KEYMAP(
    PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,  \
    CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS, UP, TRNS,BSPC,      \
    TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,PENT,           \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,           \
         TRNS,TRNS,          TRNS,               TRNS,TRNS),

  /* 5: Mouse Mode */
  KEYMAP(
    TRNS,ACL0,ACL1,ACL2,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
    TRNS,TRNS,MS_U,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WH_U,TRNS,TRNS,      \
    TRNS,MS_L,MS_D,MS_R,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WH_L,WH_R,TRNS,           \
    TRNS,TRNS,TRNS,BTN3,BTN1,BTN2,BTN4,BTN5,TRNS,TRNS,WH_D,TRNS,TRNS,           \
         TRNS,TRNS,          BTN1,               TRNS,TRNS),

  /* 6: Layout selector */
  KEYMAP(
    TRNS,FN4, FN5, FN6, FN7, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WBAK,WFWD,TRNS,TRNS,TRNS,           \
         TRNS,TRNS,          TRNS,               TRNS,TRNS),

};



/*
 * Fn action definition
 */

const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
    [0]  = ACTION_LAYER_MOMENTARY(4), // to Primary Function overlay
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