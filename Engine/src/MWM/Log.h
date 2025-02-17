/**
 * @class   Log
 * @brief   Log's brief
 */

#pragma once
#include <memory>
#include <spdlog/spdlog.h>
#include "Core.h"
namespace MWM{
    class MWM_API Log {
    public:
        static void Init();
        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {return s_CoreLogger;}
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() {return s_ClientLogger;}

    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };
}

// Core log macros
#define MWM_CORE_ERROR(...) ::MWM::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MWM_CORE_WARN(...)  ::MWM::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MWM_CORE_INFO(...)  ::MWM::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MWM_CORE_TRACE(...) ::MWM::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MWM_CORE_FATAL(...) ::MWM::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define MWM_ERROR(...) ::MWM::Log::GetClientLogger()->error(__VA_ARGS__)
#define MWM_WARN(...)  ::MWM::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MWM_INFO(...)  ::MWM::Log::GetClientLogger()->info(__VA_ARGS__)
#define MWM_TRACE(...) ::MWM::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MWM_FATAL(...) ::MWM::Log::GetClientLogger()->fatal(__VA_ARGS__)