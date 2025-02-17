/**
 * @class   Application
 * @brief   Application's brief
 */

#pragma once
#include <MWM/Core.h>
namespace MWM{
    class MWM_API Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    Application* CreateApplication();
}
