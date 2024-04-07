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

/* This File is only for Mouse Events. */

#pragma once // Make sures that the file is not included MANY times!

// Includes

#define INCLUDE_SSTREAM // include the sstream header
#include <stdio.h>

#include "Events.h" // I want to import everything from "Event.h" to this file

// Main Code

namespace Almond {
    class MouseMovedEvent : public Event {
    public:

        // Make a x and y in our Main Function

        MouseMovedEvent(float x, float y)
            : m_MouseX(x), m_MouseY(y) {}

        // Gets the x and y coordinates

        inline float GetX() const { return m_MouseX; } 
        inline float GetY() const { return m_MouseY; }

        // Prints where the mouse has been moved to!

        std::string ToString() const override {
            std::stringstream ss;
            ss << "MouseMovedEvent: " << m_MouseX << ", " << m_MouseY;
            return ss.str();
        }

        // Set the Event Type and Class Type

        EVENT_CLASS_TYPE(MouseMoved)
        EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCategoryInput)

    private:

        // Storage of "m_" floats!

        float m_MouseX, m_MouseY;

    };

    class MouseScrolledEvent : public Event {
    public: 

        // Where have we scrolled (Offset):

        MouseScrolledEvent(float XOffset, float YOffset)
            : m_XOffset(XOffset), m_YOffset(YOffset) {}

        // Get the Offset

        inline float GetXOffset() const { return m_XOffset; }
        inline float GetYOffset() const { return m_YOffset; }

        // Print the Offsets

        std::string ToString() {
            std::stringstream ss;
            ss < "MouseScrolledEvent: " << GetXOffset() << ", " << GetYOffset();
            return ss.str();
        }

        // Choose the Category and Type!

        EVENT_CLASS_TYPE(MouseScrolled)
        EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCategoryInput)
    private:

        // Storage of "m_" floats!

        float m_XOffset, m_YOffset;
    };

    // A Base Class

    class MouseButtonEvent : public Event {
    public:
        inline int GetMouseButton() const { return m_Button; } // Gets which button you pressed on your mouse.
        
        // Chooses the Event Category

        EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCategoryInput)
    protected:

        // Cannot Create this event (only MouseButtonPressed & Released Events can!)

        MouseButtonEvent(int Button)
            : m_Button(Button) {}

        // Storage of "m_" int!

        int m_Button;
    };

    class MouseButtonPressedEvent : public MouseButtonEvent {
    public:

        // Our Main Event

        MouseButtonPressedEvent(int Button)
            : MouseButtonEvent(Button) {}

        // Prints all the info to the screen!

        std::string ToString() const override {
            std::stringstream ss;
            ss << "MouseButtonPressedEvent: " << m_Button;
            return ss.str();
        }

        // Choose the Class Type!

        EVENT_CLASS_TYPE(MouseButtonPressed)
    };

    class MouseButtonReleasedEvent: public MouseButtonEvent {
    public:

        // Our Main Event

        MouseButtonReleasedEvent(int Button)
            : MouseButtonEvent(Button) {}
        
        // Prints all the info to the screen!

        std::string ToString() const override {
            std::stringstream ss;
            ss << "MouseButtonReleasedEvent: " << m_Button;
            return ss.str();
        }

        // Chooses the Class Type!

        EVENT_CLASS_TYPE(MouseButtonReleased)
    }
}


