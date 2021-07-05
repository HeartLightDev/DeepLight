#pragma once

#define DEEPLIGHT_APP(APP) DeepLight::Application* DeepLight::CreatApplication(){return new APP();};

extern DeepLight::Application* DeepLight::CreatApplication();


int main(int argc, char argv[]) {

	DeepLight::Application* DeepLightApplication = DeepLight::CreatApplication();
	DeepLightApplication->run();
	delete DeepLightApplication;

}