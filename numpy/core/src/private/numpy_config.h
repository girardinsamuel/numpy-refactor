#ifndef _NUMPY_CONFIG_H_
#define _NUMPY_CONFIG_H_

#include "config.h"

/* Disable broken Sun Workshop Pro math functions */
#ifdef __SUNPRO_C
#undef HAVE_ATAN2
#endif

/* 
 * On Mac OS X, because there is only one configuration stage for all the archs
 * in universal builds, any macro which depends on the arch needs to be
 * harcoded
 */
#ifdef __APPLE__
    #undef SIZEOF_LONG
    #undef SIZEOF_PY_INTPTR_T

    #ifdef __LP64__
        #define SIZEOF_LONG         8
        #define SIZEOF_PY_INTPTR_T  8
    #else
        #define SIZEOF_LONG         4
        #define SIZEOF_PY_INTPTR_T  4
    #endif
#endif

#endif /* _NUMPY_CONFIG_H_ */
