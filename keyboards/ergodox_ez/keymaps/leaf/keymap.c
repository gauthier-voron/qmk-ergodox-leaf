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


#define LBASE            0
#define LSYMB            1
#define LNUMB            2
#define LMOUS            3
#define LNAVG            4
#define LFUNC            5
#define LSYST            6


/*
 * ===== Layer Base ============================================================================================================================================
 */

#define LBASE_LROW_0    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_MEDIA_PLAY_PAUSE
#define LBASE_LROW_1    KC_TAB,         KC_COMMA,       KC_DOT,         KC_SCOLON,      KC_P,           KC_Y,           KC_MEDIA_NEXT_TRACK
#define LBASE_LROW_2    KC_MINUS,       LALT_T(KC_A),   LCTL_T(KC_O),   LSFT_T(KC_E),   LT(LNAVG,KC_U), KC_I
#define LBASE_LROW_3    KC_CAPSLOCK,    KC_SLASH,       LGUI_T(KC_Q),   KC_J,           LT(LNUMB,KC_K), KC_X,           KC_MEDIA_PREV_TRACK
#define LBASE_LROW_4    KC_ASON,        KC_QUOTE,       KC_GRAVE,       KC_LBRACKET,    KC_RBRACKET

#define LBASE_LRGB_0                    COL_DIGIT,      COL_DIGIT,      COL_DIGIT,      COL_DIGIT,      COL_DIGIT
#define LBASE_LRGB_1                    COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL,     COL_LETTER,     COL_LETTER
#define LBASE_LRGB_2                    COL_MOD,        COL_MOD,        COL_MOD,        COL_MODLT,      COL_LETTER
#define LBASE_LRGB_3                    COL_SYMBOL,     COL_MOD,        COL_LETTER,     COL_MODLT,      COL_LETTER
#define LBASE_LRGB_4                    COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL

#define LBASE_LTHM_0                    DYN_MACRO_PLAY1,DYN_MACRO_PLAY2
#define LBASE_LTHM_1                                    KC_INSERT
#define LBASE_LTHM_2    KC_SPACE,       KC_TAB,         TT(LFUNC)

#define LBASE_RROW_0    KC_AUDIO_MUTE,  KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_DELETE
#define LBASE_RROW_1    KC_AUDIO_VOL_UP,KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           KC_BSPACE
#define LBASE_RROW_2                    KC_D,           LT(LSYMB,KC_H), RSFT_T(KC_T),   RCTL_T(KC_N),   LALT_T(KC_S),   KC_EQUAL
#define LBASE_RROW_3    KC_AUDIO_VOL_DOWN,KC_B,         LT(LMOUS,KC_M), RALT_T(KC_W),   RGUI_T(KC_V),   KC_Z,           KC_BSLASH
#define LBASE_RROW_4                                    KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_ASOFF

#define LBASE_RRGB_0                    COL_DIGIT,      COL_DIGIT,      COL_DIGIT,      COL_DIGIT,      COL_DIGIT
#define LBASE_RRGB_1                    COL_LETTER,     COL_LETTER,     COL_LETTER,     COL_LETTER,     COL_LETTER
#define LBASE_RRGB_2                    COL_LETTER,     COL_MODLT,      COL_MOD,        COL_MOD,        COL_MOD
#define LBASE_RRGB_3                    COL_LETTER,     COL_MODLT,      COL_MOD,        COL_MOD,        COL_LETTER
#define LBASE_RRGB_4                                    COL_NAVIG,      COL_NAVIG,      COL_NAVIG,      COL_NAVIG

#define LBASE_RTHM_0    KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP
#define LBASE_RTHM_1    KC_PSCREEN
#define LBASE_RTHM_2    KC_DELETE,      KC_BSPACE,      KC_ENTER

/*
 * ===== Layer Symbols (left) ==================================================================================================================================
 */

#define LSYMB_LROW_0    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT
#define LSYMB_LROW_1    KC_TRANSPARENT, KC_NO,          KC_AT,          KC_HASH,        KC_PERC,        KC_NO,          KC_TRANSPARENT
#define LSYMB_LROW_2    KC_TRANSPARENT, KC_EXLM,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_QUOTE
#define LSYMB_LROW_3    KC_TRANSPARENT, KC_NO,          KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_GRAVE,       KC_TRANSPARENT
#define LSYMB_LROW_4    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_LBRACKET,    KC_RBRACKET

