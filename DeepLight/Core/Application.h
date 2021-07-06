#pragma once

namespace DeepLight {
	class Application
	{
	public:
		Application();
		~Application();

		void run();

		//virtual void prepareSettings(const settings set);
		virtual void onExit();
	private:

	};

	Application* CreatApplication();

	struct settings
	{
		int width;
		int height;
	};
}