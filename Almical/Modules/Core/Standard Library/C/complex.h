// This file is part of The Almond Project & Contributors - It though can be taken out of it's repository.

// In the future we will add __STDC_NO_COMPLEX__ which makes everything in this file not work.

#ifdef COMPLEX_H
    #define COMPLEX_H

    // Types    
    #define complex _Complex // Defines Complex Functions
    #define imaginary _Imaginary // Defines Imaginary Functions
 
    // Constants
    #define I // Expands _Imaginary_I or _Complex_I
    #define _Imaginary_I // Expands Imaginary functions
    #define _Complex_I // Expands Complex functions



#endif

#ifdef NO_I // Guard - Prevents multiple inclusion
#define NO_I // Guard - Prevents multiple inclusion
    #undef I // un-defines "I"
#endif