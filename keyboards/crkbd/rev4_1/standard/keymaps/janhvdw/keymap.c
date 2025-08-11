/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdint.h>
#include QMK_KEYBOARD_H

// L1 home row mods
const uint16_t LCTL_A = LCTL_T(KC_A);
const uint16_t LALT_S = LALT_T(KC_S);
const uint16_t LGUI_D = LGUI_T(KC_D);
const uint16_t LSFT_F = LSFT_T(KC_T);
const uint16_t RSFT_J = RSFT_T(KC_J);
const uint16_t RGUI_K = RGUI_T(KC_K);
const uint16_t RALT_L = RALT_T(KC_L);
const uint16_t RCTL_SCLN = RCTL_T(KC_SCLN);

// L2 home row mods
const uint16_t LCTL_HOME = LCTL_T(KC_HOME);
const uint16_t LALT_PGUP = LALT_T(KC_PGUP);
const uint16_t LGUI_PGDN = LGUI_T(KC_PGDN);
const uint16_t LSFT_END = LSFT_T(KC_END);
const uint16_t RSFT_DOWN = RSFT_T(KC_DOWN);
const uint16_t RGUI_UP = RGUI_T(KC_UP);
const uint16_t RALT_RGHT = RALT_T(KC_RGHT);
const uint16_t RCTL_MINS = RCTL_T(KC_MINS);

// L3 home row mods
const uint16_t LCTL_MPLY = LCTL_T(KC_MPLY);
const uint16_t LALT_MSTP = LALT_T(KC_MSTP);
const uint16_t LGUI_VOLD = LGUI_T(KC_VOLD);
const uint16_t LSFT_VOLU = LSFT_T(KC_VOLU);
const uint16_t RSFT_MRWD = RSFT_T(KC_MRWD);
const uint16_t RGUI_MPLY = RGUI_T(KC_MPLY);
const uint16_t RALT_MFFD = RALT_T(KC_MFFD);
const uint16_t RCTL_F11 = RCTL_T(KC_F11);


const uint16_t LT3_NO = LT(3, KC_NO);
const uint16_t LGUI_BSPC = LGUI_T(KC_BSPC);
const uint16_t LT1_SPC = LT(1, KC_SPC);
const uint16_t LT2_ENT = LT(2, KC_ENT);
const uint16_t RGUI_DEL = RGUI_T(KC_DEL);

#ifdef LAYOUT_split_3x6_3_ex2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3_ex2(
//,----------------------------------------------------------------------------,          ,----------------------------------------------------------------------------,
       KC_TAB,      KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,     KC_NO,                KC_NO,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,   KC_BSPC,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
       KC_ESC,    LCTL_A,    LALT_S,    LGUI_D,    LSFT_F,      KC_G,     KC_NO,                KC_NO,      KC_H,    RSFT_J,    RGUI_K,    RALT_L, RCTL_SCLN,   KC_QUOT,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
       KC_GRV,      KC_Z,      KC_X,      KC_C,      KC_V,      KC_B, /*XXXXXX*/            /*XXXXXX*/      KC_N,      KC_M,   KC_COMM,    KC_DOT,   KC_SLSH,     KC_NO,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
    /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/    LT3_NO, LGUI_BSPC,   LT1_SPC,              LT2_ENT,  RGUI_DEL,     KC_NO /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/
//,----------------------------------------------------------------------------,          ,----------------------------------------------------------------------------,
	),
    [1] = LAYOUT_split_3x6_3_ex2(
//,----------------------------------------------------------------------------,          ,----------------------------------------------------------------------------,
       KC_GRV,      KC_1,      KC_2,      KC_3,      KC_4,      KC_5,   KC_TRNS,              KC_TRNS,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,   KC_BSPC,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
      KC_CAPS, LCTL_HOME, LALT_PGUP, LGUI_PGDN,  LSFT_END,    KC_INS,   KC_TRNS,              KC_TRNS,   KC_LEFT, RSFT_DOWN,   RGUI_UP, RALT_RGHT, RCTL_MINS,    KC_EQL,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
        KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO, /*XXXXXX*/            /*XXXXXX*/     KC_NO,     KC_NO,   KC_LBRC,   KC_RBRC,   KC_BSLS,     KC_NO,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
    /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/   KC_TRNS,   KC_TRNS,   KC_TRNS,              KC_TRNS,   KC_TRNS,   KC_TRNS /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/
//,----------------------------------------------------------------------------,          ,----------------------------------------------------------------------------,
	),
	[2] = LAYOUT_split_3x6_3_ex2(
//,----------------------------------------------------------------------------,          ,----------------------------------------------------------------------------,
       KC_ESC,     KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,   KC_TRNS,              KC_TRNS,     KC_F6,     KC_F7,     KC_F8,     KC_F9,    KC_F10,   KC_BSPC,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
        KC_NO, LCTL_MPLY, LALT_MSTP, LGUI_VOLD, LSFT_VOLU,   KC_MUTE,   KC_TRNS,              BL_TOGG,   KC_MINS, RSFT_MRWD, RGUI_MPLY, RALT_MFFD,  RCTL_F11,    KC_F12,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
       BL_OFF,     BL_ON,     KC_NO,     KC_NO,     KC_NO,     KC_NO, /*XXXXXX*/            /*XXXXXX*/     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
    /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/   KC_TRNS,   KC_TRNS,   KC_TRNS,              KC_TRNS,   KC_TRNS,   KC_TRNS  /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/
//,----------------------------------------------------------------------------,          ,----------------------------------------------------------------------------,
	),
    [3] = LAYOUT_split_3x6_3_ex2(
//,----------------------------------------------------------------------------,          ,----------------------------------------------------------------------------,
        KC_NO,     KC_NO,   KC_ACL0,   KC_WH_U,   KC_ACL1,     KC_NO,     KC_NO,                KC_NO,     KC_NO,     KC_NO,   KC_MS_U,     KC_NO,     KC_NO,     KC_NO,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
        KC_NO,     KC_NO,   KC_WH_L,   KC_WH_D,   KC_WH_R,     KC_NO,   KC_TRNS,                KC_NO,     KC_NO,   KC_MS_L,   KC_MS_D,   KC_MS_R,     KC_NO,     KC_NO,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
        KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO, /*XXXXXX*/            /*XXXXXX*/     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
    /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/   KC_TRNS,     KC_NO,     KC_NO,              KC_BTN1,   KC_BTN2,   KC_BTN3  /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/
//,----------------------------------------------------------------------------,          ,----------------------------------------------------------------------------,
	)
};

