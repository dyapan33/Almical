// This file is part of The Almical Project & Contributors - It though can be taken out of it's repository.


#ifndef ASSERT_H // Ensures the code is included only once, preventing multiple definitions.
#define ASSERT_H 

    #include <stdio.h>   // Includes the file stdio.h
    #include <stdlib.h> // Includes the file stdlib.h              

    /* Defines the assert macro that takes an expression as an argument. */


    #define assert(expr) do { \
        if (!(expr)) { \
            fprintf(stderr, "Assertion failed: %s, file: %s, line: %d\n", \
                    #expr, __FILE__, __LINE__); \
            abort(); \
        } \
    } while (0)

#endif // Ends ASSERT_H

/* For code "if (!(expr)) { \": Checks if the expression is false (evaluates to zero) */

/* For code "fprintf(...);": If false, prints an 
informative error message to standard error (stderr) using fprintf. The message includes the failed 
expression, file name (__FILE__), and line number (__LINE__).*/

// For code "abort(); \" terminate the program abnormaly.
// For code "do and while(0)": Creates a do loop that only last once