#define LSYMB_LRGB_0                    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE
#define LSYMB_LRGB_1                    COL_DISABLE,    COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL,     COL_DISABLE
#define LSYMB_LRGB_2                    COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL
#define LSYMB_LRGB_3                    COL_DISABLE,    COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL,     COL_SYMBOL
#define LSYMB_LRGB_4                    COL_DISABLE,    COL_DISABLE,    COL_SYMBOL,     COL_SYMBOL

#define LSYMB_LTHM_0                    DYN_REC_START1, DYN_REC_START2
#define LSYMB_LTHM_1                                    DYN_REC_STOP
#define LSYMB_LTHM_2    KC_SPACE,       KC_TAB,         KC_NO

#define LSYMB_RROW_0    LBASE_RROW_0
#define LSYMB_RROW_1    LBASE_RROW_1
#define LSYMB_RROW_2    LBASE_RROW_2
#define LSYMB_RROW_3    LBASE_RROW_3
#define LSYMB_RROW_4    LBASE_RROW_4

#define LSYMB_RRGB_0    LBASE_RRGB_0
#define LSYMB_RRGB_1    LBASE_RRGB_1
#define LSYMB_RRGB_2    LBASE_RRGB_2
#define LSYMB_RRGB_3    LBASE_RRGB_3
#define LSYMB_RRGB_4    LBASE_RRGB_4

#define LSYMB_RTHM_0    LBASE_RTHM_0
#define LSYMB_RTHM_1    LBASE_RTHM_1
#define LSYMB_RTHM_2    LBASE_RTHM_2

/*
 * ===== Layer Numbers (right) =================================================================================================================================
 */

#define LNUMB_LROW_0    LBASE_LROW_0
#define LNUMB_LROW_1    LBASE_LROW_1
#define LNUMB_LROW_2    LBASE_LROW_2
#define LNUMB_LROW_3    LBASE_LROW_3
#define LNUMB_LROW_4    LBASE_LROW_4

#define LNUMB_LRGB_0    LBASE_LRGB_0
#define LNUMB_LRGB_1    LBASE_LRGB_1
#define LNUMB_LRGB_2    LBASE_LRGB_2
#define LNUMB_LRGB_3    LBASE_LRGB_3
#define LNUMB_LRGB_4    LBASE_LRGB_4

#define LNUMB_LTHM_0    LBASE_LTHM_0
#define LNUMB_LTHM_1    LBASE_LTHM_1
#define LNUMB_LTHM_2    LBASE_LTHM_2

#define LNUMB_RROW_0    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
#define LNUMB_RROW_1    KC_NO,          KC_LBRACKET,    KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_ASTR
#define LNUMB_RROW_2                    KC_DOT,         KC_1,           KC_2,           KC_3,           KC_0,           KC_EQUAL
#define LNUMB_RROW_3    KC_NO,          KC_RBRACKET,    KC_4,           KC_5,           KC_6,           KC_MINUS,       KC_SLASH
#define LNUMB_RROW_4                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO

#define LNUMB_RRGB_0                    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE
#define LNUMB_RRGB_1                    COL_SYMBOL,     COL_DIGIT,      COL_DIGIT,      COL_DIGIT,      COL_SYMBOL
#define LNUMB_RRGB_2                    COL_SYMBOL,     COL_DIGIT,      COL_DIGIT,      COL_DIGIT,      COL_DIGIT
#define LNUMB_RRGB_3                    COL_SYMBOL,     COL_DIGIT,      COL_DIGIT,      COL_DIGIT,      COL_SYMBOL
#define LNUMB_RRGB_4                                    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE

#define LNUMB_RTHM_0    KC_NO,          KC_NO
#define LNUMB_RTHM_1    KC_NO
#define LNUMB_RTHM_2    KC_NO,          KC_NO,          KC_NO

/*
 * ===== Layer Navigation (right) ==============================================================================================================================
 */

#define LNAVG_LROW_0    LBASE_LROW_0
#define LNAVG_LROW_1    LBASE_LROW_1
#define LNAVG_LROW_2    LBASE_LROW_2
#define LNAVG_LROW_3    LBASE_LROW_3
#define LNAVG_LROW_4    LBASE_LROW_4

