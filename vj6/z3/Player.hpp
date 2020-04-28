//
// Created by stipo on 28. 04. 2020..
//

#ifndef Z2__PLAYER_HPP_
#define Z2__PLAYER_HPP_
#include <string>

class Player
{
 public:
	std::string mPlayerName;
	std::string mDecision;
	unsigned int mNumberOfFingers;

	Player SetUpComputer() const;
	Player SetUpPlayer() const;
	static bool WantToPlayAgain();

};

#endif //Z2__PLAYER_HPP_
