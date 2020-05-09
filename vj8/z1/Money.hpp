//
// Created by stipo on 09. 05. 2020..
//

#ifndef VJ7__MONEY_HPP_
#define VJ7__MONEY_HPP_
#include <iostream>

class Money
{
 public:
	Money() : Money(0, 0)
	{

	}

	Money(int kn, int lp) : mKn(kn), mLp(lp)
	{
	}

	~Money()
	{
	}

	void SetKn(const int kn)
	{
		mKn = kn;
	}

	void SetLp(const int lp)
	{
		mLp = lp;
	}

	int GetKn() const
	{
		return mKn;
	};

	int GetLp() const
	{
		return mLp;
	}

	Money operator+=(const Money& article);
	Money operator-=(const Money& article);
	Money operator-(const Money& article) const;
	Money operator+(const Money& article) const;

	friend std::ostream& operator<<(std::ostream& consoleOut, const Money& money);
 private:
	int mKn;
	int mLp;
};

#endif //VJ7__MONEY_HPP_
