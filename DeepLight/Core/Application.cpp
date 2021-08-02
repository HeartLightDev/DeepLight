#include "Application.h"

DeepLight::Application::Application(): s_Quit(false)
{
}

DeepLight::Application::~Application()
{
}

void DeepLight::Application::run()
{
	onInit();

	while (!s_Quit)
	{
		onUpdate();
		onDraw();
	}

	onExit();
}

void DeepLight::Application::onInit()
{
}

void DeepLight::Application::onUpdate()
{
}

void DeepLight::Application::onDraw()
{
}

void DeepLight::Application::onExit()
{
}
