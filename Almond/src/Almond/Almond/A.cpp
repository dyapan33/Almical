#include "Logger.h"

int main() {
    Almond::DebugModeOn();
    Almond::LogDebug("Hello!");
    Almond::LogTrace("Hello!");
}