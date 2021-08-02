# DeepLight
## DeepLight game engine

![Azure DevOps builds](https://img.shields.io/azure-devops/build/DragonheartLXDev/00578ff1-61c5-46bf-88d3-d86fe37636fe/18?logo=Azure%20Devops&logoColor=blue&style=flat-square)
![GitHub repo size](https://img.shields.io/github/repo-size/HeartLightDev/DeepLight?style=flat-square)
![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/HeartLightDev/DeepLight?style=flat-square)
![GitHub](https://img.shields.io/github/license/HeartLightDev/DeepLight?color=blue&style=flat-square)


## Compile
- Clone repo `git clone https://github.com/HeartLightDev/DeepLight.git`
- Install depends `vcpkg install ...`
- Open `DeepLight.sln` and set `SampleApplication` as `Startup Project`
- __Pay attention to your configuration, build the same dependences configuration `Debug` or `Release` and platform.__

Dependences:
- spdlog
- jsoncpp
- libcurl
- glad
- GLFW
- glm