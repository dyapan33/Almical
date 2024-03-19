#include "Logger.h"

int main() {
    Almond::DebugModeOn();
    Almond::LogDebug("Hello!");
    Almond::LogTrace("Hello!");
    Almond::LogInfo("Hello!");
    Almond::LogWarn("Hello!");
    Almond::LogError("Hello!");
    Almond::LogCritical("Hello!");
    Almond::LogClearTerminal();
}