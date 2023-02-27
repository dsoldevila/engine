#pragma once

#include "Logger.h"


extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv){
    Engine::Logger::Init();

    auto app = Engine::CreateApplication();
    app->Run();
    delete app;
}