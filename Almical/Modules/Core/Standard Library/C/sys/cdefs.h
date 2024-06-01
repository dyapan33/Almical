// This file is part of The Almical Project & Contributors - It though can be taken out of it's repository.

#ifndef _SYS_CDEFS_H_ // Guards - prevents multiple file inclusion
    #define _SYS_CDEFS_H_ // Guards - prevents multiple file inclusion

    #ifdef __cplusplus // for exporting in C++
        #define __BEGIN_DECLS   extern "C" {  // defining the BEGIN_DECLS definition as the extern "C" command
        #define __END_DECLS     } // defining the  END_DECLS definition as a "}" becuase it's the end of the extern "C" command
    #else // Just in case it fails to define them properly
        #define __BEGIN_DECLS
        #define __END_DECLS
    #endif /* __cplusplus */

    #ifdef __GNUC__ // For the GNU Compiler Collection (GCC)
        #define __int8          char // defining __int8 as the char syntax command
        #define __int16         short int // defining __int16 as the short int syntax command
        #define __int32         int // defining __int32 as the int syntax command
        #define __int64         long long int // defining __int64 as the long long int syntax command
    #else
        #define __extension__
    #endif /* __GNUC__ */

#endif /* _SYS_CDEFS_H_ */



