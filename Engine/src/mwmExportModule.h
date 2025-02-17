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
//        #define MWM_EXPORT
//    #elif defined(MWM_COMPILE_EXPORT)
    #if defined(MWM_COMPILE_EXPORT)
        #define MWM_EXPORT __declspec(dllexport)
    #else
        #define MWM_EXPORT __declspec(dllimport)
#endif
#elif defined(__linux__) || defined(__unix__) || defined(__APPLE__)
#if defined(MWM_COMPILE_EXPORT)
        #define MWM_EXPORT __attribute__((visibility("default")))
    #else
        #define MWM_EXPORT
#endif
#endif



