#include <iostream>
#include <GLFW/glfw3.h>

int main() {
    GLFWwindow *window;

    if (!glfwInit()) {
        std::cout << "Failed to initialize glfw" << std::endl;
        return -1;
    }

    window = glfwCreateWindow(640, 480, "OwO", NULL, NULL);
    if (!window) {
        glfwTerminate();
        std::cout << "Failed to create glfw window" << std::endl;
        return -1;
    }

    glfwMakeContextCurrent(window);
    glClearColor(0.4f, 0.3f, 0.4f, 0.0f);

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
