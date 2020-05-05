//
// Created by stipo on 28. 04. 2020..
//

#include "Game.hpp"
#include <iostream>
#include "HumanPlayer.hpp"
#include "ComputerPlayer.hpp"

void Game::PlayGame()
{
	HumanPlayer humanPlayer;
	std::string hName = humanPlayer.PlayerName();
	int hFingers = humanPlayer.SetNumberOfFingers();

	humanPlayer.SetFingers(hFingers);
	humanPlayer.SetName(hName);

	ComputerPlayer computerPlayer;
	std::string cName = computerPlayer.PlayerName();
	int cFingers = computerPlayer.SetNumberOfFingers();
	computerPlayer.SetFingers(cFingers);
	computerPlayer.SetName(cName);

	DisplayResult(humanPlayer, computerPlayer);
}

void Game::DisplayResult(HumanPlayer player1, ComputerPlayer player2)
{
	int total = player2.GetFingers() + player1.GetFingers();
	int decision = total % 2;

	bool evenOrOdd = true;

	for (int i = 0; i < rand() % 500; ++i)
	{
		evenOrOdd = !evenOrOdd;
	}

	std::cout << evenOrOdd << "\t";
	std::cout << player1.GetFingers() << "\t";
	std::cout << player2.GetFingers() << "\t";

	if (decision == 0 && !evenOrOdd || decision == 1 && evenOrOdd)
	{
		std::cout << "Computer won" << std::endl;
	}
	else
	{
		std::cout << player1.GetName() << " won!" << std::endl;
	}
}
