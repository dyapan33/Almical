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
#pragma once


// Define BIT with a value of x, so for example if you have BIT(1) then you have a position of one in x.
#define BIT(x) (1 << x)


// Only for platform specific code



#ifdef ALM_BEGIN_NAMESPACE
namespace Almond {
#endif

#ifdef ALM_END_NAMESPACE
}
#endif

// * For all CLIENT FILES *

#define ALM_BEGIN_NAMESPACE
    int Windows;
    int PlatformSpecific;
    int Yes = 1;
    int No  = 2;

    void PLTSpecific_Win() {
        PlatformSpecific = Yes;
        Windows = Yes;
    }
#define ALM_END_NAMESPACE





