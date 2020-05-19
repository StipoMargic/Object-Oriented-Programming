//
// Created by stipo on 28. 04. 2020..
//

#ifndef Z2__GAME_HPP_
#define Z2__GAME_HPP_

#include "HumanPlayer.hpp"
#include "ComputerPlayer.hpp"
#include "Player.hpp"

class Game
{
 public:
	void PlayGame();
	void DisplayResult(HumanPlayer player1, ComputerPlayer player2);
};

#endif //Z2__GAME_HPP_
