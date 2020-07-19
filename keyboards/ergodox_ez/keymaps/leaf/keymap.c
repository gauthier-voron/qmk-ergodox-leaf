#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)

#define COLOR_ergodox_pretty(					\
	l00, l01, l02, l03, l04,  r00, r01, r02, r03, r04,	\
	l10, l11, l12, l13, l14,  r10, r11, r12, r13, r14,	\
	l20, l21, l22, l23, l24,  r20, r21, r22, r23, r24,	\
	l30, l31, l32, l33, l34,  r30, r31, r32, r33, r34,	\
	l40, l41, l42, l43,            r40, r41, r42, r43)	\
	{					\
	r00, r01, r02, r03, r04,		\
	r10, r11, r12, r13, r14,		\
	r20, r21, r22, r23, r24,		\
	r30, r31, r32, r33, r34,		\
	     r40, r41, r42, r43,		\
	l04, l03, l02, l01, l00,		\
	l14, l13, l12, l11, l10,		\
	l24, l23, l22, l21, l20,	\
	l34, l33, l32, l31, l30,		\
	l43, l42, l41, l40			\
	}


#define COLOR_H_RED           0
#define COLOR_H_ORANGE       20
#define COLOR_H_YELLOW       40
#define COLOR_H_MELON        60
#define COLOR_H_GREEN        80
#define COLOR_H_MINT        100
#define COLOR_H_TEAL        120
#define COLOR_H_SEA         140
#define COLOR_H_BLUE        160
#define COLOR_H_VIOLET      180
#define COLOR_H_MAGENTA     200
#define COLOR_H_FUSHIA      220
#define COLOR_H_PINK        240


#define COL_FUNCTION ((uint8_t[3]) {   0 ,   0 , 255 })
#define COL_DIGIT    ((uint8_t[3]) {  30 , 255 , 150 })
#define COL_DISABLE  ((uint8_t[3]) { 170 , 255 , 170 })
#define COL_LETTER   ((uint8_t[3]) { 160 , 255 , 255 })
#define COL_MOD      ((uint8_t[3]) { 120 , 255 , 255 })
#define COL_MODLT    ((uint8_t[3]) {  80 , 255 , 255 })
#define COL_MOUSE    ((uint8_t[3]) {  20 , 255 , 255 })
#define COL_MOUSEX   ((uint8_t[3]) {  60 , 225 , 255 })
#define COL_NAVIG    ((uint8_t[3]) {  50 , 255 , 255 })
#define COL_NONE     ((uint8_t[3]) {   0 ,   0 ,   0 })
#define COL_RGB      ((uint8_t[3]) {  75 , 255 , 255 })
#define COL_SYMBOL   ((uint8_t[3]) { 190 , 210 , 255 })
#define COL_SYSHW    ((uint8_t[3]) {   0 , 255 , 255 })
#define COL_SYSSW    ((uint8_t[3]) {  40 , 255 , 255 })
#define COL_SYSSAFE  ((uint8_t[3]) {  80 , 155 , 255 })


/*
 * ===== Layer 0 : Base ========================================================================================================================================
 */

#define L0_LROW_0    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_MEDIA_PLAY_PAUSE
#define L0_LROW_1    KC_TAB,         KC_COMMA,       KC_DOT,         KC_SCOLON,      KC_P,           KC_Y,           KC_MEDIA_NEXT_TRACK
#define L0_LROW_2    KC_MINUS,       LALT_T(KC_A),   LSFT_T(KC_O),   LCTL_T(KC_E),   LT(2, KC_U),    LGUI_T(KC_I)
#define L0_LROW_3    KC_CAPSLOCK,    KC_SLASH,       KC_Q,           KC_J,           KC_K,           KC_X,           KC_MEDIA_PREV_TRACK
#define L0_LROW_4    KC_ASON,        KC_QUOTE,       KC_GRAVE,       KC_LBRACKET,    KC_RBRACKET

