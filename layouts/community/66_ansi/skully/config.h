#pragma once

#ifdef AUDIO_CLICKY
    #define AUDIO_CLICKY_ON
    #define AUDIO_CLICKY_FREQ_DEFAULT 261.63f
    #define AUDIO_CLICKY_FREQ_MIN 65.41f
    #define AUDIO_CLICKY_FREQ_MAX 1046.5f
    //#define AUDIO_CLICKY_FREQ_FACTOR 1.18921f
    //#define AUDIO_CLICKY_FREQ_FACTOR 2.71828f  // e
    #define AUDIO_CLICKY_FREQ_FACTOR 1.61803f // golden ratio
    #define AUDIO_CLICKY_FREQ_RANDOMNESS 17.0f
#endif
