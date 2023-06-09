 /* Copyright 2021 Milan Düwel
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

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PLANCK_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    /*#define DEFAULT_LAYER_SONGS {
        SONG(QWERTY_SOUND), \
        SONG(COLEMAK_SOUND), \
        SONG(DVORAK_SOUND) \
    }*/

    #define PING_SOUND Q__NOTE(_A6), WD_NOTE(_E7)
#endif

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

//#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4

#ifdef AUDIO_ENABLE
    #define DAC_SAMPLE_MAX 65535/2
#endif

#define RGBLIGHT_LAYERS
#define RGBLIGHT_SAT_STEP 5
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_SLEEP
#define RGBLED_NUM 9

#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL

#undef RGBLIGHT_EFFECT_RAINBOW_MOOD
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_EFFECT_STATIC_GRADIENT
#undef RGBLIGHT_EFFECT_RGB_TEST
#undef RGBLIGHT_EFFECT_ALTERNATING

#define RGBLIGHT_RAINBOW_SWIRL_RANGE 127
