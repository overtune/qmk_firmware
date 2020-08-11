#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

enum custom_keycodes {
	SE_ARING = SAFE_RANGE,
	SE_AUML,
	SE_OUML,
	MSG_MVH,
	MSG_EMAIL,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Layer 0
 * ,------------------------------------------------------------------------------------------------------.
 * | Esc      |  Q   |  W  |  E  |   R   |     T       |     Y      |   U   | I | O |   P   |    Bksp     |
 * |----------+------+-----+-----+-------+-------------+------------+-------+---+---+-------+-------------|
 * | Ctrl(Tab)|  A   |  S  |  D  |   F   |     G       |     H      |   J   | K | L |   ;   |      "      |
 * |----------+------+-----+-----+-------+-------------+------------+-------+---+---+-------+-------------|
 * | Shift    |  Z   |  X  |  C  |   V   |     B       |     N      |   M   | , | . |   /   |    Enter    |
 * |----------+------+-----+-----+-------+-------------+------------+-------+---+---+-------+-------------|
 * | TG(1)    | Ctrl | Alt | CMD | MO(4) | LT_3(Space) | LT_2(Bksp) | MO(4) | * | - | MO(5) | Alt(KC_GRV) |
 * `------------------------------------------------------------------------------------------------------'
 */
[0] = LAYOUT_ortho_4x12(
	KC_ESC,         KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,         KC_Y,          KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC, 
	LCTL_T(KC_TAB), KC_A,    KC_S,    KC_D,    KC_F,  KC_G,         KC_H,          KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT, 
	KC_LSFT,        KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,         KC_N,          KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_SFTENT, 
	TG(1),          KC_LCTL, KC_LALT, KC_LGUI, MO(4), LT(3,KC_SPC), LT(2,KC_BSPC), MO(2), KC_ASTR, KC_MINS, MO(5),   LALT(KC_GRV)
),

/* Layer 1
 * ,-----------------------------------------------.
 * | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | Å |
 * |---+---+---+---+---+---+---+---+---+---+---+---|
 * | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ö | ä |
 * |---+---+---+---+---+---+---+---+---+---+---+---|
 * | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ |
 * |---+---+---+---+---+---+---+---+---+---+---+---|
 * | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ | ▽ |
 * `-----------------------------------------------'
 */

[1] = LAYOUT_ortho_4x12(
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, SE_ARING, 
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, SE_OUML, SE_AUML, 
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

/* Layer 2
 * ,------------------------------------------------.
 * | ▽ | ! | @ | { | } |   |   |   | 7 | 8 | 9  |   |
 * |---+---+---+---+---+---+---+---+---+---+----+---|
 * | ▽ | # | $ | ( | ) |   |   |   | 4 | 5 | 6  |   |
 * |---+---+---+---+---+---+---+---+---+---+----+---|
 * | ▽ | % | ^ | [ | ] |   |   |   | 1 | 2 | 3  |   |
 * |---+---+---+---+---+---+---+---+---+---+----+---|
 * |   |   |   |   | ▽ | ▽ | ▽ | ▽ | - | 0 | =+ |   |
 * `------------------------------------------------'
 */

[2] = LAYOUT_ortho_4x12(
	KC_TRNS, KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_NO,   KC_NO,   KC_NO,   KC_P7,   KC_P8, KC_P9,  KC_NO, 
	KC_TRNS, KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_NO,   KC_NO,   KC_NO,   KC_P4,   KC_P5, KC_P6,  KC_NO, 
	KC_TRNS, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_NO,   KC_NO,   KC_NO,   KC_P1,   KC_P2, KC_P3,  KC_NO, 
	KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_P0, KC_EQL, KC_NO
),

/* Layer 3
 * ,----------------------------------------------------------------------------------------------------------------------.
 * | ▽ |   |  Mouse 1   |  Mouse Up  |   Mouse 2   |   |      |   Mouse Acc 0    |  Mouse Acc 1   | Mouse Acc 2 | =+ |    |
 * |---+---+------------+------------+-------------+---+------+------------------+----------------+-------------+----+----|
 * | ▽ |   | Mouse Left | Mouse Down | Mouse Right |   | Left |       Down       |       Up       |    Right    |    | `~ |
 * |---+---+------------+------------+-------------+---+------+------------------+----------------+-------------+----+----|
 * | ▽ |   |            |            |             |   |      | Mouse Wheel Down | Mouse Wheel Up |             | -  |    |
 * |---+---+------------+------------+-------------+---+------+------------------+----------------+-------------+----+----|
 * |   | ▽ |     ▽      |     ▽      |      ▽      |   |  ▽   |        ▽         |                |             |    |    |
 * `----------------------------------------------------------------------------------------------------------------------'
 */
[3] = LAYOUT_ortho_4x12(
	KC_TRNS, KC_NO,   KC_BTN1, KC_MS_U, KC_BTN2, KC_NO, KC_NO,   KC_ACL0, KC_ACL1, KC_ACL2, KC_EQL,  KC_NO, 
	KC_TRNS, KC_NO,   KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,   KC_GRV, 
	KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_WH_D, KC_WH_U, KC_NO,   KC_MINS, KC_NO, 
	KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO
),

[4] = LAYOUT_ortho_4x12(
	KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, 
	KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, 
	KC_TRNS, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN, KC_TRNS, 
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
),

[5] = LAYOUT_ortho_4x12(
	MSG_MVH, MSG_EMAIL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
	KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
	KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
	KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

[6] = LAYOUT_ortho_4x12(
	KC_TRNS, RESET,   DEBUG,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD,  RGB_VAI, RGB_VAD, KC_DEL, 
	KC_TRNS, KC_TRNS, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, DF(0),   DF(1),    DF(2),   TO(5),   KC_TRNS, 
	KC_TRNS, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  TERM_ON, TERM_OFF, KC_TRNS, KC_TRNS, KC_TRNS, 
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case SE_ARING:
			if (record->event.pressed) {
				SEND_STRING(SS_DOWN(X_LALT)"a"SS_UP(X_LALT));
				break;
			}
		case SE_AUML:
			if (record->event.pressed) {
				SEND_STRING(SS_DOWN(X_LALT)"u"SS_UP(X_LALT)"a");
				break;
			}
		case SE_OUML:
			if (record->event.pressed) {
				// when keycode QMKBEST is pressed
				SEND_STRING(SS_DOWN(X_LALT)"u"SS_UP(X_LALT)"o");
			} else {
				// when keycode QMKBEST is released
			}
			break;
		case MSG_MVH:
			if (record->event.pressed) {
				SEND_STRING("Med v"SS_DOWN(X_LALT)"u"SS_UP(X_LALT)"anliga h"SS_DOWN(X_LALT)"u"SS_UP(X_LALT)"alsningar, Johan Runesson");
				break;
			}
		case MSG_EMAIL:
			if (record->event.pressed) {
				SEND_STRING("info@johanrunesson.se");
				break;
			}
	}
	return true;
};
