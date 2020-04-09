//
// Created by stipo on 09. 04. 2020..
//

#include "Player.hpp"
#include <iostream>

using namespace std;

const int IGNORE_CHARS = 256;


Player::Player() {
    this->score = 6;
}

Player::~Player() {

}

bool Player::WantToPlayAgain() {
    char answer = 'n';
    bool failure = false;

    do {
        cout << "Do you wanna play again? [y/n]" << endl;
        cin >> answer;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(IGNORE_CHARS, '\n');
            failure = true;
        } else {
            cin.ignore(IGNORE_CHARS, '\n');
            answer = tolower(answer);
        }
    } while (failure);

    return answer == 'y';
}

char Player::GetGuess() {
    char guess;
    bool failure = false;

    do {
        cout << "Please enter one character" << endl;
        cin >> guess;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(IGNORE_CHARS, '\n');
            cout << "Input error! Please try again!" << endl;
            failure = true;
        }
    } while (failure);

    return guess;
}

int Player::getScore() const {
    return score;
}

void Player::setScore(int score) {
    Player::score = score;
}


