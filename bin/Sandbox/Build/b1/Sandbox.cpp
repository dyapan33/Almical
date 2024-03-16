// Includes
#include "Almond/src/Almond.cpp"
#include <iostream>
b

// Using the namespace known as "std"
using namespace std;


// Class
class Sandbox : public Almond::Application {
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

Almond::Application* Almond::CreateApplication() {
    return new Sandbox();
}