#define L0_LRGB_0                    COL_DIGIT,      COL_DIGIT,      COL_DIGIT,      COL_DIGIT,      COL_DIGIT
#define L0_LRGB_1                    COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL,     COL_LETTER,     COL_LETTER
#define L0_LRGB_2                    COL_MOD,        COL_MOD,        COL_MOD,        COL_MODLT,      COL_MOD
#define L0_LRGB_3                    COL_SYMBOL,     COL_LETTER,     COL_LETTER,     COL_LETTER,     COL_LETTER
#define L0_LRGB_4                    COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL

#define L0_LTHM_0                    DYN_MACRO_PLAY1,DYN_MACRO_PLAY2
#define L0_LTHM_1                                    KC_INSERT
#define L0_LTHM_2    KC_SPACE,       KC_TAB,         TT(4)

#define L0_RROW_0    KC_AUDIO_MUTE,  KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_DELETE
#define L0_RROW_1    KC_AUDIO_VOL_UP,KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           KC_BSPACE
#define L0_RROW_2                    RGUI_T(KC_D),   LT(1,KC_H),     RCTL_T(KC_T),   RSFT_T(KC_N),   RALT_T(KC_S),   KC_EQUAL
#define L0_RROW_3    KC_AUDIO_VOL_DOWN,KC_B,         KC_M,           KC_W,           KC_V,           KC_Z,           KC_BSLASH
#define L0_RROW_4                                    KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_ASOFF

#define L0_RRGB_0                    COL_DIGIT,      COL_DIGIT,      COL_DIGIT,      COL_DIGIT,      COL_DIGIT
#define L0_RRGB_1                    COL_LETTER,     COL_LETTER,     COL_LETTER,     COL_LETTER,     COL_LETTER
#define L0_RRGB_2                    COL_MOD,        COL_MODLT,      COL_MOD,        COL_MOD,        COL_MOD
#define L0_RRGB_3                    COL_LETTER,     COL_LETTER,     COL_LETTER,     COL_LETTER,     COL_LETTER
#define L0_RRGB_4                                    COL_NAVIG,      COL_NAVIG,      COL_NAVIG,      COL_NAVIG

#define L0_RTHM_0    KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP
#define L0_RTHM_1    KC_PSCREEN
#define L0_RTHM_2    TT(3),          KC_BSPACE,      KC_ENTER

/*
 * ===== Layer 1 : Symbols (left) ==============================================================================================================================
 */

#define L1_LROW_0    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define L1_LROW_1    KC_TRANSPARENT, KC_TRANSPARENT, KC_AT,          KC_HASH,        KC_PERC,        KC_TRANSPARENT, KC_TRANSPARENT
#define L1_LROW_2    KC_TRANSPARENT, KC_EXLM,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_EQUAL
#define L1_LROW_3    KC_TRANSPARENT, KC_BSLASH,      KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_MINUS,       KC_TRANSPARENT
#define L1_LROW_4    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRACKET,    KC_RBRACKET

#define L1_LRGB_0                    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE
#define L1_LRGB_1                    COL_DISABLE,    COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL,     COL_DISABLE
#define L1_LRGB_2                    COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL
#define L1_LRGB_3                    COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL
#define L1_LRGB_4                    COL_DISABLE,    COL_DISABLE,     COL_SYMBOL,     COL_SYMBOL

#define L1_LTHM_0                    DYN_REC_START1, DYN_REC_START2
#define L1_LTHM_1                                    DYN_REC_STOP
#define L1_LTHM_2    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT

#define L1_RROW_0    L0_RROW_0
#define L1_RROW_1    L0_RROW_1
#define L1_RROW_2    L0_RROW_2
#define L1_RROW_3    L0_RROW_3
#define L1_RROW_4    L0_RROW_4

#define L1_RRGB_0    L0_RRGB_0
#define L1_RRGB_1    L0_RRGB_1
#define L1_RRGB_2    L0_RRGB_2
#define L1_RRGB_3    L0_RRGB_3
#define L1_RRGB_4    L0_RRGB_4

