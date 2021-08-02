#pragma once

namespace DeepLight {

	class Application
	{
	public:
		Application();
		~Application();

		/*Application main run function*/
		void run();

		/*Call when Application is create, override to use personal function*/
		virtual void onInit();

		/*Call when Application is update, override to use personal function*/
		virtual void onUpdate();

		/*Call after update, override to use personal function*/
		virtual void onDraw();

		/*Call when Application is quit, override to use personal function*/
		virtual void onExit();
	private:
		/*state of quit*/
		bool s_Quit;
	};

	Application* CreatApplication();
}

