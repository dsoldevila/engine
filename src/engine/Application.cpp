#include "Application.h"

#include <iostream>
#include <unistd.h>

namespace Engine{

    Application::Application()
    {

    }

    Application::~Application()
    {

    }

    void Application::Run(){
        while(true){
            std::cout << "Default Application running" << std::endl;
            sleep(1);
        }
    }

}
