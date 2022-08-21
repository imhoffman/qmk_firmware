<<<<<<<< HEAD:keyboards/massdrop/thekey_v2/thekey_v2.h
/* Copyright 2022 Jason Wihardja
========
/* Copyright 2022 bojiguard (@bojiguard)
>>>>>>>> upstream/master:keyboards/fungo/fungo.h
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
 
#pragma once

#include "quantum.h"

<<<<<<<< HEAD:keyboards/massdrop/thekey_v2/thekey_v2.h
#define XXX KC_NO

#define LAYOUT( \
    K00, K01, K02  \
) { \
    { K00, K01, K02 }, \
}
========
#ifdef KEYBOARD_fungo_rev1
    #include "rev1.h"
#endif
>>>>>>>> upstream/master:keyboards/fungo/fungo.h
