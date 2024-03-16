// Functions of an entry point:
// Initialization and Configuration
// Main Loop
// Clean Up

// Includes
#include "Application.h"








// Use the namespace std!
// using namespace std;

// Extern
extern Almond::Application* Almond::CreateApplication();

// Main Code
int main(int argc, char** argv) {
    auto app = Almond::CreateApplication();
    app->Run();
    delete app;
}




