/* Copyright 2020 ZSA Technology Labs, Inc <@zsa>
 * Copyright 2020 Jack Humbert <jack.humb@gmail.com>
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */



#include QMK_KEYBOARD_H
#include "version.h"

enum layers {
    BASE,  // default layer
    EXTEND,
    SYMBOL,  // symbols
    NUM,
    MEDIA,  // media keys
};

enum custom_keycodes {
    VRSN = SAFE_RANGE,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//    ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐   ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
//    │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │      q      │      w      │      e      │      r      │      t      │ tRANSPARENT │   │ tRANSPARENT │      y      │      u      │      i      │      o      │      p      │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │      a      │      s      │      d      │      f      │      g      │ tRANSPARENT │   │ tRANSPARENT │      h      │      j      │      k      │      l      │      '      │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┘   └─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │      z      │      x      │      c      │      v      │      b      │                               │      n      │      m      │      ,      │      .      │      /      │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┐   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │     esc     │ MO(EXTEND)  │             │ tRANSPARENT │   │ tRANSPARENT │             │ MO(SYMBOL)  │   MO(NUM)   │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    └─────────────┴─────────────┴─────────────┴─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┴─────────────┴─────────────┴─────────────┘
//                                                            │     spc     │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │    lsft     │
//                                                            └─────────────┴─────────────┴─────────────┘   └─────────────┴─────────────┴─────────────┘
[BASE] = LAYOUT_moonlander(
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_Q           , KC_W           , KC_E           , KC_R           , KC_T           , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_Y           , KC_U           , KC_I           , KC_O           , KC_P           , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_A           , KC_S           , KC_D           , KC_F           , KC_G           , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_H           , KC_J           , KC_K           , KC_L           , KC_QUOT        , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_Z           , KC_X           , KC_C           , KC_V           , KC_B           ,                                       KC_N           , KC_M           , KC_COMMA       , KC_DOT         , KC_SLASH       , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_ESCAPE      , MO(EXTEND)     ,                  KC_TRANSPARENT ,     KC_TRANSPARENT ,                  MO(SYMBOL)     , MO(NUM)        , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT,
                                                                      KC_SPACE       , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_LSFT
),

//    ┌─────────────┬───────────────┬───────────────┬───────────────┬───────────────┬───────────────┬─────────────┐   ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
//    │ tRANSPARENT │  tRANSPARENT  │  tRANSPARENT  │  tRANSPARENT  │  tRANSPARENT  │  tRANSPARENT  │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    ├─────────────┼───────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │     boot      │      no       │      no       │      no       │      no       │ tRANSPARENT │   │ tRANSPARENT │    pgup     │    home     │     up      │     end     │  caps_LOCK  │ tRANSPARENT │
//    ├─────────────┼───────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │ OSM(MOD_LGUI) │ OSM(MOD_LALT) │ OSM(MOD_LCTL) │ OSM(MOD_LSFT) │ OSM(MOD_RALT) │ tRANSPARENT │   │ tRANSPARENT │    pgdn     │    left     │    down     │    rght     │     del     │ tRANSPARENT │
//    ├─────────────┼───────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┘   └─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │      no       │     ralt      │      no       │      no       │      no       │                               │     no      │    bspc     │     tab     │    pgup     │     end     │ tRANSPARENT │
//    ├─────────────┼───────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┐   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │  tRANSPARENT  │  tRANSPARENT  │      no       │  tRANSPARENT  │               │ tRANSPARENT │   │ tRANSPARENT │             │  MO(MEDIA)  │     no      │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    └─────────────┴───────────────┴───────────────┴───────────────┼───────────────┼───────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┴─────────────┴─────────────┴─────────────┘
//                                                                  │  tRANSPARENT  │  tRANSPARENT  │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │     ent     │
//                                                                  └───────────────┴───────────────┴─────────────┘   └─────────────┴─────────────┴─────────────┘
[EXTEND] = LAYOUT_moonlander(
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT,
  KC_TRANSPARENT , RESET          , KC_NO          , KC_NO          , KC_NO          , KC_NO          , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_PGUP        , KC_HOME        , KC_UP          , KC_END         , KC_CAPS_LOCK   , KC_TRANSPARENT,
  KC_TRANSPARENT , OSM(MOD_LGUI)  , OSM(MOD_LALT)  , OSM(MOD_LCTL)  , OSM(MOD_LSFT)  , OSM(MOD_RALT)  , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_PGDN        , KC_LEFT        , KC_DOWN        , KC_RIGHT       , KC_DELETE      , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_NO          , KC_RALT        , KC_NO          , KC_NO          , KC_NO          ,                                       KC_NO          , KC_BSPC        , KC_TAB         , KC_PGUP        , KC_END         , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_NO          , KC_TRANSPARENT ,                  KC_TRANSPARENT ,     KC_TRANSPARENT ,                  MO(MEDIA)      , KC_NO          , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT,
                                                                      KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_ENTER
),

//    ┌─────────────┬───────────────┬───────────────┬───────────────┬───────────────┬─────────────┬─────────────┐   ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
//    │ tRANSPARENT │  tRANSPARENT  │  tRANSPARENT  │  tRANSPARENT  │  tRANSPARENT  │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    ├─────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │       !       │       @       │       #       │       $       │      %      │ tRANSPARENT │   │ tRANSPARENT │      =      │      `      │      :      │      ;      │      +      │ tRANSPARENT │
//    ├─────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │ OSM(MOD_LGUI) │ OSM(MOD_LALT) │ OSM(MOD_LCTL) │ OSM(MOD_LSFT) │     no      │ tRANSPARENT │   │ tRANSPARENT │      *      │      (      │      {      │      [      │      -      │ tRANSPARENT │
//    ├─────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┼─────────────┘   └─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │      no       │      no       │       \       │       |       │      &      │                               │      ~      │      )      │      }      │      ]      │      _      │ tRANSPARENT │
//    ├─────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┼─────────────┐   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │  tRANSPARENT  │  tRANSPARENT  │      no       │   MO(MEDIA)   │             │ tRANSPARENT │   │ tRANSPARENT │             │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    └─────────────┴───────────────┴───────────────┴───────────────┼───────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┴─────────────┴─────────────┴─────────────┘
//                                                                  │  tRANSPARENT  │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//                                                                  └───────────────┴─────────────┴─────────────┘   └─────────────┴─────────────┴─────────────┘
[SYMBOL] = LAYOUT_moonlander(
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_EXLM        , KC_AT          , KC_HASH        , KC_DLR         , KC_PERC        , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_EQL         , KC_GRAVE       , KC_COLN        , KC_SCLN        , KC_PLUS        , KC_TRANSPARENT,
  KC_TRANSPARENT , OSM(MOD_LGUI)  , OSM(MOD_LALT)  , OSM(MOD_LCTL)  , OSM(MOD_LSFT)  , KC_NO          , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_ASTR        , KC_LPRN        , KC_LCBR        , KC_LBRC        , KC_MINS        , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_NO          , KC_NO          , KC_BSLS        , KC_PIPE        , KC_AMPR        ,                                       KC_TILD        , KC_RPRN        , KC_RCBR        , KC_RBRC        , KC_UNDS        , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_NO          , MO(MEDIA)      ,                  KC_TRANSPARENT ,     KC_TRANSPARENT ,                  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT,
                                                                      KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT
),

//    ┌─────────────┬───────────────┬───────────────┬───────────────┬───────────────┬───────────────┬─────────────┐   ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
//    │ tRANSPARENT │  tRANSPARENT  │  tRANSPARENT  │  tRANSPARENT  │  tRANSPARENT  │  tRANSPARENT  │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    ├─────────────┼───────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │      no       │      no       │      no       │      no       │      no       │ tRANSPARENT │   │ tRANSPARENT │      =      │      7      │      8      │      9      │      +      │ tRANSPARENT │
//    ├─────────────┼───────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │ OSM(MOD_LGUI) │ OSM(MOD_LALT) │ OSM(MOD_LCTL) │ OSM(MOD_LSFT) │ OSM(MOD_RALT) │ tRANSPARENT │   │ tRANSPARENT │      *      │      4      │      5      │      6      │      -      │ tRANSPARENT │
//    ├─────────────┼───────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┘   └─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │      no       │      no       │      tab      │     bspc      │      ent      │                               │      0      │      1      │      2      │      3      │      /      │ tRANSPARENT │
//    ├─────────────┼───────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┐   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │  tRANSPARENT  │  tRANSPARENT  │      no       │  tRANSPARENT  │               │ tRANSPARENT │   │ tRANSPARENT │             │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    └─────────────┴───────────────┴───────────────┴───────────────┼───────────────┼───────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┴─────────────┴─────────────┴─────────────┘
//                                                                  │  tRANSPARENT  │  tRANSPARENT  │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//                                                                  └───────────────┴───────────────┴─────────────┘   └─────────────┴─────────────┴─────────────┘
[NUM] = LAYOUT_moonlander(
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_NO          , KC_NO          , KC_NO          , KC_NO          , KC_NO          , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_EQL         , KC_7           , KC_8           , KC_9           , KC_PLUS        , KC_TRANSPARENT,
  KC_TRANSPARENT , OSM(MOD_LGUI)  , OSM(MOD_LALT)  , OSM(MOD_LCTL)  , OSM(MOD_LSFT)  , OSM(MOD_RALT)  , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_ASTR        , KC_4           , KC_5           , KC_6           , KC_MINS        , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_NO          , KC_NO          , KC_TAB         , KC_BSPC        , KC_ENT         ,                                       KC_0           , KC_1           , KC_2           , KC_3           , KC_SLSH        , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_NO          , KC_TRANSPARENT ,                  KC_TRANSPARENT ,     KC_TRANSPARENT ,                  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT,
                                                                      KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT
),

//    ┌─────────────┬───────────────┬───────────────┬───────────────┬───────────────┬─────────────┬─────────────┐   ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
//    │ tRANSPARENT │  tRANSPARENT  │  tRANSPARENT  │  tRANSPARENT  │  tRANSPARENT  │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    ├─────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │      no       │     mprv      │     mply      │     mnxt      │    volu     │ tRANSPARENT │   │ tRANSPARENT │     f12     │     f7      │     f8      │     f9      │     no      │ tRANSPARENT │
//    ├─────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │ OSM(MOD_LGUI) │ OSM(MOD_LALT) │ OSM(MOD_LCTL) │ OSM(MOD_LSFT) │    vold     │ tRANSPARENT │   │ tRANSPARENT │     f11     │     f4      │     f5      │     f6      │     no      │ tRANSPARENT │
//    ├─────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┼─────────────┘   └─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │    QK_BOOT    │      no       │      no       │      no       │     no      │                               │     f10     │     f1      │     f2      │     f3      │     no      │ tRANSPARENT │
//    ├─────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┼─────────────┐   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │  tRANSPARENT  │  tRANSPARENT  │  tRANSPARENT  │  tRANSPARENT  │             │ tRANSPARENT │   │ tRANSPARENT │             │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    └─────────────┴───────────────┴───────────────┴───────────────┼───────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┴─────────────┴─────────────┴─────────────┘
//                                                                  │  tRANSPARENT  │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//                                                                  └───────────────┴─────────────┴─────────────┘   └─────────────┴─────────────┴─────────────┘
[MEDIA] = LAYOUT_moonlander(
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_NO          , KC_MPRV        , KC_MPLY        , KC_MNXT        , KC_VOLU        , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_F12         , KC_F7          , KC_F8          , KC_F9          , KC_NO          , KC_TRANSPARENT,
  KC_TRANSPARENT , OSM(MOD_LGUI)  , OSM(MOD_LALT)  , OSM(MOD_LCTL)  , OSM(MOD_LSFT)  , KC_VOLD        , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_F11         , KC_F4          , KC_F5          , KC_F6          , KC_NO          , KC_TRANSPARENT,
  KC_TRANSPARENT , QK_BOOT        , KC_NO          , KC_NO          , KC_NO          , KC_NO          ,                                       KC_F10         , KC_F1          , KC_F2          , KC_F3          , KC_NO          , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,                  KC_TRANSPARENT ,     KC_TRANSPARENT ,                  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT,
                                                                      KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT
)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
        case VRSN:
            SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
            return false;
        }
    }
    return true;
}
