//
// Created by stipo on 28. 04. 2020..
//

#ifndef Z2__PLAYER_HPP_
#define Z2__PLAYER_HPP_
#include <string>

class Player
{
 public:
	virtual std::string PlayerName() = 0;
	virtual int SetNumberOfFingers() = 0;
	static bool WantToPlayAgain();
};

#endif //Z2__PLAYER_HPP_
