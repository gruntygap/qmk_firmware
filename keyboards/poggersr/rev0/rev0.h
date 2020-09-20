#pragma once
#include "quantum.h"

// readability
// #define XXX KC_NO
// #define ___ KC_NO

/* L00, L01, L02, L03, L04, L05, L06, XXX,     K00, K01, K02, K03, K04, K05, K06, K07, \
L10, L11, L12, L13, L14, L15, L16, XXX,     K10, K11, K12, K13, K14, K15, K16, K17, \
L20, L21, L22, L23, L24, L25, L26, XXX,     K20, K21, K22, K23, K24, K25, XXX, K27, \
L30, L31, L32, L33, L34, L35, L36, XXX,     K30, K31, K32, K33, XXX, K35, K36, K37, \
XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX,     XXX, XXX, XXX, K43, XXX, K45, K46, XXX  */

#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, K07 \
    ) \
    { \
        { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    }

