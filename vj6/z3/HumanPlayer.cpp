//
// Created by stipo on 05. 05. 2020..
//

#include "HumanPlayer.hpp"
#include <iostream>

std::string HumanPlayer::PlayerName()
{
	std::string name = "";
	std::cout << "Please enter your name: " << std::endl;
	std::cin >> name;

	return name;

}

int HumanPlayer::SetNumberOfFingers()
{
	bool failure = false;
	int fingers;
	do
	{
		std::cout << "Please enter number between 0 and 10: " << std::endl;
		std::cin >> fingers;

		if (std::cin.fail() || fingers > 10)
		{
			std::cin.clear();
			std::cin.ignore(256, '\n');
			failure = true;
		}
		else
		{
			failure = false;
		}
	} while (failure);

	return fingers;
}
