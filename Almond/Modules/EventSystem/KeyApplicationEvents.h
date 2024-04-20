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

#ifdef INCLUDE_SSTREAM // if you type in "#define INCLUDE_SSTREAM" it will "#include <sstream>"
    #include <sstream>
#endif // End of "#ifdef"

/* This File is only for Key Events. */

#pragma once // Make sures that the file is not included MANY times!

// Includes

#define INCLUDE_SSTREAM // include the sstream header

#include "Events.h" // I want to import everything from "Event.h" to this file

// Main Code

namespace Almond { // Almond::[FunctionName]
    // Create a KeyEvent Base Class (This class is abstract)

    class KeyEvent : public Event { 
        public:

            // Gets m_KeyCode together!!!

            inline int GetKeyCode() const { return m_KeyCode; }

            // Sets the class category!

            // BTW (By the way) this shortens the code.

            EVENT_CLASS_CATEGORY(EventCategoryKeyBoard | EventCategoryInput)
        protected:
            
            // Protected Constructor - Nothing else can construct it.

            KeyEvent(int KeyCode) 
                : m_KeyCode(KeyCode) {}

            int m_KeyCode; // Stores a KeyCode
    }; 

    // Key Pressed Events (An actual class!)

    class KeyPressedEvent : public KeyEvent {
        public:

            // Stores the Key Code and Repeat Count, also this first stores a key, and if there is a Repeat Count then it will wait a bit and store the Repeat Count of that key!

            KeyPressedEvent(int KeyCode, int RepeatCount) // If Repeat Count equals to 0, then that is the first time the key has been pressed
                : KeyEvent(KeyCode), m_RepeatCount(RepeatCount) {}

            inline int GetRepeatCount() const { return m_RepeatCount; }

            // Prints the key and then then (If there is a Repeat Count) prints the same key again and again, (Kind of like a Logging Library!)

            std::string ToString() const override {

                std::Stringstream ss;
                ss << "KeyPressedEvent: " << m_KeyCode << " (key repeated " << m_RepeatCount << " times)"
                return ss.str();

            }

            // We need the Event Type, Name, and Category Flags, we used a macro becuase NO ONE WANTS TO TYPE IN 4 Lines of code when the can just type in 1. This just chooses the Event Class Type.

            EVENT_CLASS_TYPE(KeyPressed)

        private: 
            int m_RepeatCount;
    };
}


