# DeepLight
## DeepLight game engine

![GitHub repo size](https://img.shields.io/github/repo-size/HeartLightDev/DeepLight?style=flat-square)
![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/HeartLightDev/DeepLight?style=flat-square)
![GitHub](https://img.shields.io/github/license/HeartLightDev/DeepLight?color=blue&style=flat-square)

__DeepLight engine is base on ![OpenGL](https://img.shields.io/badge/OpenGL-%23323232?style=flat-square&logo=OpenGL)__

## Compile
- __Clone repo `git clone https://github.com/HeartLightDev/DeepLight.git`__
- __Compile dependences with CMake__
  - __In dependences' folder__
  - __`mkdir build && cd ./build`__
  - __`cmake .. -A win32`__
  - __Use `Visual Studio 2019` compile with `.sln`, library will build to `lib` folder__
- __Open `DeepLight.sln` and set `Application`as `Startup Project`__
- __Pay attention to your configuration, build the same dependences configuration `Debug` or `Release`__

__Dependences:__
- __spdlog__
- __jsoncpp__
- __libcurl__
- __glad__
- __GLFW__
- __glm__