#define LNAVG_LRGB_0    LBASE_LRGB_0
#define LNAVG_LRGB_1    LBASE_LRGB_1
#define LNAVG_LRGB_2    LBASE_LRGB_2
#define LNAVG_LRGB_3    LBASE_LRGB_3
#define LNAVG_LRGB_4    LBASE_LRGB_4

#define LNAVG_LTHM_0    LBASE_LTHM_0
#define LNAVG_LTHM_1    LBASE_LTHM_1
#define LNAVG_LTHM_2    LBASE_LTHM_2

#define LNAVG_RROW_0    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
#define LNAVG_RROW_1    KC_NO,          KC_NO,          KC_PGUP,        KC_UP,          KC_NO,          KC_NO,          KC_NO
#define LNAVG_RROW_2                    KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,         KC_NO
#define LNAVG_RROW_3    KC_NO,          KC_NO,          KC_PGDOWN,      KC_NO,          KC_NO,          KC_NO,          KC_NO
#define LNAVG_RROW_4                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO

#define LNAVG_RRGB_0                    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE
#define LNAVG_RRGB_1                    COL_DISABLE,    COL_NAVIG,      COL_NAVIG,      COL_DISABLE,    COL_DISABLE
#define LNAVG_RRGB_2                    COL_NAVIG,      COL_NAVIG,      COL_NAVIG,      COL_NAVIG,      COL_NAVIG
#define LNAVG_RRGB_3                    COL_DISABLE,    COL_NAVIG,      COL_DISABLE,    COL_DISABLE,    COL_DISABLE
#define LNAVG_RRGB_4                                    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE

#define LNAVG_RTHM_0    KC_NO,          KC_NO
#define LNAVG_RTHM_1    KC_NO
#define LNAVG_RTHM_2    KC_NO,          KC_NO,          KC_NO

/*
 * ===== Layer Mouse (left) ====================================================================================================================================
 */

#define LMOUS_LROW_0    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LMOUS_LROW_1    KC_MS_ACCEL2,   KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT
#define LMOUS_LROW_2    KC_MS_ACCEL1,   KC_MS_WH_LEFT,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_RIGHT
#define LMOUS_LROW_3    KC_MS_ACCEL0,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT
#define LMOUS_LROW_4    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT

#define LMOUS_LRGB_0                    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE
#define LMOUS_LRGB_1                    COL_DISABLE,    COL_DISABLE,    COL_MOUSE,      COL_MOUSEX,     COL_DISABLE
#define LMOUS_LRGB_2                    COL_MOUSEX,     COL_MOUSE,      COL_MOUSE,      COL_MOUSE,      COL_MOUSEX
#define LMOUS_LRGB_3                    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_MOUSEX,     COL_DISABLE
#define LMOUS_LRGB_4                    COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE

#define LMOUS_LTHM_0                    KC_NO,          KC_MS_BTN5
#define LMOUS_LTHM_1                                    KC_MS_BTN4
#define LMOUS_LTHM_2    KC_MS_BTN1,     KC_MS_BTN2,     KC_MS_BTN3

#define LMOUS_RROW_0    LBASE_RROW_0
#define LMOUS_RROW_1    LBASE_RROW_1
#define LMOUS_RROW_2    LBASE_RROW_2
#define LMOUS_RROW_3    LBASE_RROW_3
#define LMOUS_RROW_4    LBASE_RROW_4

#define LMOUS_RRGB_0    LBASE_RRGB_0
#define LMOUS_RRGB_1    LBASE_RRGB_1
#define LMOUS_RRGB_2    LBASE_RRGB_2
#define LMOUS_RRGB_3    LBASE_RRGB_3
#define LMOUS_RRGB_4    LBASE_RRGB_4

#define LMOUS_RTHM_0    LBASE_RTHM_0
#define LMOUS_RTHM_1    LBASE_RTHM_1
#define LMOUS_RTHM_2    LBASE_RTHM_2

/*
 * ===== Layer Functions (right) ===============================================================================================================================
 */

#define LFUNC_LROW_0    LBASE_LROW_0
#define LFUNC_LROW_1    LBASE_LROW_1
#define LFUNC_LROW_2    LBASE_LROW_2
#define LFUNC_LROW_3    LBASE_LROW_3
#define LFUNC_LROW_4    LBASE_LROW_4

