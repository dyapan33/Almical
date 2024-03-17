#pragma once

#include <stdio.h> // C STL
#include <mutex> // C++ STL
#include <iostream> // C++ STL


using namespace std;


namespace Almond {
    //////////////////////////////////////
    //            Log Levels
    /////////////////////////////////////
    enum LogLevels {
        DebugLevel, TraceLevel, InfoLevel, WarnLevel, ErrorLevel, CriticalLevel
    };
    /////////////////////////////////////
    //         Debug Activation         
    /////////////////////////////////////
    int DebugMode;
    
    void DebugModeOn() {
        DebugMode = 1;
        std::cout << "[INFO]: Debug Mode has been set to on!" << endl;
    }

    void DebugModeOff() {
        DebugMode = 2;
        std::cout << "[INFO]: Debug Mode has been set to off" << endl;
    }

    /////////////////////////////////////
    //          Debug Functions          
    /////////////////////////////////////

    void Debug(const char* Message) {
        if (DebugMode == 2) {
            std::cout << "[ERROR]: Debug Mode has been set to off. You cannot call this function." << endl;
        } else {
            std::cout << "[DEBUG]: " << Message << endl;
        }
    }

    void Trace(const char* Message) {
        if (DebugMode == 2) {
            std::cout << "[ERROR]: Debug Mode has been set to off. You cannot call this function." << endl;
        } else {
            std::cout << "[TRACE]: " << Message << endl;
        }
    }
}