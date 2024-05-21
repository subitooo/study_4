#pragma once
#include <SFML/Graphics.hpp>

namespace mt {
	class Circle {
	private:
		float x, y, r;
		sf::CircleShape shape;
	public:
		Circle() = default;
		Circle(float x, float y, float r);

		void setup(float x, float y, float r);

		sf::CircleShape getShape();
	};
}