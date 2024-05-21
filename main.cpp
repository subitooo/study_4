#include <iostream>
#include <SFML/Graphics.hpp>

#include "Game.hpp"
#include "func.hpp"

int main()
{
    srand(time(NULL));

    int n;
    mt::userInput(n);
    mt::Game myGame(1600, 900, "Game!!!");
    myGame.setup(n);
    myGame.lifeCycle();
    myGame.end();
    return 0;
}