#else

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
//,----------------------------------------------------------------------------,          ,----------------------------------------------------------------------------,
       KC_TAB,      KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,     KC_NO,                KC_NO,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,   KC_BSPC,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
       KC_ESC,    LCTL_A,    LALT_S,    LGUI_D,    LSFT_F,      KC_G,     KC_NO,                KC_NO,      KC_H,    RSFT_J,    RGUI_K,    RALT_L, RCTL_SCLN,   KC_QUOT,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
       KC_GRV,      KC_Z,      KC_X,      KC_C,      KC_V,      KC_B, /*XXXXXX*/            /*XXXXXX*/      KC_N,      KC_M,   KC_COMM,    KC_DOT,   KC_SLSH,     KC_NO,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
    /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/    LT3_NO, LGUI_BSPC,   LT1_SPC,              LT2_ENT,  RGUI_DEL,     KC_NO, /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/
//,----------------------------------------------------------------------------,          ,----------------------------------------------------------------------------,
	),
    [1] = LAYOUT_split_3x6_3(
//,----------------------------------------------------------------------------,          ,----------------------------------------------------------------------------,
       KC_GRV,      KC_1,      KC_2,      KC_3,      KC_4,      KC_5, /*XXXXXX*/            /*XXXXXX*/      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,   KC_BSPC,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
      KC_CAPS, LCTL_HOME, LALT_PGUP, LGUI_PGDN,  LSFT_END,    KC_INS, /*XXXXXX*/            /*XXXXXX*/   KC_LEFT, RSFT_DOWN,   RGUI_UP, RALT_RGHT, RCTL_MINS,    KC_EQL,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
        KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO, /*XXXXXX*/            /*XXXXXX*/     KC_NO,     KC_NO,   KC_LBRC,   KC_RBRC,   KC_BSLS,     KC_NO,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
    /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/   KC_TRNS,   KC_TRNS,   KC_TRNS,              KC_TRNS,   KC_TRNS,   KC_TRNS, /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/
//,----------------------------------------------------------------------------,          ,----------------------------------------------------------------------------,
	),
	[2] = LAYOUT_split_3x6_3(
//,----------------------------------------------------------------------------,          ,----------------------------------------------------------------------------,
       KC_ESC,     KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5, /*XXXXXX*/            /*XXXXXX*/     KC_F6,     KC_F7,     KC_F8,     KC_F9,    KC_F10,   KC_BSPC,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
        KC_NO, LCTL_MPLY, LALT_MSTP, LGUI_VOLD, LSFT_VOLU,   KC_MUTE, /*XXXXXX*/            /*XXXXXX*/   KC_MINS, RSFT_MRWD, RGUI_MPLY, RALT_MFFD,  RCTL_F11,    KC_F12,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
       BL_OFF,     BL_ON,     KC_NO,     KC_NO,     KC_NO,     KC_NO, /*XXXXXX*/            /*XXXXXX*/     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
    /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/   KC_TRNS,   KC_TRNS,   KC_TRNS,              KC_TRNS,   KC_TRNS,   KC_TRNS  /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/
//,----------------------------------------------------------------------------,          ,----------------------------------------------------------------------------,
	),
    [3] = LAYOUT_split_3x6_3(
//,----------------------------------------------------------------------------,          ,----------------------------------------------------------------------------,
        KC_NO,     KC_NO,   KC_ACL0,   KC_WH_U,   KC_ACL1,     KC_NO, /*XXXXXX*/            /*XXXXXX*/     KC_NO,     KC_NO,   KC_MS_U,     KC_NO,     KC_NO,     KC_NO,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
        KC_NO,     KC_NO,   KC_WH_L,   KC_WH_D,   KC_WH_R,     KC_NO,   KC_TRNS,                KC_NO,     KC_NO,   KC_MS_L,   KC_MS_D,   KC_MS_R,     KC_NO,     KC_NO,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
        KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO, /*XXXXXX*/            /*XXXXXX*/     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,
//|----------+----------+----------+----------+----------+----------+----------|          |----------+----------+----------+----------+----------+----------+----------|
    /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/   KC_TRNS,     KC_NO,     KC_NO,              KC_BTN1,   KC_BTN2,   KC_BTN3  /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/ /*XXXXXX*/
//,----------------------------------------------------------------------------,          ,----------------------------------------------------------------------------,
	)
};

#endif

