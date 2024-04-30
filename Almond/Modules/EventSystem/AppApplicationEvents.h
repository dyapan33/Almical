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
    class WindowResizeEvent : public Event {
    public:

        // Our Main Function - Stores the width and height of how much the user wants to resize to.

        WindowResizeEvent(unsigned int Width, unsigned int Height)
            : m_Width(Width), m_Height(Height) {}
        
        // Gets the Width and Height of how much the user wants to resize to

        inline unsigned int GetWidth() const { return m_Width; }
        inline unsigned int GetHeight() const {return m_Height; }

        // Prints how much

        std::string ToString() const override {
            std::stringstream ss;
            ss << "WindowResizeEvent" << m_Width << ", " << m_Height;
            return ss.str();
        }

        // Chooses the Class_Type and Class_Category!

        EVENT_CLASS_TYPE(WindowResize)
        EVENT_CLASS_CATEGORY(EventCategoryApplication)
    private:

        // Stores m_Width and m_Height

        unsigned int m_Width, m_Height;
    };

    class WindowCloseEvent : public Event {
    public:
        // Main Event - Does not need any data at all!!!!

        WindowCloseEvent() {}

        // Choose the Class_Type and Class_Category!

        EVENT_CLASS_TYPE(WindowClose)
        EVENT_CLASS_CATEGORY(EventCategoryApplication)
    };

    // ! WARNING: NOT TO SURE YET IF I WANT THIS INCLUDED. !

    class ApTickEvent : public Event {
    public:
        // Main Function - Does not need any data at all!!!!

        AppTickEvent() {}

        // Choose the Class_Type and Class_Category!

        EVENT_CLASS_TYPE(AppTick)
        EVENT_CLASS_CATEGORY(EventCategoryApplication)
    };

    class AppUpdateEvent : public Event {
    public: 
        // Main Function - Does not need any data at all!!!!

        AppUpdateEvent() {}

        // Choose the Class_Type and Class_Category!

        EVENT_CLASS_TYPE(AppUpdate)
        EVENT_CLASS_CATEGORY(EventCategoryApplication)
    };

    class AppRenderEvent : public Event {
    public: 
        // Main Function - Does not need any data at all!!!!

        AppRenderEvent() {}

        // Choose the Class_Type and Class_Category!

        EVENT_CLASS_TYPE(AppRender)
        EVENT_CLASS_CATEGORY(EventCategoryApplication)
    };
}


