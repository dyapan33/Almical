// Includes
#include "Almond/Almond.h"
#include <iostream>


// Using the namespace known as "std"
using namespace std;


// Class
class Sandbox : public Almond::Application {
public:
    Sandbox() {
        
    }
    
    ~Sandbox() {
        
    }
    
};

// Main Code

Almond::Application* Almond::CreateApplication() {
    return new Sandbox();
}