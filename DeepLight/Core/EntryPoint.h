#pragma once
#include "Application.h"
#include "../Log/Logger.h"

#define DEEPLIGHT_APP(APP) DeepLight::Application* DeepLight::CreatApplication(){return new APP();}

extern DeepLight::Application* DeepLight::CreatApplication();

int main(int argc, char** argv) {

	DeepLight::Logger::init();
	DL_WARN("Initialized Logger!");
	DL_INFO("Hello!");

	DeepLight::Application* app = DeepLight::CreatApplication();

	app->run();
	delete app;

	return 0;
}