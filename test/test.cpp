#include <iostream>

#include "engine.h"

class TestApp: public Engine::Application {
    public:
    TestApp() = default;
    ~TestApp() = default;
};


Engine::Application* Engine::CreateApplication(){
    return new TestApp();
}