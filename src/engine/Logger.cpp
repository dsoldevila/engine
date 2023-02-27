#include "Logger.h"

#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>

namespace Engine {

    std::shared_ptr<spdlog::logger> Logger::core_logger;
    std::shared_ptr<spdlog::logger> Logger::client_logger;

    void Logger::Init(){

        std::vector<spdlog::sink_ptr> logSinks;
		logSinks.emplace_back(std::make_shared<spdlog::sinks::stdout_color_sink_mt>());
		logSinks.emplace_back(std::make_shared<spdlog::sinks::basic_file_sink_mt>("engine.log", true));

		logSinks[0]->set_pattern("%^[%T] %n: %v%$");
		logSinks[1]->set_pattern("[%T] [%l] %n: %v");

		core_logger = std::make_shared<spdlog::logger>("ENGINE", begin(logSinks), end(logSinks));
		spdlog::register_logger(core_logger);
		core_logger->set_level(spdlog::level::trace);
		core_logger->flush_on(spdlog::level::trace);

		client_logger = std::make_shared<spdlog::logger>("APP", begin(logSinks), end(logSinks));
		spdlog::register_logger(client_logger);
		client_logger->set_level(spdlog::level::trace);
		client_logger->flush_on(spdlog::level::trace);

    }
}