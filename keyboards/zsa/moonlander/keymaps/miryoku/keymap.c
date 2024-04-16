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
    SYMB,  // symbols
    MDIA,  // media keys
};

enum custom_keycodes {
    VRSN = SAFE_RANGE,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//    ┌─────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────┬─────────────┐   ┌─────────────┬─────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────┐
//    │ tRANSPARENT │   tRANSPARENT   │   tRANSPARENT   │   tRANSPARENT   │   tRANSPARENT   │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │   tRANSPARENT   │   tRANSPARENT   │   tRANSPARENT   │   tRANSPARENT   │ tRANSPARENT │
//    ├─────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────┤
//    │ tRANSPARENT │        q        │        w        │        e        │        r        │      t      │ tRANSPARENT │   │ tRANSPARENT │      y      │        u        │        i        │        o        │        p        │ tRANSPARENT │
//    ├─────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────┤
//    │ tRANSPARENT │ MT(MOD_LGUI, a) │ MT(MOD_LALT, s) │ MT(MOD_LCTL, d) │ MT(MOD_LSFT, f) │      g      │ tRANSPARENT │   │ tRANSPARENT │      h      │ MT(MOD_LSFT, j) │ MT(MOD_LCTL, k) │ MT(MOD_LALT, l) │ MT(MOD_LGUI, ') │ tRANSPARENT │
//    ├─────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────┼─────────────┘   └─────────────┼─────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────┤
//    │ tRANSPARENT │        z        │ MT(MOD_RALT, x) │        c        │        v        │      b      │                               │      n      │        m        │        ,        │ MT(MOD_RALT, .) │        /        │ tRANSPARENT │
//    ├─────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────┼─────────────┐   ┌─────────────┼─────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────┤
//    │ tRANSPARENT │   tRANSPARENT   │   tRANSPARENT   │   LT(3, esc)    │   LT(1, spc)    │             │ tRANSPARENT │   │ tRANSPARENT │             │   LT(4, bspc)   │   LT(6, del)    │   tRANSPARENT   │   tRANSPARENT   │ tRANSPARENT │
//    └─────────────┴─────────────────┴─────────────────┴─────────────────┼─────────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────────┼─────────────────┴─────────────────┴─────────────────┴─────────────┘
//                                                                        │   LT(2, tab)    │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │   LT(5, ent)    │
//                                                                        └─────────────────┴─────────────┴─────────────┘   └─────────────┴─────────────┴─────────────────┘
[0] = LAYOUT_moonlander(
  KC_TRANSPARENT , KC_TRANSPARENT     , KC_TRANSPARENT     , KC_TRANSPARENT     , KC_TRANSPARENT     , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT     , KC_TRANSPARENT     , KC_TRANSPARENT       , KC_TRANSPARENT        , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_Q               , KC_W               , KC_E               , KC_R               , KC_T           , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_Y           , KC_U               , KC_I               , KC_O                 , KC_P                  , KC_TRANSPARENT,
  KC_TRANSPARENT , MT(MOD_LGUI, KC_A) , MT(MOD_LALT, KC_S) , MT(MOD_LCTL, KC_D) , MT(MOD_LSFT, KC_F) , KC_G           , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_H           , MT(MOD_LSFT, KC_J) , MT(MOD_LCTL, KC_K) , MT(MOD_LALT, KC_L)   , MT(MOD_LGUI, KC_QUOT) , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_Z               , MT(MOD_RALT, KC_X) , KC_C               , KC_V               , KC_B           ,                                       KC_N           , KC_M               , KC_COMMA           , MT(MOD_RALT, KC_DOT) , KC_SLASH              , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_TRANSPARENT     , KC_TRANSPARENT     , LT(3, KC_ESCAPE)   , LT(1, KC_SPACE)    ,                  KC_TRANSPARENT ,     KC_TRANSPARENT ,                  LT(4, KC_BSPC)     , LT(6, KC_DELETE)   , KC_TRANSPARENT       , KC_TRANSPARENT        , KC_TRANSPARENT,
                                                                                  LT(2, KC_TAB)      , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , LT(5, KC_ENTER)
),

//    ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐   ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
//    │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │    boot     │     no      │     no      │     no      │     no      │ tRANSPARENT │   │ tRANSPARENT │     no      │  LSFT(ins)  │  LCTL(ins)  │  LSFT(del)  │    undo     │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │    lgui     │    lalt     │    lctl     │    lsft     │     no      │ tRANSPARENT │   │ tRANSPARENT │    left     │    down     │     up      │    rght     │  caps_LOCK  │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┘   └─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │     no      │    ralt     │     no      │     no      │     no      │                               │     ins     │    home     │    pgdn     │    pgup     │     end     │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┐   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │     no      │     no      │             │ tRANSPARENT │   │ tRANSPARENT │             │    bspc     │     del     │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    └─────────────┴─────────────┴─────────────┴─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┴─────────────┴─────────────┴─────────────┘
//                                                            │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │     ent     │
//                                                            └─────────────┴─────────────┴─────────────┘   └─────────────┴─────────────┴─────────────┘
[1] = LAYOUT_moonlander(
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT  , KC_TRANSPARENT  , KC_TRANSPARENT  , KC_TRANSPARENT , KC_TRANSPARENT,
  KC_TRANSPARENT , RESET          , KC_NO          , KC_NO          , KC_NO          , KC_NO          , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_NO          , LSFT(KC_INSERT) , LCTL(KC_INSERT) , LSFT(KC_DELETE) , KC_UNDO        , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_LGUI        , KC_LALT        , KC_LCTL        , KC_LSFT        , KC_NO          , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_LEFT        , KC_DOWN         , KC_UP           , KC_RIGHT        , KC_CAPS_LOCK   , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_NO          , KC_RALT        , KC_NO          , KC_NO          , KC_NO          ,                                       KC_INSERT      , KC_HOME         , KC_PGDN         , KC_PGUP         , KC_END         , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_NO          , KC_NO          ,                  KC_TRANSPARENT ,     KC_TRANSPARENT ,                  KC_BSPC         , KC_DELETE       , KC_TRANSPARENT  , KC_TRANSPARENT , KC_TRANSPARENT,
                                                                      KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_ENTER
),

//    ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐   ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
//    │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │    boot     │     no      │     no      │     no      │     no      │ tRANSPARENT │   │ tRANSPARENT │     no      │  LSFT(ins)  │  LCTL(ins)  │  LSFT(del)  │    undo     │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │    lgui     │    lalt     │    lctl     │    lsft     │     no      │ tRANSPARENT │   │ tRANSPARENT │     no      │    ms_l     │    ms_d     │    ms_u     │    ms_r     │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┘   └─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │     no      │    ralt     │     no      │     no      │     no      │                               │     no      │    wh_l     │    wh_d     │    wh_u     │    wh_r     │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┐   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │     no      │     no      │             │ tRANSPARENT │   │ tRANSPARENT │             │    btn1     │    btn3     │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    └─────────────┴─────────────┴─────────────┴─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┴─────────────┴─────────────┴─────────────┘
//                                                            │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │    btn2     │
//                                                            └─────────────┴─────────────┴─────────────┘   └─────────────┴─────────────┴─────────────┘
[2] = LAYOUT_moonlander(
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT  , KC_TRANSPARENT  , KC_TRANSPARENT  , KC_TRANSPARENT , KC_TRANSPARENT,
  KC_TRANSPARENT , RESET          , KC_NO          , KC_NO          , KC_NO          , KC_NO          , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_NO          , LSFT(KC_INSERT) , LCTL(KC_INSERT) , LSFT(KC_DELETE) , KC_UNDO        , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_LGUI        , KC_LALT        , KC_LCTL        , KC_LSFT        , KC_NO          , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_NO          , KC_MS_LEFT      , KC_MS_DOWN      , KC_MS_UP        , KC_MS_RIGHT    , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_NO          , KC_RALT        , KC_NO          , KC_NO          , KC_NO          ,                                       KC_NO          , KC_MS_WH_LEFT   , KC_MS_WH_DOWN   , KC_MS_WH_UP     , KC_MS_WH_RIGHT , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_NO          , KC_NO          ,                  KC_TRANSPARENT ,     KC_TRANSPARENT ,                  KC_MS_BTN1      , KC_MS_BTN3      , KC_TRANSPARENT  , KC_TRANSPARENT , KC_TRANSPARENT,
                                                                      KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_MS_BTN2
),

//    ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐   ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
//    │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │    boot     │     no      │     no      │     no      │     no      │ tRANSPARENT │   │ tRANSPARENT │   RGB_TOG   │   RGB_MOD   │   RGB_HUI   │   RGB_SAI   │   RGB_VAI   │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │    lgui     │    lalt     │    lctl     │    lsft     │     no      │ tRANSPARENT │   │ tRANSPARENT │     no      │    mprv     │    vold     │    volu     │    mnxt     │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┘   └─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │     no      │    ralt     │     no      │     no      │     no      │                               │     no      │     no      │     no      │     no      │     no      │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┐   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │     no      │             │ tRANSPARENT │   │ tRANSPARENT │             │    mply     │    mute     │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    └─────────────┴─────────────┴─────────────┴─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┴─────────────┴─────────────┴─────────────┘
//                                                            │     no      │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │    mstp     │
//                                                            └─────────────┴─────────────┴─────────────┘   └─────────────┴─────────────┴─────────────┘
[3] = LAYOUT_moonlander(
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT      , KC_TRANSPARENT    , KC_TRANSPARENT  , KC_TRANSPARENT      , KC_TRANSPARENT,
  KC_TRANSPARENT , RESET          , KC_NO          , KC_NO          , KC_NO          , KC_NO          , KC_TRANSPARENT ,     KC_TRANSPARENT , RGB_TOG        , RGB_MOD             , RGB_HUI           , RGB_SAI         , RGB_VAI             , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_LGUI        , KC_LALT        , KC_LCTL        , KC_LSFT        , KC_NO          , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_NO          , KC_MEDIA_PREV_TRACK , KC_AUDIO_VOL_DOWN , KC_AUDIO_VOL_UP , KC_MEDIA_NEXT_TRACK , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_NO          , KC_RALT        , KC_NO          , KC_NO          , KC_NO          ,                                       KC_NO          , KC_NO               , KC_NO             , KC_NO           , KC_NO               , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_NO          ,                  KC_TRANSPARENT ,     KC_TRANSPARENT ,                  KC_MEDIA_PLAY_PAUSE , KC_AUDIO_MUTE     , KC_TRANSPARENT  , KC_TRANSPARENT      , KC_TRANSPARENT,
                                                                      KC_NO          , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_MEDIA_STOP
),

//    ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐   ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
//    │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │      [      │      7      │      8      │      9      │      ]      │ tRANSPARENT │   │ tRANSPARENT │     no      │     no      │     no      │     no      │    boot     │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │      ;      │      4      │      5      │      6      │      =      │ tRANSPARENT │   │ tRANSPARENT │     no      │    lsft     │    lctl     │    lalt     │    lgui     │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┘   └─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │      `      │      1      │      2      │      3      │      \      │                               │     no      │     no      │     no      │    ralt     │     no      │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┐   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │      .      │      0      │             │ tRANSPARENT │   │ tRANSPARENT │             │ tRANSPARENT │     no      │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    └─────────────┴─────────────┴─────────────┴─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┴─────────────┴─────────────┴─────────────┘
//                                                            │      -      │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │     no      │
//                                                            └─────────────┴─────────────┴─────────────┘   └─────────────┴─────────────┴─────────────┘
[4] = LAYOUT_moonlander(
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_LBRC        , KC_7           , KC_8           , KC_9           , KC_RBRC        , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_NO          , KC_NO          , KC_NO          , KC_NO          , RESET          , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_SCLN        , KC_4           , KC_5           , KC_6           , KC_EQUAL       , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_NO          , KC_LSFT        , KC_LCTL        , KC_LALT        , KC_LGUI        , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_GRAVE       , KC_1           , KC_2           , KC_3           , KC_BSLS        ,                                       KC_NO          , KC_NO          , KC_NO          , KC_RALT        , KC_NO          , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_DOT         , KC_0           ,                  KC_TRANSPARENT ,     KC_TRANSPARENT ,                  KC_TRANSPARENT , KC_NO          , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT,
                                                                      KC_MINUS       , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_NO
),

//    ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐   ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
//    │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │      {      │      &      │      *      │      (      │      }      │ tRANSPARENT │   │ tRANSPARENT │     no      │     no      │     no      │     no      │    boot     │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │      :      │      $      │      %      │      ^      │      +      │ tRANSPARENT │   │ tRANSPARENT │     no      │    lsft     │    lctl     │    lalt     │    lgui     │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┘   └─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │      ~      │      !      │      @      │      #      │      |      │                               │     no      │     no      │     no      │    ralt     │     no      │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┐   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │      (      │      )      │             │ tRANSPARENT │   │ tRANSPARENT │             │     no      │     no      │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    └─────────────┴─────────────┴─────────────┴─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┴─────────────┴─────────────┴─────────────┘
//                                                            │      _      │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//                                                            └─────────────┴─────────────┴─────────────┘   └─────────────┴─────────────┴─────────────┘
[5] = LAYOUT_moonlander(
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_LCBR        , KC_AMPR        , KC_ASTR        , KC_LPRN        , KC_RCBR        , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_NO          , KC_NO          , KC_NO          , KC_NO          , RESET          , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_COLN        , KC_DLR         , KC_PERC        , KC_CIRC        , KC_PLUS        , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_NO          , KC_LSFT        , KC_LCTL        , KC_LALT        , KC_LGUI        , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_TILD        , KC_EXLM        , KC_AT          , KC_HASH        , KC_PIPE        ,                                       KC_NO          , KC_NO          , KC_NO          , KC_RALT        , KC_NO          , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_LPRN        , KC_RPRN        ,                  KC_TRANSPARENT ,     KC_TRANSPARENT ,                  KC_NO          , KC_NO          , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT,
                                                                      KC_UNDS        , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT
),

//    ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐   ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
//    │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │     f12     │     f7      │     f8      │     f9      │    pscr     │ tRANSPARENT │   │ tRANSPARENT │    DF(7)    │     no      │     no      │     no      │    boot     │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │     f11     │     f4      │     f5      │     f6      │ sCROLL_LOCK │ tRANSPARENT │   │ tRANSPARENT │     no      │    lsft     │    lctl     │    lalt     │    lgui     │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┘   └─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │     f10     │     f1      │     f2      │     f3      │    paus     │                               │     no      │     no      │     no      │    ralt     │     no      │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┐   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
//    │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │   QK_BOOT   │     spc     │             │ tRANSPARENT │   │ tRANSPARENT │             │     no      │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │
//    └─────────────┴─────────────┴─────────────┴─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────┼─────────────┴─────────────┴─────────────┴─────────────┘
//                                                            │     tab     │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │     no      │
//                                                            └─────────────┴─────────────┴─────────────┘   └─────────────┴─────────────┴─────────────┘
[6] = LAYOUT_moonlander(
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_F12         , KC_F7          , KC_F8          , KC_F9          , KC_PSCR        , KC_TRANSPARENT ,     KC_TRANSPARENT , DF(7)          , KC_NO          , KC_NO          , KC_NO          , RESET          , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_F11         , KC_F4          , KC_F5          , KC_F6          , KC_SCROLL_LOCK , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_NO          , KC_LSFT        , KC_LCTL        , KC_LALT        , KC_LGUI        , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_F10         , KC_F1          , KC_F2          , KC_F3          , KC_PAUSE       ,                                       KC_NO          , KC_NO          , KC_NO          , KC_RALT        , KC_NO          , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , QK_BOOT        , KC_SPACE       ,                  KC_TRANSPARENT ,     KC_TRANSPARENT ,                  KC_NO          , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT,
                                                                      KC_TAB         , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_NO
),

//    ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐   ┌─────────────┬─────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────┐
//    │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │   tRANSPARENT   │   tRANSPARENT   │   tRANSPARENT   │   tRANSPARENT   │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────┤
//    │ tRANSPARENT │      q      │      w      │      e      │      r      │      t      │ tRANSPARENT │   │ tRANSPARENT │      y      │        u        │        i        │        o        │        p        │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────┤
//    │ tRANSPARENT │      a      │      s      │      d      │      f      │      g      │ tRANSPARENT │   │ tRANSPARENT │      h      │ MT(MOD_LSFT, j) │ MT(MOD_LCTL, k) │ MT(MOD_LALT, l) │ MT(MOD_LGUI, ') │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┘   └─────────────┼─────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────┤
//    │ tRANSPARENT │      z      │      x      │      c      │      v      │      b      │                               │      n      │        m        │        ,        │ MT(MOD_RALT, .) │        /        │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┐   ┌─────────────┼─────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────┤
//    │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │    MO(8)    │     spc     │             │ tRANSPARENT │   │ tRANSPARENT │             │      bspc       │       del       │   tRANSPARENT   │   tRANSPARENT   │ tRANSPARENT │
//    └─────────────┴─────────────┴─────────────┴─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────────┼─────────────────┴─────────────────┴─────────────────┴─────────────┘
//                                                            │     tab     │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │       ent       │
//                                                            └─────────────┴─────────────┴─────────────┘   └─────────────┴─────────────┴─────────────────┘
[7] = LAYOUT_moonlander(
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT     , KC_TRANSPARENT     , KC_TRANSPARENT       , KC_TRANSPARENT        , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_Q           , KC_W           , KC_E           , KC_R           , KC_T           , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_Y           , KC_U               , KC_I               , KC_O                 , KC_P                  , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_A           , KC_S           , KC_D           , KC_F           , KC_G           , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_H           , MT(MOD_LSFT, KC_J) , MT(MOD_LCTL, KC_K) , MT(MOD_LALT, KC_L)   , MT(MOD_LGUI, KC_QUOT) , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_Z           , KC_X           , KC_C           , KC_V           , KC_B           ,                                       KC_N           , KC_M               , KC_COMMA           , MT(MOD_RALT, KC_DOT) , KC_SLASH              , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , MO(8)          , KC_SPACE       ,                  KC_TRANSPARENT ,     KC_TRANSPARENT ,                  KC_BSPC            , KC_DELETE          , KC_TRANSPARENT       , KC_TRANSPARENT        , KC_TRANSPARENT,
                                                                      KC_TAB         , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_ENTER
),

//    ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐   ┌─────────────┬─────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────┐
//    │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │   tRANSPARENT   │   tRANSPARENT   │   tRANSPARENT   │   tRANSPARENT   │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────┤
//    │ tRANSPARENT │      1      │      2      │      3      │      4      │      5      │ tRANSPARENT │   │ tRANSPARENT │      y      │        u        │        i        │        o        │        p        │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────┤
//    │ tRANSPARENT │      6      │      7      │      8      │      9      │      g      │ tRANSPARENT │   │ tRANSPARENT │      h      │ MT(MOD_LSFT, j) │ MT(MOD_LCTL, k) │ MT(MOD_LALT, l) │ MT(MOD_LGUI, ') │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┘   └─────────────┼─────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────┤
//    │ tRANSPARENT │      z      │      x      │      c      │      v      │      b      │                               │      n      │        m        │        ,        │ MT(MOD_RALT, .) │        /        │ tRANSPARENT │
//    ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┐   ┌─────────────┼─────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────┤
//    │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │ tRANSPARENT │     spc     │             │ tRANSPARENT │   │ tRANSPARENT │             │      bspc       │      DF(0)      │   tRANSPARENT   │   tRANSPARENT   │ tRANSPARENT │
//    └─────────────┴─────────────┴─────────────┴─────────────┼─────────────┼─────────────┼─────────────┤   ├─────────────┼─────────────┼─────────────────┼─────────────────┴─────────────────┴─────────────────┴─────────────┘
//                                                            │     tab     │ tRANSPARENT │ tRANSPARENT │   │ tRANSPARENT │ tRANSPARENT │       ent       │
//                                                            └─────────────┴─────────────┴─────────────┘   └─────────────┴─────────────┴─────────────────┘
[8] = LAYOUT_moonlander(
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT     , KC_TRANSPARENT     , KC_TRANSPARENT       , KC_TRANSPARENT        , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_1           , KC_2           , KC_3           , KC_4           , KC_5           , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_Y           , KC_U               , KC_I               , KC_O                 , KC_P                  , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_6           , KC_7           , KC_8           , KC_9           , KC_G           , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_H           , MT(MOD_LSFT, KC_J) , MT(MOD_LCTL, KC_K) , MT(MOD_LALT, KC_L)   , MT(MOD_LGUI, KC_QUOT) , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_Z           , KC_X           , KC_C           , KC_V           , KC_B           ,                                       KC_N           , KC_M               , KC_COMMA           , MT(MOD_RALT, KC_DOT) , KC_SLASH              , KC_TRANSPARENT,
  KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_SPACE       ,                  KC_TRANSPARENT ,     KC_TRANSPARENT ,                  KC_BSPC            , DF(0)              , KC_TRANSPARENT       , KC_TRANSPARENT        , KC_TRANSPARENT,
                                                                      KC_TAB         , KC_TRANSPARENT , KC_TRANSPARENT ,     KC_TRANSPARENT , KC_TRANSPARENT , KC_ENTER
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
