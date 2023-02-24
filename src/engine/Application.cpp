#include "Application.h"

#include "spdlog/spdlog.h"
#include "unistd.h"

namespace Engine{

    Application::Application()
    {

    }

    Application::~Application()
    {

    }

    void Application::Run(){
        while(true){
            spdlog::info("Default Application running");
            sleep(1);
        }
    }

}
