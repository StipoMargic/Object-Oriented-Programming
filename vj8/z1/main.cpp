#include <iostream>
#include "Money.hpp"

using namespace std;

int main()
{
	Money soup(11, 30), steak(15, 50), salad(10, 0), beer(15, 0), babic(16, 40);
// gost je konzumirao:
	Money bill = soup + steak + salad + beer;

	bill -= beer;
	bill += babic;

	cout << double(soup);

	cout << bill << endl;
}
