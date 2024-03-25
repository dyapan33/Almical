#include "Trace.h"

namespace Almond {

    void Trace(const char* TraceMessage) {

        if (DebugMode == No) {
            printf("[ERROR]: DebugMode is set to No!");
        }

        if (DebugMode == Null) {
            printf("[ERROR]: DebugMode is set to Null!");
        }

        if (DebugMode == Yes) {
            printf("[TRACE]: ", TraceMessage)
        }

    }

}