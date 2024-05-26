/*
BSD 3-Clause License

Copyright (c) 2024, Tech Code

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its
   contributors may be used to endorse or promote products derived from
   this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#pragma once

// Include the WHOLE C STL
#include <assert.h> // C STL
#include <complex.h> // C STL
#include <ctype.h> // C STL
#include <errno.h> // C STL
#include <fenv.h> // C STL
#include <float.h> // C STL
#include <inttypes.h> // C STL
#include <iso646.h> // C STL
#include <limits.h> // C STL
#include <locale.h> // C STL
#include <math.h> // C STL
#include <setjmp.h> // C STL
#include <signal.h> // C STL
#include <stdalign.h> // C STL
#include <stdarg.h> // C STL
#include <stdatomic.h> // C STL
// #include <stdbit.h> // C STL
#include <stdbool.h> // C STL
// #include <stdckdint.h> // C STL
#include <stddef.h> // C STL
#include <stdint.h> // C STL
#include <stdio.h> // C STL
#include <stdlib.h> // C STL
#include <stdnoreturn.h> // C STL
#include <string.h> // C STL
#include <tgmath.h> // C STL
// #include <threads.h> // C STL
#include <time.h> // C STL
#include <uchar.h> // C STL
#include <wchar.h> // C STL
#include <wctype.h> // C STL

// Include the WHOLE C++ STL
#include <mutex> // C++ STL
#include <iostream> // C++ STL
#include <chrono> // C++ STL
#include <thread> // C++ STL
#include <ctime> // C++ STL
#include <filesystem> // C++ STL
#include <fstream> // C++ STL






#ifdef ALM_PLATFORM_WINDOWS
    #include <windows.h>
#endif