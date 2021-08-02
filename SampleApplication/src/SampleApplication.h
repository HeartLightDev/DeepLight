#pragma once
#include "DeepLight.h"

class SampleApplication : public DeepLight::Application
{
public:
	SampleApplication();
	~SampleApplication();

private:

};

DEEPLIGHT_APP(SampleApplication, SFML)