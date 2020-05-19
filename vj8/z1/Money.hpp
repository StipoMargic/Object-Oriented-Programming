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

	Money(double kn, double lp) : mKn(kn), mLp(lp)
	{
	}

	~Money()
	{
	}

	void SetKn(const double kn)
	{
		mKn = kn;
	}

	void SetLp(const double lp)
	{
		mLp = lp;
	}

	double GetKn() const
	{
		return mKn;
	};

	double GetLp() const
	{
		return mLp;
	}

	Money operator+=(const Money& article);
	Money operator-=(const Money& article);
	Money operator-(const Money& article) const;
	Money operator+(const Money& article) const;

	operator double() const;

	friend std::ostream& operator<<(std::ostream& consoleOut, const Money& money);
 private:
	double GetPrice() const;
	double mKn;
	double mLp;
};

#endif //VJ7__MONEY_HPP_
