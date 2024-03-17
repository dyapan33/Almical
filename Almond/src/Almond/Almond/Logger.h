/*
If you see Procceses = 1 that means that there is a proccess happening, 
but if it is set to 2 then there is NO PROCCESES happening!
If you see DebugMode = 1 then that means that you are in DebugMode, if it is equal to 2; Then that means DebugMode is
not On.
*/


#pragma once

#include <stdio.h> // C STL
#include <stdlib.h> // C STL
#include <mutex> // C++ STL
#include <iostream> // C++ STL


using namespace std;


namespace Almond {

    //////////////////////////////////////
    //             Variables             
    /////////////////////////////////////
    
    int Processes; // For The Debug, Trace, Info, Warn, Error, and Critical Logging Functions
    int DebugMode; // For The Debug Activation Section

    //////////////////////////////////////
    //             Log Levels
    /////////////////////////////////////

    enum LogLevels {
        DebugLevel, TraceLevel, InfoLevel, WarnLevel, ErrorLevel, CriticalLevel
    };

    /////////////////////////////////////
    //         Debug Activation         
    /////////////////////////////////////
    
    void DebugModeOn() {
        Processes = 1;
        DebugMode = 1;
        std::cout << "[INFO]: Debug Mode has been set to on!" << endl;
        Processes = 2;
    }

    void DebugModeOff() {
        Processes = 1;
        DebugMode = 2;
        std::cout << "[INFO]: Debug Mode has been set to off!" << endl;
        Processes = 2;
    }

    /////////////////////////////////////
    //          Debug Functions          
    /////////////////////////////////////

    void LogDebug(const char* Message) {
        Processes = 1;
        if (DebugMode == 2) {
            Processes = 1;
            std::cout << "[ERROR]: Debug Mode has been set to off. You cannot call this function." << endl;
            Processes = 2;
        } else {
            Processes = 1;
            std::cout << "[DEBUG]: " << Message << endl;
            Processes = 2;
        }
        Processes = 2;
    }

    void LogTrace(const char* Message) {
        if (DebugMode == 2) {
            std::cout << "[ERROR]: Debug Mode has been set to off. You cannot call this function." << endl;
        } else {
            std::cout << "[TRACE]: " << Message << endl;
        }
    }
    
    /////////////////////////////////////
    //           Info Function           
    /////////////////////////////////////

    void LogInfo(const char* Message) {
        Processes = 1;
        std::cout << "[INFO]: " << Message << endl;
        Processes = 2;
    }

    /////////////////////////////////////
    //         Error Functions         
    /////////////////////////////////////

    void LogWarn(const char* Message) {
        Processes = 1;
        std::cout << "[WARNING]: " << Message << endl;
        Processes = 2;
    }

    void LogError(const char* Message) {
        Processes = 1;
        std::cout << "[ERROR]: " << Message << endl;
        Processes = 2;
    }
    
    void LogCritical(const char* Message) {
        Processes = 1;
        std::cout << "[CRITICAL]: " << Message << endl;
        Processes = 2;
    }

    /////////////////////////////////////
    //             Shutdown             
    /////////////////////////////////////

    void LogStopProcesses() {
        // Complete any processes!
        if(Processes == 1) {
            continue;
        }
    }

    void LogClearTerminal() {
        // Clear the Terminal!
        system("clear");
    }
    
    void LogShutdown() {
        // 1. Complete any Processes!
        LogStopProcesses();
        // 2. Clear The Terminal!
        LogClearTerminal();
        // 3. Exit The Terminal!
        exit(0);
    }
}