//
// Created by stipo on 28. 04. 2020..
//

#include "Player.hpp"
#include <iostream>
using namespace std;

Player Player::SetUpComputer() const
{
	srand((unsigned)time(NULL));
	Player player1;

	player1.mPlayerName = "Computer";
	player1.mNumberOfFingers = rand() % 10;
	int decision = rand() % 2;
	decision == 0 ? player1.mDecision = "Even" : player1.mDecision = "Odd";

	return player1;
}

Player Player::SetUpPlayer() const
{
	Player player2;
	cout << "Please enter your name: " << endl;
	cin >> player2.mPlayerName;
	bool failure = false;

	do
	{
		cout << "Please enter number between 0 and 10: " << endl;
		cin >> player2.mNumberOfFingers;

		if (cin.fail() || player2.mNumberOfFingers > 10)
		{
			cin.clear();
			cin.ignore(256, '\n');
			failure = true;
		}
		else
		{
			failure = false;
		}
	} while (failure);

	return player2;
}

bool Player::WantToPlayAgain() {
	char answer = 'n';
	bool failure = false;

	do {
		cout << "Do you wanna play again? [y/n]" << endl;
		cin >> answer;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(256, '\n');
			failure = true;
		} else {
			cin.ignore(256, '\n');
			answer = tolower(answer);
		}
	} while (failure);

	return answer == 'y';
}

