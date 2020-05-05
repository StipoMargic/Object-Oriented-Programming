//
// Created by stipo on 05. 05. 2020..
//

#ifndef Z2__HUMANPLAYER_HPP_
#define Z2__HUMANPLAYER_HPP_

#include "Player.hpp"

class HumanPlayer : public Player
{
 public:
	std::string PlayerName() override;
	int SetNumberOfFingers() override;

	inline void SetName(std::string& name)
	{
		mName = name;
	}

	inline void SetFingers(int fingers)
	{
		mFingers = fingers;
	}

	inline std::string GetName() const
	{
		return mName;
	}

	inline int GetFingers() const
	{
		return mFingers;
	}

 private:
	std::string mName;
	int mFingers;
};

#endif //Z2__HUMANPLAYER_HPP_