#define L1_RTHM_0    L0_RTHM_0
#define L1_RTHM_1    L0_RTHM_1
#define L1_RTHM_2    L0_RTHM_2

/*
 * ===== Layer 2 : Numbers (right) =============================================================================================================================
 */

#define L2_LROW_0    L0_LROW_0
#define L2_LROW_1    L0_LROW_1
#define L2_LROW_2    L0_LROW_2
#define L2_LROW_3    L0_LROW_3
#define L2_LROW_4    L0_LROW_4

#define L2_LRGB_0    L0_LRGB_0
#define L2_LRGB_1    L0_LRGB_1
#define L2_LRGB_2    L0_LRGB_2
#define L2_LRGB_3    L0_LRGB_3
#define L2_LRGB_4    L0_LRGB_4

#define L2_LTHM_0    L0_LTHM_0
#define L2_LTHM_1    L0_LTHM_1
#define L2_LTHM_2    L0_LTHM_2

#define L2_RROW_0    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define L2_RROW_1    KC_TRANSPARENT, KC_PGUP,        KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_EQUAL
#define L2_RROW_2                    KC_HOME,        KC_1,           KC_2,           KC_3,           KC_0,           KC_END
#define L2_RROW_3    KC_TRANSPARENT, KC_PGDOWN,      KC_4,           KC_5,           KC_6,           KC_MINUS,       KC_SLASH
#define L2_RROW_4                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT

#define L2_RRGB_0                    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE
#define L2_RRGB_1                    COL_NAVIG,      COL_DIGIT,      COL_DIGIT,      COL_DIGIT,      COL_SYMBOL
#define L2_RRGB_2                    COL_NAVIG,      COL_DIGIT,      COL_DIGIT,      COL_DIGIT,      COL_DIGIT
#define L2_RRGB_3                    COL_NAVIG,      COL_DIGIT,      COL_DIGIT,      COL_DIGIT,      COL_SYMBOL
#define L2_RRGB_4                                    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE

#define L2_RTHM_0    KC_TRANSPARENT, KC_TRANSPARENT
#define L2_RTHM_1    KC_TRANSPARENT
#define L2_RTHM_2    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT

/*
 * ===== Layer 3 : Mouse (left) ================================================================================================================================
 */

#define L3_LROW_0    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define L3_LROW_1    KC_MS_ACCEL2,   KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT
#define L3_LROW_2    KC_MS_ACCEL1,   KC_MS_WH_LEFT,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_RIGHT
#define L3_LROW_3    KC_MS_ACCEL0,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT
#define L3_LROW_4    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT

#define L3_LRGB_0                    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE
#define L3_LRGB_1                    COL_DISABLE,    COL_DISABLE,    COL_MOUSE,      COL_MOUSEX,     COL_DISABLE
#define L3_LRGB_2                    COL_MOUSEX,     COL_MOUSE,      COL_MOUSE,      COL_MOUSE,      COL_MOUSEX
#define L3_LRGB_3                    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_MOUSEX,     COL_DISABLE
#define L3_LRGB_4                    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE

#define L3_LTHM_0                    KC_TRANSPARENT, KC_MS_BTN5
#define L3_LTHM_1                                    KC_MS_BTN4
#define L3_LTHM_2    KC_MS_BTN1,     KC_MS_BTN2,     KC_MS_BTN3

#define L3_RROW_0    L0_RROW_0
#define L3_RROW_1    L0_RROW_1
#define L3_RROW_2    L0_RROW_2
#define L3_RROW_3    L0_RROW_3
#define L3_RROW_4    L0_RROW_4

#define L3_RRGB_0    L0_RRGB_0
#define L3_RRGB_1    L0_RRGB_1
#define L3_RRGB_2    L0_RRGB_2
#define L3_RRGB_3    L0_RRGB_3
#define L3_RRGB_4    L0_RRGB_4

#define L3_RTHM_0    L0_RTHM_0
#define L3_RTHM_1    L0_RTHM_1
#define L3_RTHM_2    L0_RTHM_2

