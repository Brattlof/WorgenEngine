#include "fmt/core.h"

#include <worgen/defines.h>
#include <worgen/test/test.h>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

void error_callback(int error, const char *description)
{
	fmt::println("GLFW Error: {}, {}", error, description);
}

int main(int argc, char **argv)
{
	fmt::println("Engine version: {}", WORGEN_VERSION);

	wg::Test test;
	fmt::println("test: {}", test.test);

	if (!glfwInit())
		exit(EXIT_FAILURE);

	GLFWwindow *window = glfwCreateWindow(640, 480, "Editor", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);

	while (!glfwWindowShouldClose(window))
	{
		// Keep running
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
	exit(EXIT_SUCCESS);
}