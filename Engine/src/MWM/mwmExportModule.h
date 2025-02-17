//
// Created by m_ky on 2025/2/17.
//

/**
 * @class   mwExportModule
 * @brief   mwExportModule's brief
 */
#pragma once

#if defined(_WIN32) || defined(_WIN64)
//    #if defined(_DEBUG)
//        #define MWM_API
//    #elif defined(MWM_COMPILE_EXPORT)
    #if defined(MWM_COMPILE_EXPORT)
        #define MWM_API __declspec(dllexport)
    #else
        #define MWM_API __declspec(dllimport)
#endif
#elif defined(__linux__) || defined(__unix__) || defined(__APPLE__)
#if defined(MWM_COMPILE_EXPORT)
        #define MWM_API __attribute__((visibility("default")))
    #else
        #define MWM_API
#endif
#endif



