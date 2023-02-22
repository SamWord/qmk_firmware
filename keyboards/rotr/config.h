#pragma once


/* key matrix pins */
#define MATRIX_ROW_PINS { E6 }
#define MATRIX_COL_PINS { D1, D0, D4 }

/*Rotary Encoder Pins*/
#define ENCODERS_PAD_A { C6 }
#define ENCODERS_PAD_B { D7 }

/*Sets the number of pulses per increment*/
#define ENCODER_RESOLUTION 2


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
