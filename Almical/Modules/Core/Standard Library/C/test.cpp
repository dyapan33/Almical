#include "fenv.h"
#include <stdio.h>


#define FE_PRINT(mask)  \
    printf("Current exceptions: ");  \
    if (mask & FE_INVALID) printf(" FE_INVALID");  \
    if (mask & FE_DIVBYZERO) printf(" FE_DIVBYZERO");  \
    if (mask & FE_UNDERFLOW) printf(" FE_UNDERFLOW");  \
    if (mask & FE_OVERFLOW) printf(" FE_OVERFLOW");  \
    if (mask & FE_INEXACT) printf(" FE_INEXACT");  \
    printf("\n");

int main() {
    fenv_t env;

    // Get current environment
    fegetenv(&env);
    FE_PRINT(fetestexcept(FE_ALL_EXCEPT));

    // Raise divide-by-zero exception
    feraiseexcept(FE_DIVBYZERO);
    FE_PRINT(fetestexcept(FE_ALL_EXCEPT));

    // Clear the raised exception
    fesetenv(&env);
    FE_PRINT(fetestexcept(FE_ALL_EXCEPT));

    return 0;
}