/*
 * ===== Layer 4 : Functions (right) ===========================================================================================================================
 */

#define L4_LROW_0    L0_LROW_0
#define L4_LROW_1    L0_LROW_1
#define L4_LROW_2    L0_LROW_2
#define L4_LROW_3    L0_LROW_3
#define L4_LROW_4    L0_LROW_4

#define L4_LRGB_0    L0_LRGB_0
#define L4_LRGB_1    L0_LRGB_1
#define L4_LRGB_2    L0_LRGB_2
#define L4_LRGB_3    L0_LRGB_3
#define L4_LRGB_4    L0_LRGB_4

#define L4_LTHM_0    L0_LTHM_0
#define L4_LTHM_1    L0_LTHM_1
#define L4_LTHM_2    L0_LTHM_2

#define L4_RROW_0    KC_TRANSPARENT, RGB_TOG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define L4_RROW_1    KC_TRANSPARENT, RGB_SLD,        KC_F7,          KC_F8,          KC_F9,          KC_F12,         KC_TRANSPARENT
#define L4_RROW_2                    RGB_MOD,        KC_F1,          KC_F2,          KC_F3,          KC_F10,         KC_TRANSPARENT
#define L4_RROW_3    KC_TRANSPARENT, TOGGLE_LAYER_COLOR,KC_F4,       KC_F5,          KC_F6,          KC_F11,         KC_TRANSPARENT
#define L4_RROW_4                                    RGB_HUD,        RGB_VAD,        RGB_VAI,        RGB_HUI,        KC_TRANSPARENT

#define L4_RRGB_0                    COL_RGB,        COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE
#define L4_RRGB_1                    COL_RGB,        COL_FUNCTION,   COL_FUNCTION,   COL_FUNCTION,   COL_FUNCTION
#define L4_RRGB_2                    COL_RGB,        COL_FUNCTION,   COL_FUNCTION,   COL_FUNCTION,   COL_FUNCTION
#define L4_RRGB_3                    COL_RGB,        COL_FUNCTION,   COL_FUNCTION,   COL_FUNCTION,   COL_FUNCTION
#define L4_RRGB_4                                    COL_RGB,        COL_RGB,        COL_RGB,        COL_RGB

#define L4_RTHM_0    KC_TRANSPARENT, KC_TRANSPARENT
#define L4_RTHM_1    KC_TRANSPARENT
#define L4_RTHM_2    TG(5),          KC_TRANSPARENT, KC_TRANSPARENT

/*
 * ===== Layer 5 : System ===========================================================================================================================
 */

#define L5_LROW_0    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define L5_LROW_1    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SYSTEM_POWER,KC_TRANSPARENT, KC_TRANSPARENT
#define L5_LROW_2    KC_TRANSPARENT, KC_TRANSPARENT, SYSREQ_OOM,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define L5_LROW_3    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, SYSREQ_SAK,     KC_TRANSPARENT, KC_TRANSPARENT
#define L5_LROW_4    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT

#define L5_LRGB_0                    COL_NONE,       COL_NONE,       COL_NONE,       COL_NONE,       COL_NONE
#define L5_LRGB_1                    COL_NONE,       COL_NONE,       COL_NONE,       COL_SYSHW,      COL_NONE
#define L5_LRGB_2                    COL_NONE,       COL_SYSSW,      COL_NONE,       COL_NONE,       COL_NONE
#define L5_LRGB_3                    COL_NONE,       COL_NONE,       COL_NONE,       COL_SYSSW,      COL_NONE
#define L5_LRGB_4                    COL_NONE,       COL_NONE,       COL_NONE,       COL_NONE

#define L5_LTHM_0                    KC_TRANSPARENT, KC_TRANSPARENT
#define L5_LTHM_1                                    KC_TRANSPARENT
#define L5_LTHM_2    KC_TRANSPARENT, KC_TRANSPARENT, TT(5)

