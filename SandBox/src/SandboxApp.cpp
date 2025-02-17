//
// Created by m_ky on 2025/2/17.
//

/**
 * @class   SandboxApp
 * @brief   SandboxApp's brief
 */

#include "MwM.h"
class Sandbox : public MWM::Application
{
public:
    Sandbox()
    {

    }
    ~Sandbox()
    {

    }
};

MWM::Application* MWM::CreateApplication()
{
    return new Sandbox();
}
