#include "FairyDown.h"

#include <iostream>
#include <GLFW/glfw3.h>

void hello() {
    std::cout << "Hi, world!" << std::endl;

    GLFWwindow* window;

    if (!glfwInit())
        return;

    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);

    if (!window)
    {
        glfwTerminate();
        return;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        glfwSwapBuffers(window);

        glfwPollEvents();
    }
}
