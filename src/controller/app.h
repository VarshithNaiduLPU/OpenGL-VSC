#pragma once

#include "../config.h"

class App
{
private:
    void set_up_glfw();
    GLFWwindow* window;

public:
    App();
    ~App();

    void run();
    void set_up_opengl();
};
