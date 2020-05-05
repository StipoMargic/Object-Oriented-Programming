//
// Created by stipo on 28. 04. 2020..
//

#include "Player.hpp"
#include <iostream>
using namespace std;


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

