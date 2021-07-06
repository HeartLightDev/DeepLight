#pragma once

#include <spdlog/spdlog.h>
#include <memory>

namespace DeepLight
{
	class Logger
	{
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	public:
		inline static std::shared_ptr<spdlog::logger>& getCoreLogger() { return s_CoreLogger; };
		inline static std::shared_ptr<spdlog::logger>& getClientLogger() { return s_ClientLogger; };

		static void init();
	};
}

/*Core Logger macros*/
#define DL_CORE_TRACE(...)		::DeepLight::Logger::getCoreLogger()->trace(__VA_ARGS__)
#define DL_CORE_INFO(...)		::DeepLight::Logger::getCoreLogger()->info(__VA_ARGS__)
#define DL_CORE_WARN(...)		::DeepLight::Logger::getCoreLogger()->warn(__VA_ARGS__)
#define DL_CORE_ERROR(...)		::DeepLight::Logger::getCoreLogger()->error(__VA_ARGS__)
#define DL_CORE_CRITICAL(...)	::DeepLight::Logger::getCoreLogger()->critical(__VA_ARGS__)

/*Client Logger macros*/
#define DL_TRACE(...)			::DeepLight::Logger::getClientLogger()->trace(__VA_ARGS__)
#define DL_INFO(...)			::DeepLight::Logger::getClientLogger()->info(__VA_ARGS__)
#define DL_WARN(...)			::DeepLight::Logger::getClientLogger()->warn(__VA_ARGS__)
#define DL_ERROR(...)			::DeepLight::Logger::getClientLogger()->error(__VA_ARGS__)
#define DL_CRITICAL(...)		::DeepLight::Logger::getClientLogger()->critical(__VA_ARGS__)