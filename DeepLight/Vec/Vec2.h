#pragma once

namespace DeepLight 
{
	template <typename T>
	class Vec2
	{
	public:
		Vec2();
		~Vec2();

		Vec2(T x, T y);
		T x;
		T y;

		Vec2 operator+(Vec2);
		Vec2 operator-(Vec2);
	private:

	};

}
