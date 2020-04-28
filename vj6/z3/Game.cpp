//
// Created by stipo on 28. 04. 2020..
//

#include "Game.hpp"
#include <iostream>

void Game::PlayGame()
{
	Player p1, p2;

	p1 = p1.SetUpComputer();
	p2 = p2.SetUpPlayer();

	DisplayResult(p1, p2);
}

void Game::DisplayResult(Player player1, Player player2)
{
	int total = player2.mNumberOfFingers + player1.mNumberOfFingers;
	int decision = total % 2;

	if (decision == 0 && player1.mDecision == "Even" || decision == 1 && player1.mDecision == "Odd")
	{
		std::cout << "Computer won" << std::endl;
	}
	else
	{
		std::cout << player2.mPlayerName << " won!" << std::endl;
	}
}
