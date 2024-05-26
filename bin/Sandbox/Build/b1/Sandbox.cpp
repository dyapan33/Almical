// Includes
#include "Almical/Almical.h"
#include <iostream>


// Using the namespace known as "std"
using namespace std;


// Class
class Sandbox : public Almical::Application {
public:
    Sandbox() {
        //
    }
    //
    ~Sandbox() {
        //
    }
    //
};

// Main Code

Almical::Application* Almical::CreateApplication() {
    return new Sandbox();
}