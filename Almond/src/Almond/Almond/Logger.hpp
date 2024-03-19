/*
If you see Procceses = 1 that means that there is a proccess happening, 
but if it is set to 2 then there is NO PROCCESES happening!
If you see DebugMode = 1 then that means that you are in DebugMode, if it is equal to 2; Then that means DebugMode is
not On.
*/


#pragma once

#include <stdio.h> // C STL
#include <stdlib.h> // C STL
#include <cstdlib.h> // C STL
#include <mutex> // C++ STL
#include <iostream> // C++ STL
#include <chrono> // C++ STL
#include <thread> // C++ STL
#include <ctime> // C++ STL
#include <filesystem> // C++ STL
#include <fstream> // C++ STL


namespace fs = std::filesystem;
using namespace std;


namespace Logger {

    int DebugMode;
    int Processes;
    int FileOutputEnabled;
    std::mutex mtx;  // Add a mutex for synchronization

    void DebugOn() {
        std::lock_guard<std::mutex> lock(mtx);  // Lock the mutex
        DebugMode = 1; // DebugMode is ON!
    }

    void DebugOff() {
        std::lock_guard<std::mutex> lock(mtx);  // Lock the mutex
        DebugMode = 2; // DebugMode is OFF!
    }

    void FileOutputEnabled() {
        std::lock_guard<std::mutex> lock(mtx);  // Lock the mutex
        std::cout << "[INFO]: FileOutputEnabled is ON!" << endl;
        FileOutputEnabled = 1; // FileOutputEnabled is ON!
    }

    void FileOutputDisabled() {
        std::lock_guard<std::mutex> lock(mtx);  // Lock the mutex
        std::cout << "[INFO]: FileOutputEnabled is OFF!" << endl;
        FileOutputEnabled = 2; // FileOutputEnabled is OFF!
    }

    void Trace(const char* Message) {
        std::lock_guard<std::mutex> lock(mtx);  // Lock the mutex
        if (FileOutputEnabled == 1) {
            if (DebugMode == 2) {
                std::cout << "[ERROR] Logger: DebugMode is set to off!" << endl;
                exit(1);
            }
            if (DebugMode == 0) {
                std::cout << "[ERROR] Logger: DebugMode is not enabled or disabled." << endl;
                exit(1);
            } else {
                std::cout << "[TRACE]: " << Message << endl;
            }
        }

        if (FileOutputEnabled == 2) {
            if (DebugMode == 2) {
                std::cout << "[ERROR] Logger: DebugMode is set to off!" << endl;
                exit(1);
            }
            if (DebugMode == 0) {
                std::cout << "[ERROR] Logger: DebugMode is not enabled or disabled." << endl;
                exit(1);
            } else {
                std::cout << "[TRACE]: " << Message << endl;
            }
        }
    }
}
