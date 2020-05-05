//
// Created by stipo on 05. 05. 2020..
//

#include "ComputerPlayer.hpp"

std::string ComputerPlayer::PlayerName()
{
	return "Computer";
}

int ComputerPlayer::SetNumberOfFingers()
{
	return 	rand() % 10;
}

