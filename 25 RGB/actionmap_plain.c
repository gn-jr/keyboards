#include "actionmap.h"
#include "action_code.h"
#include "actionmap_common.h"
#include "rgblight.h"

/*
 * Actions
 */
#define AC_BLD    ACTION_BACKLIGHT_DECREASE()
#define AC_BLI    ACTION_BACKLIGHT_INCREASE()
#define AC_TL1    ACTION_LAYER_TAP_KEY(1, KC_SPACE)
#define AC_TL2    ACTION_LAYER_TAP_KEY(2, KC_BSPACE)
#define AC_L01    ACTION_FUNCTION(RGBLED_TOGGLE)
#define AC_L02    ACTION_FUNCTION(RGBLED_STEP_MODE)
#define AC_L03    ACTION_FUNCTION(RGBLED_INCREASE_HUE)
#define AC_L04    ACTION_FUNCTION(RGBLED_DECREASE_HUE)
#define AC_L05    ACTION_FUNCTION(RGBLED_INCREASE_SAT)
#define AC_L06    ACTION_FUNCTION(RGBLED_DECREASE_SAT)
#define AC_L07    ACTION_FUNCTION(RGBLED_INCREASE_VAL)
#define AC_L08    ACTION_FUNCTION(RGBLED_DECREASE_VAL)

const action_t PROGMEM actionmaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = ACTIONMAP( 
    1,      2,      3,      4,      5,
    Q,      W,      F,      P,      B,
    A,      R,      S,      T,      G,
    Z,      X,      C,      D,      V,
    ESC,    TAB,    LSFT,   LGUI,   TL2,

    6,      7,      8,      9,      0,
    J,      L,      U,      Y,      QUOT,
    M,      N,      E,      I,      O,
    K,      H,      COMM,   DOT,    SLSH,
    TL1,    RCTL,   RALT,   CLCK,  ENTER),

    [1] = ACTIONMAP( 
    F1,     F2,     F3,     F4,     F5,
    F11,    F12,    TRNS,   TRNS,   TRNS,
    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,
    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,
    TRNS,   TRNS,   TRNS,   TRNS,   DEL,

    F6,     F7,     F8,     F9,     F10,
    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,
    MINS,   EQL,    LBRC,   RBRC,   BSLS,
    COMM,   DOT,    SLSH,   SCLN,   QUOT,
    TRNS,   TRNS,   TRNS,   TRNS,   TRNS),

    [2] = ACTIONMAP( 
    L01,    L02,    L03,    L04,    TRNS,
    L05,    L06,    L07,    L08,    TRNS,
    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,
    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,
    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,

    TRNS,   TRNS,   TRNS,   VOLD,   VOLU,
    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,
    CALC,   WHOM,   MAIL,   MYCM,   TRNS,
    TRNS,   TRNS,   TRNS,   TRNS,   GRV,
    TRNS,   LEFT,   DOWN,   UP,     RIGHT)
 			  
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch (id) {
    case RGBLED_TOGGLE:
        if (record->event.pressed) {
        rgblight_toggle();
        }
        break;
    case RGBLED_INCREASE_HUE:
        if (record->event.pressed) {
        rgblight_increase_hue();
        }
        break;
    case RGBLED_DECREASE_HUE:
        if (record->event.pressed) {
          rgblight_decrease_hue();
        }
        break;
    case RGBLED_INCREASE_SAT:
        if (record->event.pressed) {
        rgblight_increase_sat();
        }
        break;
    case RGBLED_DECREASE_SAT:
        if (record->event.pressed) {
          rgblight_decrease_sat();
        }
        break;
    case RGBLED_INCREASE_VAL:
        if (record->event.pressed) {
          rgblight_increase_val();
        }
        break;
    case RGBLED_DECREASE_VAL:
        if (record->event.pressed) {
          rgblight_decrease_val();
        }
        break;
    case RGBLED_STEP_MODE:
        if (record->event.pressed) {
          rgblight_step();
        }
        break;
  }
}
