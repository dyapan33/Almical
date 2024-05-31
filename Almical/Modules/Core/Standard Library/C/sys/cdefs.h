// This file is part of The Almical Project & Contributors - It though can be taken out of it's repository.

#ifndef _SYS_CDEFS_H // Guards - prevents multiple file inclusion
    #define _SYS_CDEFS_H // Guards - prevents multiple file inclusion

    #ifdef __cplusplus // for exporting in C++
        #define __BEGIN_DECLS   extern "C" {
        #define __END_DECLS     }
    #else // Just in case it fails to define them properly
        #define __BEGIN_DECLS
        #define __END_DECLS
    #endif /* __cplusplus */

    #ifdef __GNUC__ // For the GNU Compiler Collection (GCC)
        #define __int8          char
        #define __int16         short int
        #define __int32         int
        #define __int64         long long int
    #else
        #define __extension__ // else just define it as an extension
    #endif /* __GNUC__ */

#endif /* _SYS_CDEFS_H */



