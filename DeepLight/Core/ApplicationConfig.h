#pragma once
#include "Application.h"

#define DEEPLIGHT_APP(APP, GraphicsAPI) 
	#define GraphicsAPI \
	DeepLight::Application* DeepLight::CreatApplication(){return new APP();}
