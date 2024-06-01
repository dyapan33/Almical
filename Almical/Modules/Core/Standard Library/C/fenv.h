// This file is part of The Almical Project & Contributors - It though can be taken out of it's repository.
#ifdef _FENV_H_ // Gaurds - prevents multiple file inclusion
    #define _FENV_H_ // Guards - prevents multiple file inclusion
    
    #include "sys/cdefs.h" // For the DECLS definitions

    #define __cplusplus // Getting DECLS definitions

    __BEGIN_DECLS // Beggining of the DECLS definitions
        typedef void* fenv_t; // Typedefs - Giving a nickname for the void* command

        typedef long int fexcept_t; // Typedefs - Giving a nickname for the long int command

        // Definitions

        #define FE_ALL_EXCEPT (FE_INVALID | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INEXACT)
        #define FE_DFL_ENV (FE_AUTO | FE_NOMASK)
        #define FE_SAVEALL  { int __mask = fetestexcept(FE_ALL_EXCEPT); fesetenv(env); fesetmask(__mask); }
        #define FE_SETENV(env) { fesetenv(env); }

        // Functions

        int     __fexcept_raise(int excepts);
        int     fesetexcept(fexcept_t excepts);
        int     fesetenv(const fenv_t *envptr);
        fexcept_t    fesetmask(fexcept_t mask);
        int     fetestexcept(int excepts);
        int     feraiseexcept(int excepts);
        int     fegetexceptflag(fexcept_t* flagp, int excepts);
        int     fesetexceptflag(const fexcept_t* flagp, int excepts);
        int     fegetenv(fenv_t *envptr);
    __END_DECLS // End of the DECLS definitions
#endif /* _FENV_H_ */


