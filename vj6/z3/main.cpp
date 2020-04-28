#include <iostream>
#include "Player.hpp"
#include "Game.hpp"
using namespace std;

int main()
{
	Game g;

	do
	{
		g.PlayGame();
	} while (Player::WantToPlayAgain());

	return 0;
}