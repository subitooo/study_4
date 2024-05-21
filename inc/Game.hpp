#pragma once
#include <string>
#include <SFML/Graphics.hpp>

#include "Circle.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include "Line.hpp"


namespace mt {
	class Game {
	private:
		int width, height;
		std::string title;
		sf::RenderWindow window;

		mt::Circle* circleArr;
		mt::Triangle* triangleArr;
		mt::Rectangle* rectangleArr;
		mt::Line* lineArr;

		int cnt;
	public:
		Game(int width, int height, std::string title);
		void setup(int n);
		void lifeCycle();
		void end();
	};
}