#define LFUNC_LRGB_0    LBASE_LRGB_0
#define LFUNC_LRGB_1    LBASE_LRGB_1
#define LFUNC_LRGB_2    LBASE_LRGB_2
#define LFUNC_LRGB_3    LBASE_LRGB_3
#define LFUNC_LRGB_4    LBASE_LRGB_4

#define LFUNC_LTHM_0    LBASE_LTHM_0
#define LFUNC_LTHM_1    LBASE_LTHM_1
#define LFUNC_LTHM_2    LBASE_LTHM_2

#define LFUNC_RROW_0    KC_TRANSPARENT, RGB_TOG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LFUNC_RROW_1    KC_TRANSPARENT, RGB_SLD,        KC_F7,          KC_F8,          KC_F9,          KC_F12,         KC_TRANSPARENT
#define LFUNC_RROW_2                    RGB_MOD,        KC_F1,          KC_F2,          KC_F3,          KC_F10,         KC_TRANSPARENT
#define LFUNC_RROW_3    KC_TRANSPARENT, TOGGLE_LAYER_COLOR,KC_F4,       KC_F5,          KC_F6,          KC_F11,         KC_TRANSPARENT
#define LFUNC_RROW_4                                    RGB_HUD,        RGB_VAD,        RGB_VAI,        RGB_HUI,        KC_TRANSPARENT

#define LFUNC_RRGB_0                    COL_RGB,        COL_DISABLE,    COL_DISABLE,    COL_DISABLE,    COL_DISABLE
#define LFUNC_RRGB_1                    COL_RGB,        COL_FUNCTION,   COL_FUNCTION,   COL_FUNCTION,   COL_FUNCTION
#define LFUNC_RRGB_2                    COL_RGB,        COL_FUNCTION,   COL_FUNCTION,   COL_FUNCTION,   COL_FUNCTION
#define LFUNC_RRGB_3                    COL_RGB,        COL_FUNCTION,   COL_FUNCTION,   COL_FUNCTION,   COL_FUNCTION
#define LFUNC_RRGB_4                                    COL_RGB,        COL_RGB,        COL_RGB,        COL_RGB

#define LFUNC_RTHM_0    KC_TRANSPARENT, KC_TRANSPARENT
#define LFUNC_RTHM_1    KC_TRANSPARENT
#define LFUNC_RTHM_2    TG(LSYST),      KC_TRANSPARENT, KC_TRANSPARENT

/*
 * ===== Layer System ==========================================================================================================================================
 */

#define LSYST_LROW_0    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
#define LSYST_LROW_1    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_SYSTEM_POWER,KC_NO,          KC_NO
#define LSYST_LROW_2    KC_NO,          KC_NO,          SYSREQ_OOM,     KC_NO,          KC_NO,          KC_NO
#define LSYST_LROW_3    KC_NO,          KC_NO,          KC_NO,          KC_NO,          SYSREQ_SAK,     KC_NO,          KC_NO
#define LSYST_LROW_4    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO

#define LSYST_LRGB_0                    COL_NONE,       COL_NONE,       COL_NONE,       COL_NONE,       COL_NONE
#define LSYST_LRGB_1                    COL_NONE,       COL_NONE,       COL_NONE,       COL_SYSHW,      COL_NONE
#define LSYST_LRGB_2                    COL_NONE,       COL_SYSSW,      COL_NONE,       COL_NONE,       COL_NONE
#define LSYST_LRGB_3                    COL_NONE,       COL_NONE,       COL_NONE,       COL_SYSSW,      COL_NONE
#define LSYST_LRGB_4                    COL_NONE,       COL_NONE,       COL_NONE,       COL_NONE

#define LSYST_LTHM_0                    KC_NO,          KC_NO
#define LSYST_LTHM_1                                    KC_NO
#define LSYST_LTHM_2    KC_NO,          KC_NO,          TT(LSYST)

#define LSYST_RROW_0    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
#define LSYST_RROW_1    KC_NO,          SYSREQ_SYNC,    KC_NO,          KC_NO,          RESET,          KC_NO,          KC_NO
#define LSYST_RROW_2                    KC_NO,          SYSREQ_KILL,    SYSREQ_TERM,    KC_NO,          KC_SYSTEM_SLEEP,KC_NO
#define LSYST_RROW_3    KC_NO,          KC_NO,          KC_NO,          KC_SYSTEM_WAKE, KC_NO,          KC_NO,          KC_NO
#define LSYST_RROW_4                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO

