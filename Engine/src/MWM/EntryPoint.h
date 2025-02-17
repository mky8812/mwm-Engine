//
// Created by m_ky on 2025/2/17.
//

/**
 * @class   EntryPoint
 * @brief   EntryPoint's brief
 */
#pragma once
#include "Application.h"

extern MWM::Application* MWM::CreateApplication();

int main(int argc, char** argn)
{
    MWM::Log::Init();
    MWM_CORE_WARN("Initialized LOG!");
    MWM_ERROR("AAA");
    int a = 2;
    MWM_WARN("aaaa{0}", a );

    auto sandbox = MWM::CreateApplication();
    sandbox->Run();
    delete sandbox;
}