#define L5_RROW_0    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define L5_RROW_1    KC_TRANSPARENT, SYSREQ_SYNC,    KC_TRANSPARENT, KC_TRANSPARENT, RESET,          KC_TRANSPARENT, KC_TRANSPARENT
#define L5_RROW_2                    KC_TRANSPARENT, SYSREQ_KILL,    SYSREQ_TERM,    KC_TRANSPARENT, KC_SYSTEM_SLEEP,KC_TRANSPARENT
#define L5_RROW_3    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SYSTEM_WAKE, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define L5_RROW_4                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT

#define L5_RRGB_0                    COL_NONE,       COL_NONE,       COL_NONE,       COL_NONE,       COL_NONE
#define L5_RRGB_1                    COL_SYSSAFE,    COL_NONE,       COL_NONE,       COL_SYSHW,      COL_NONE
#define L5_RRGB_2                    COL_NONE,       COL_SYSSW,      COL_SYSSW,      COL_NONE,       COL_SYSHW
#define L5_RRGB_3                    COL_NONE,       COL_NONE,       COL_SYSSAFE,    COL_NONE,       COL_NONE
#define L5_RRGB_4                                    COL_NONE,       COL_NONE,       COL_NONE,       COL_NONE

#define L5_RTHM_0    KC_TRANSPARENT, KC_TRANSPARENT
#define L5_RTHM_1    KC_TRANSPARENT
#define L5_RTHM_2    TG(5),          KC_TRANSPARENT, KC_TRANSPARENT


#define MAKE_LAYOUT(...)    LAYOUT_ergodox_pretty(__VA_ARGS__)

#define MAKE_COLOR(...)     COLOR_ergodox_pretty(__VA_ARGS__)


enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  SYSREQ_OOM,
  SYSREQ_SYNC,
  SYSREQ_TERM,
  SYSREQ_KILL,
  SYSREQ_SAK
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = MAKE_LAYOUT(
		L0_LROW_0, L0_RROW_0,
		L0_LROW_1, L0_RROW_1,
		L0_LROW_2, L0_RROW_2,
		L0_LROW_3, L0_RROW_3,
		L0_LROW_4, L0_RROW_4,
		L0_LTHM_0, L0_RTHM_0,
		L0_LTHM_1, L0_RTHM_1,
		L0_LTHM_2, L0_RTHM_2
	),

	[1] = MAKE_LAYOUT(
		L1_LROW_0, L1_RROW_0,
		L1_LROW_1, L1_RROW_1,
		L1_LROW_2, L1_RROW_2,
		L1_LROW_3, L1_RROW_3,
		L1_LROW_4, L1_RROW_4,
		L1_LTHM_0, L1_RTHM_0,
		L1_LTHM_1, L1_RTHM_1,
		L1_LTHM_2, L1_RTHM_2
	),

	[2] = MAKE_LAYOUT(
		L2_LROW_0, L2_RROW_0,
		L2_LROW_1, L2_RROW_1,
		L2_LROW_2, L2_RROW_2,
		L2_LROW_3, L2_RROW_3,
		L2_LROW_4, L2_RROW_4,
		L2_LTHM_0, L2_RTHM_0,
		L2_LTHM_1, L2_RTHM_1,
		L2_LTHM_2, L2_RTHM_2
	),

	[3] = MAKE_LAYOUT(
		L3_LROW_0, L3_RROW_0,
		L3_LROW_1, L3_RROW_1,
		L3_LROW_2, L3_RROW_2,
		L3_LROW_3, L3_RROW_3,
		L3_LROW_4, L3_RROW_4,
		L3_LTHM_0, L3_RTHM_0,
		L3_LTHM_1, L3_RTHM_1,
		L3_LTHM_2, L3_RTHM_2
	),

	[4] = MAKE_LAYOUT(
		L4_LROW_0, L4_RROW_0,
		L4_LROW_1, L4_RROW_1,
		L4_LROW_2, L4_RROW_2,
		L4_LROW_3, L4_RROW_3,
		L4_LROW_4, L4_RROW_4,
		L4_LTHM_0, L4_RTHM_0,
		L4_LTHM_1, L4_RTHM_1,
		L4_LTHM_2, L4_RTHM_2
	),
	[5] = MAKE_LAYOUT(
		L5_LROW_0, L5_RROW_0,
		L5_LROW_1, L5_RROW_1,
		L5_LROW_2, L5_RROW_2,
		L5_LROW_3, L5_RROW_3,
		L5_LROW_4, L5_RROW_4,
		L5_LTHM_0, L5_RTHM_0,
		L5_LTHM_1, L5_RTHM_1,
		L5_LTHM_2, L5_RTHM_2
	)
};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
	[0] = MAKE_COLOR(
		 L0_LRGB_0, L0_RRGB_0,
		 L0_LRGB_1, L0_RRGB_1,
		 L0_LRGB_2, L0_RRGB_2,
		 L0_LRGB_3, L0_RRGB_3,
		 L0_LRGB_4, L0_RRGB_4
	),
	[1] = MAKE_COLOR(
		 L1_LRGB_0, L1_RRGB_0,
		 L1_LRGB_1, L1_RRGB_1,
		 L1_LRGB_2, L1_RRGB_2,
		 L1_LRGB_3, L1_RRGB_3,
		 L1_LRGB_4, L1_RRGB_4
	),

	[2] = MAKE_COLOR(
		 L2_LRGB_0, L2_RRGB_0,
		 L2_LRGB_1, L2_RRGB_1,
		 L2_LRGB_2, L2_RRGB_2,
		 L2_LRGB_3, L2_RRGB_3,
		 L2_LRGB_4, L2_RRGB_4
	),

	[3] = MAKE_COLOR(
		 L3_LRGB_0, L3_RRGB_0,
		 L3_LRGB_1, L3_RRGB_1,
		 L3_LRGB_2, L3_RRGB_2,
		 L3_LRGB_3, L3_RRGB_3,
		 L3_LRGB_4, L3_RRGB_4
	),

	[4] = MAKE_COLOR(
		 L4_LRGB_0, L4_RRGB_0,
		 L4_LRGB_1, L4_RRGB_1,
		 L4_LRGB_2, L4_RRGB_2,
		 L4_LRGB_3, L4_RRGB_3,
		 L4_LRGB_4, L4_RRGB_4
	),

	[5] = MAKE_COLOR(
		 L5_LRGB_0, L5_RRGB_0,
		 L5_LRGB_1, L5_RRGB_1,
		 L5_LRGB_2, L5_RRGB_2,
		 L5_LRGB_3, L5_RRGB_3,
		 L5_LRGB_4, L5_RRGB_4
	)
};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  case SYSREQ_OOM:
      if (record->event.pressed) {
	SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_PSCREEN));
	SEND_STRING(SS_TAP(X_F));
	SEND_STRING(SS_UP(X_PSCREEN)SS_UP(X_LALT));
      }
      return false;
  case SYSREQ_SYNC:
      if (record->event.pressed) {
	SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_PSCREEN));
	SEND_STRING(SS_TAP(X_S));
	SEND_STRING(SS_UP(X_PSCREEN)SS_UP(X_LALT));
      }
      return false;
  case SYSREQ_TERM:
      if (record->event.pressed) {
	SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_PSCREEN));
	SEND_STRING(SS_TAP(X_E));
	SEND_STRING(SS_UP(X_PSCREEN)SS_UP(X_LALT));
      }
      return false;
  case SYSREQ_KILL:
      if (record->event.pressed) {
	SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_PSCREEN));
	SEND_STRING(SS_TAP(X_I));
	SEND_STRING(SS_UP(X_PSCREEN)SS_UP(X_LALT));
      }
      return false;
  case SYSREQ_SAK:
      if (record->event.pressed) {
	SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_PSCREEN));
	SEND_STRING(SS_TAP(X_K));
	SEND_STRING(SS_UP(X_PSCREEN)SS_UP(X_LALT));
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  return state;
};
