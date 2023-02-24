#ifndef APPLICATION_H
#define APPLICATION_H

#pragma once

namespace Engine {
    class Application
    {
        public:
            Application();
            virtual ~Application();
            void Run();

        private:

    };

    // To be defined in client
    Application* CreateApplication();
}


#endif