#define LSYST_RRGB_0                    COL_NONE,       COL_NONE,       COL_NONE,       COL_NONE,       COL_NONE
#define LSYST_RRGB_1                    COL_SYSSAFE,    COL_NONE,       COL_NONE,       COL_SYSHW,      COL_NONE
#define LSYST_RRGB_2                    COL_NONE,       COL_SYSSW,      COL_SYSSW,      COL_NONE,       COL_SYSHW
#define LSYST_RRGB_3                    COL_NONE,       COL_NONE,       COL_SYSSAFE,    COL_NONE,       COL_NONE
#define LSYST_RRGB_4                                    COL_NONE,       COL_NONE,       COL_NONE,       COL_NONE

#define LSYST_RTHM_0    KC_NO,          KC_NO
#define LSYST_RTHM_1    KC_NO
#define LSYST_RTHM_2    TG(LSYST),      KC_NO,          KC_NO


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
	[LBASE] = MAKE_LAYOUT(
		LBASE_LROW_0, LBASE_RROW_0,
		LBASE_LROW_1, LBASE_RROW_1,
		LBASE_LROW_2, LBASE_RROW_2,
		LBASE_LROW_3, LBASE_RROW_3,
		LBASE_LROW_4, LBASE_RROW_4,
		LBASE_LTHM_0, LBASE_RTHM_0,
		LBASE_LTHM_1, LBASE_RTHM_1,
		LBASE_LTHM_2, LBASE_RTHM_2
	),

	[LSYMB] = MAKE_LAYOUT(
		LSYMB_LROW_0, LSYMB_RROW_0,
		LSYMB_LROW_1, LSYMB_RROW_1,
		LSYMB_LROW_2, LSYMB_RROW_2,
		LSYMB_LROW_3, LSYMB_RROW_3,
		LSYMB_LROW_4, LSYMB_RROW_4,
		LSYMB_LTHM_0, LSYMB_RTHM_0,
		LSYMB_LTHM_1, LSYMB_RTHM_1,
		LSYMB_LTHM_2, LSYMB_RTHM_2
	),

	[LNUMB] = MAKE_LAYOUT(
		LNUMB_LROW_0, LNUMB_RROW_0,
		LNUMB_LROW_1, LNUMB_RROW_1,
		LNUMB_LROW_2, LNUMB_RROW_2,
		LNUMB_LROW_3, LNUMB_RROW_3,
		LNUMB_LROW_4, LNUMB_RROW_4,
		LNUMB_LTHM_0, LNUMB_RTHM_0,
		LNUMB_LTHM_1, LNUMB_RTHM_1,
		LNUMB_LTHM_2, LNUMB_RTHM_2
	),

	[LNAVG] = MAKE_LAYOUT(
		LNAVG_LROW_0, LNAVG_RROW_0,
		LNAVG_LROW_1, LNAVG_RROW_1,
		LNAVG_LROW_2, LNAVG_RROW_2,
		LNAVG_LROW_3, LNAVG_RROW_3,
		LNAVG_LROW_4, LNAVG_RROW_4,
		LNAVG_LTHM_0, LNAVG_RTHM_0,
		LNAVG_LTHM_1, LNAVG_RTHM_1,
		LNAVG_LTHM_2, LNAVG_RTHM_2
	),

	[LMOUS] = MAKE_LAYOUT(
		LMOUS_LROW_0, LMOUS_RROW_0,
		LMOUS_LROW_1, LMOUS_RROW_1,
		LMOUS_LROW_2, LMOUS_RROW_2,
		LMOUS_LROW_3, LMOUS_RROW_3,
		LMOUS_LROW_4, LMOUS_RROW_4,
		LMOUS_LTHM_0, LMOUS_RTHM_0,
		LMOUS_LTHM_1, LMOUS_RTHM_1,
		LMOUS_LTHM_2, LMOUS_RTHM_2
	),

	[LFUNC] = MAKE_LAYOUT(
		LFUNC_LROW_0, LFUNC_RROW_0,
		LFUNC_LROW_1, LFUNC_RROW_1,
		LFUNC_LROW_2, LFUNC_RROW_2,
		LFUNC_LROW_3, LFUNC_RROW_3,
		LFUNC_LROW_4, LFUNC_RROW_4,
		LFUNC_LTHM_0, LFUNC_RTHM_0,
		LFUNC_LTHM_1, LFUNC_RTHM_1,
		LFUNC_LTHM_2, LFUNC_RTHM_2
	),

	[LSYST] = MAKE_LAYOUT(
		LSYST_LROW_0, LSYST_RROW_0,
		LSYST_LROW_1, LSYST_RROW_1,
		LSYST_LROW_2, LSYST_RROW_2,
		LSYST_LROW_3, LSYST_RROW_3,
		LSYST_LROW_4, LSYST_RROW_4,
		LSYST_LTHM_0, LSYST_RTHM_0,
		LSYST_LTHM_1, LSYST_RTHM_1,
		LSYST_LTHM_2, LSYST_RTHM_2
	)
};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
	[LBASE] = MAKE_COLOR(
		 LBASE_LRGB_0, LBASE_RRGB_0,
		 LBASE_LRGB_1, LBASE_RRGB_1,
		 LBASE_LRGB_2, LBASE_RRGB_2,
		 LBASE_LRGB_3, LBASE_RRGB_3,
		 LBASE_LRGB_4, LBASE_RRGB_4
	),

	[LSYMB] = MAKE_COLOR(
		 LSYMB_LRGB_0, LSYMB_RRGB_0,
		 LSYMB_LRGB_1, LSYMB_RRGB_1,
		 LSYMB_LRGB_2, LSYMB_RRGB_2,
		 LSYMB_LRGB_3, LSYMB_RRGB_3,
		 LSYMB_LRGB_4, LSYMB_RRGB_4
	),

	[LNUMB] = MAKE_COLOR(
		 LNUMB_LRGB_0, LNUMB_RRGB_0,
		 LNUMB_LRGB_1, LNUMB_RRGB_1,
		 LNUMB_LRGB_2, LNUMB_RRGB_2,
		 LNUMB_LRGB_3, LNUMB_RRGB_3,
		 LNUMB_LRGB_4, LNUMB_RRGB_4
	),

	[LNAVG] = MAKE_COLOR(
		 LNAVG_LRGB_0, LNAVG_RRGB_0,
		 LNAVG_LRGB_1, LNAVG_RRGB_1,
		 LNAVG_LRGB_2, LNAVG_RRGB_2,
		 LNAVG_LRGB_3, LNAVG_RRGB_3,
		 LNAVG_LRGB_4, LNAVG_RRGB_4
	),

	[LMOUS] = MAKE_COLOR(
		 LMOUS_LRGB_0, LMOUS_RRGB_0,
		 LMOUS_LRGB_1, LMOUS_RRGB_1,
		 LMOUS_LRGB_2, LMOUS_RRGB_2,
		 LMOUS_LRGB_3, LMOUS_RRGB_3,
		 LMOUS_LRGB_4, LMOUS_RRGB_4
	),

	[LFUNC] = MAKE_COLOR(
		 LFUNC_LRGB_0, LFUNC_RRGB_0,
		 LFUNC_LRGB_1, LFUNC_RRGB_1,
		 LFUNC_LRGB_2, LFUNC_RRGB_2,
		 LFUNC_LRGB_3, LFUNC_RRGB_3,
		 LFUNC_LRGB_4, LFUNC_RRGB_4
	),

	[LSYST] = MAKE_COLOR(
		 LSYST_LRGB_0, LSYST_RRGB_0,
		 LSYST_LRGB_1, LSYST_RRGB_1,
		 LSYST_LRGB_2, LSYST_RRGB_2,
		 LSYST_LRGB_3, LSYST_RRGB_3,
		 LSYST_LRGB_4, LSYST_RRGB_4
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
    case LBASE:
      set_layer_color(LBASE);
      break;
    case LSYMB:
      set_layer_color(LSYMB);
      break;
    case LNUMB:
      set_layer_color(LNUMB);
      break;
    case LNAVG:
      set_layer_color(LNAVG);
      break;
    case LMOUS:
      set_layer_color(LMOUS);
      break;
    case LFUNC:
      set_layer_color(LFUNC);
      break;
    case LSYST:
      set_layer_color(LSYST);
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
