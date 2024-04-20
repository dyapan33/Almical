/*
Note: This license has also been called the “New BSD License” or “Modified BSD 
License”. See also the 2-clause BSD License. This License is mainly called BSD-3-Clause License.

Copyright 2024 Tech Code

Redistribution and use in source and binary forms, with or without modification, 
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list 
of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, 
this list of conditions and the following disclaimer in the documentation and/or other 
materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors 
may be used to endorse or promote products derived from this software without 
specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND 
CONTRIBUTORS “AS IS” AND ANY EXPRESS OR IMPLIED WARRANTIES,
INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR 
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER 
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, 
STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF 
ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

// #include "Logger.h"

namespace RoseLog {
    // int Yes  = 1; // Yes  - Something is activated.
    // int No   = 2; // No   - Something is de-activated.
    // int Null = 0; // Null - Something is not defined.

    /*
    #ifdef UNIX_TERMINAL
        constexpr char COLOR_RESET[] = "\033[0m"; // Default Terminal Color
        constexpr char COLOR_BLUE[] = "\033[1;34m"; // Blue used
        constexpr char COLOR_GREEN[] = "\033[1;32m";  // Green
        constexpr char COLOR_YELLOW[] = "\033[1;33m"; // Yellow used
        constexpr char COLOR_RED[] = "\033[1;31m"; // Red used
        constexpr char COLOR_MAGENTA[] = "\033[1;35m"; // Magenta used 
        constexpr char COLOR_CYAN[] = "\033[1;36m"; // Cyan
        constexpr char COLOR_BROWN[] = "\033[38;2;139;69;19m"; // Brown
    #endif
    */

    #ifdef NAMESPACE_USE_STD
        using namespace std;
    #endif

    #ifdef USE_IOSTREAM
        #include <iostream>
    #endif

    #ifdef USE_ERROR_FUNCS
        #include "ErrorFuncs.cpp"
        #include "ErrorFuncs.h"
    #endif
}