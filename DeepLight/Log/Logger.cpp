#include "Logger.h"
#include <spdlog/sinks/stdout_color_sinks.h>

std::shared_ptr<spdlog::logger> DeepLight::Logger::s_CoreLogger;
std::shared_ptr<spdlog::logger> DeepLight::Logger::s_ClientLogger;

void DeepLight::Logger::init()
{
	spdlog::set_pattern("%^[%T]%n: %v%$");

	s_CoreLogger = spdlog::stdout_color_mt("DeepLight");
	s_CoreLogger->set_level(spdlog::level::trace);

	s_ClientLogger = spdlog::stdout_color_mt("Application");
	s_ClientLogger->set_level(spdlog::level::trace);
}
