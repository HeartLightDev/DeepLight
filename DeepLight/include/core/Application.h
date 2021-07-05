#pragma once

namespace DeepLight
{
	class Application
	{
	public:
		Application();
		virtual ~Application();

		void run();

		virtual void onEnter();
		virtual void onExit();
	private:

	};

	Application* CreatApplication();
}