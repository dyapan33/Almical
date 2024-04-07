#pragma once

#include <string>
#include <functional>


namespace Almond {
    enum class EventType {
        None = 0,
        WindowClose, WindowResize, WindowFocus, WindowLostFocus, WindowMoved,
        AppTick, AppUpdate, AppRender,
        KeyPressed, KeyReleased,
        MouseButtonPressed, MouseButtonReleased, MouseMoved, MouseScrolled
    }

    enum EventCatagory
    {
        None = 0,
        EventCatagoryApplication = BIT(0),
        eVEN
    }
}