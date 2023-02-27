#ifndef LOGGER_H
#define LOGGER_H

#pragma once

#include <spdlog/spdlog.h>

namespace Engine {
    class Logger
    {
    public:
        static void Init();
        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger(){ return core_logger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger(){ return client_logger; }


    private:
        static std::shared_ptr<spdlog::logger> core_logger;
        static std::shared_ptr<spdlog::logger> client_logger;


    };

}

// Core log macros
#define CORE_TRACE(...)    ::Engine::Logger::GetCoreLogger()->trace(__VA_ARGS__)
#define CORE_INFO(...)     ::Engine::Logger::GetCoreLogger()->info(__VA_ARGS__)
#define CORE_WARN(...)     ::Engine::Logger::GetCoreLogger()->warn(__VA_ARGS__)
#define CORE_ERROR(...)    ::Engine::Logger::GetCoreLogger()->error(__VA_ARGS__)
#define CORE_CRITICAL(...) ::Engine::Logger::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define TRACE(...)         ::Engine::Logger::GetClientLogger()->trace(__VA_ARGS__)
#define INFO(...)          ::Engine::Logger::GetClientLogger()->info(__VA_ARGS__)
#define WARN(...)          ::Engine::Logger::GetClientLogger()->warn(__VA_ARGS__)
#define ERROR(...)         ::Engine::Logger::GetClientLogger()->error(__VA_ARGS__)
#define CRITICAL(...)      ::Engine::Logger::GetClientLogger()->critical(__VA_ARGS__)

#endif