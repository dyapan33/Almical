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

#pragma once // Prevents Multiple Inclusion

#include <string> // Include the string header
#include <functional> // Include the functional header

#include "../Core/UseFile.h" // Go out of this dir and into the Core Folder to include UseFile.h

#define USE_DEFINES_H // Make sures that we are using defines.h in the Core Folder..

namespace Almical {
    // Add Event Types to register Events
    enum class EventType {
        None = 0, // No Event is happening
    //  Window Tracking
    //  Close the Window, resize the Window, focus the Window, loose focus of the Window and move the Window.
        WindowClose, WindowResize, WindowFocus, WindowLostFocus, WindowMoved,
    //  App Tracking
        AppTick, AppUpdate, AppRender,
    //  Key Tracking
        KeyPressed, KeyReleased, // Track when a key is pressed, and also released
    //  Mouse Tracking
        MouseButtonPressed, MouseButtonReleased, MouseMoved, MouseScrolled
    };

    // We may want to filter out certain events, so we need Event Categories!

    enum EventCategory {
        None = 0,
        EventCategoryApplication            = BIT(0), 
        EventCategoryInput                  = BIT(1), 
        EventCategoryKeyboard               = BIT(2), 
        EventCategoryMouse                  = BIT(3), 
        EventCategoryMouseButton            = BIT(4)  
    };

    // Return which Event Type this is:
    /*                                                                Return Event Type*/
    #define EVENT_CLASS_TYPE(Type) static EventType GetStaticType() { return ##Type; }\
                                    virtual EventType GetEventType() const override { return GetStaticType(); }\
                                    virtual const char* GetName() const override { return #Type; } // Return the Type Name
    #define EVENT_CLASS_CATEGORY(Category) virtual int GetCategoryFlags() const override { return Category; } // Return the Category
    
    // Base Class For Events

    class Event {
        // Friends the class known as EventDispatcher (that class is after this one)

        friend class EventDispatcher;
    public:
        // ------------------ PURE VIRTUALS ------------------------
        
        // At RunTime see what Type this is.

        virtual EventType GetEventType() const = 0;  // Pure Virtual (Need to define)
        virtual const char* GetName() const = 0;  // Pure Virtual (Need to define)
        virtual int GetCategoryFlags() const = 0;  // Pure Virtual (Need to define)
        
        // ----------------- END OF Pure Virtuals ------------------

        // None Pure Virtuals (Don't Need to Define)

        virtual std::string ToString() const { return GetName(); }

        // inline bool

        // Checks to see if it is in a Category
        inline bool IsInCategory(EventCategory Category) {
            return GetCategoryFlags() & Category;
        }
    protected:
        // Store a Handled Boolean, because we need to see if the event is handled or not!

        bool m_Handled = false;
    };

    // Dispatch an Event Type

    class EventDispatcher {
        template<typename T>
        using EventFn = std::function<bool(T&)>;

    public:
        // Event Refrence

        EventDispatcher(Event& event)
            : m_Event(event)

        {
        }

        template<typename T> // Make a template with a typename of T

        // Checks to see what the event type we are trying to dispatch is.

        bool Dispatch(EventFn<T> func) {

            // Checks to see which Event Type we're in and then it matches the Template Argument
            
            if (m_Event.GetEventType() == T::GetStaticType()) {
                m_Event.m_Handled = func(*(T*)&m_Event);
                return true;
            }

            return false;
        }

    private:
        Event& m_Event;
    }; 
}


