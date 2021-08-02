#pragma once
#include "Application.h"
#include "ApplicationConfig.h"

extern DeepLight::Application* DeepLight::CreatApplication();

int main(int argc, char** argv) 
{
	DeepLight::Application* app = DeepLight::CreatApplication();

	app->run();

	delete app;
	return 0;
};
