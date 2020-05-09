//
// Created by stipo on 09. 05. 2020..
//

#include "Money.hpp"

Money Money::operator+=(const Money& article)
{
	*this = *this + article;
	return *this;
}

Money Money::operator-=(const Money& article)
{
	*this = *this - article;
	return *this;
}

Money Money::operator+(const Money& article) const
{
	Money newBill(mKn + article.mKn, mLp + article.mLp);

	if (newBill.mLp > 99)
	{
		newBill.mKn++;
		newBill.mLp = newBill.mLp - 100;
	}

	return newBill;
}

Money Money::operator-(const Money& article) const
{
	Money newBill(mKn - article.mKn, mLp - article.mLp);

	if (newBill.mLp < 0)
	{
		newBill.mKn--;
		newBill.mLp = newBill.mLp + 100;
	}

	return newBill;
}

std::ostream& operator<<(std::ostream& consoleOut, const Money& money)
{
	std::cout << "Bill is " << money.mKn << " kuna and " << money.mLp << " lipa." << std::endl;
	return consoleOut;
}