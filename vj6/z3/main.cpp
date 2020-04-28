#include <iostream>
#include "Player.hpp"
#include "Game.hpp"
using namespace std;

int main()
{
	Game g;

	g.PlayGame();

	while (Player::WantToPlayAgain())
	{
		g.PlayGame();
	}
	return 0;
}