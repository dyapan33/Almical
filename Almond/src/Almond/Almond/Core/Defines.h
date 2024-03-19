#ifdef ALMOND_PLATFORM_WINDOWS

    #include <windows.h>
    #include "Almpch.h"
    #include "Almpch.cpp"

#endif

#ifdef ALMOND_PLATFORM_MAC
    
    #include "Almpch.h"
    #include "Almpch.cpp"

#endif

#ifdef ALMOND_PLATFORM_LINUX

    #ifdef ALMOND_PLATFORM_DEBIAN

        #include "Almpch.h"
        #include "Almpch.cpp"
        #include "Debian.h"
    
    #endif

    #ifdef ALMOND_PLATFORM_REDHAT
    
        #include "Almpch.h"
        #include "Almpch.cpp"
        #include "Redhat.h"
    
    #endif

#endif
