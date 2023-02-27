#include "Application.h"

#include "Logger.h"

namespace Engine{

    Application::Application()
    {

    }

    Application::~Application()
    {

    }

    void Application::Run(){
        while(true){
            INFO("App is running");
            CORE_INFO("App is running");
            sleep(1);
        }
    }

}
