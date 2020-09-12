#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFC32
#define PRODUCT_ID      0x0287
#define DEVICE_VER      0x0001
#define MANUFACTURER    GusAndGrant
#define PRODUCT         Poggers
#define DESCRIPTION     Poggers is a pretty boy swag staggered split keyboard.

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
// D6 mentioned twice because PHANTOM ROW
#define MATRIX_ROW_PINS { D9, D8, D7, D6, D6 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6, F5, F5 }
#define MATRIX_ROW_PINS_RIGHT { D9, D8, D7, D6, D5 }
#define MATRIX_COL_PINS_RIGHT { B6, B2, B3, B1, F7, F6, F5, F4 }

#define ENCODERS_PAD_A { D4 }
#define ENCODERS_PAD_B { D5 }
#define ENCODER_RESOLUTION 2

// #define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 100
#define DEBOUNCE 5

/* encoder support */
#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F4 }
#define ENCODERS_PAD_A_RIGHT { F4 }
#define ENCODERS_PAD_B_RIGHT { F5 }
#define ENCODER_RESOLUTION 2

#define TAP_CODE_DELAY 10

/* communication between sides */
#define USE_I2C

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

