#include "Vec2.h"

template<typename T>
inline DeepLight::Vec2<T>::Vec2()
{

}

template<typename T>
DeepLight::Vec2<T>::~Vec2()
{
}

template<typename T>
DeepLight::Vec2<T>::Vec2(T x, T y):x(x),y(y)
{
}

template<typename T>
DeepLight::Vec2<T> DeepLight::Vec2<T>::operator+(Vec2)
{
	return Vec2();
}

template<typename T>
DeepLight::Vec2<T> DeepLight::Vec2<T>::operator-(Vec2)
{
	return Vec2();
}


