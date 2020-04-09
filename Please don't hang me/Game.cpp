//
// Created by stipo on 09. 04. 2020..
//
#include "Player.hpp"
#include "Game.hpp"
#include <iostream>
#include <string>

using namespace std;

const int IGNORE_CHARS = 256;

void Game::PlayGame() {
    string secretPhrase;
    Player p;
    int numberOfTries = p.getScore();

    char guess;
    int secretPhraseLength = GetSecretPhraseLength(secretPhrase);


    string hiddenPhrase = MakeHiddenPhrase(secretPhrase, secretPhraseLength);

    DrawBoard(numberOfTries, hiddenPhrase);

    do {

        guess = p.GetGuess();

        UpdateBoard(guess, secretPhrase, hiddenPhrase, secretPhraseLength, numberOfTries);

        DrawBoard(numberOfTries, hiddenPhrase);
    } while (!IsGameOver(numberOfTries, hiddenPhrase, secretPhraseLength));

    DisplayResult(numberOfTries, secretPhrase);
}

string Game::MakeHiddenPhrase(const string &secretPhrase, const int secretPhraseLength) {
    string hiddenPhrase(secretPhraseLength, ' ');

    for (int i = 0; i < secretPhraseLength; ++i) {
        if (secretPhrase[i] != ' ') {
            hiddenPhrase[i] = '-';
        } else {
            hiddenPhrase[i] = ' ';
        }
    }

    return hiddenPhrase;
}

int Game::GetSecretPhraseLength(string &secretPhrase) {
    int length = 0;
    bool failure = false;

    do {
        cout << "Please enter a secret phrase: " << endl;
        cin >> secretPhrase;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(IGNORE_CHARS, '\n');
            failure = true;
            cout << "Input error! Try again" << endl;
        } else {
            length = secretPhrase.length();

            if (length == 0) {
                cout << "Secret phrase need to be longer then 0 characters... Please try again" << endl;
                failure = true;
            }
        }
    } while (failure);

    return length;
}


void Game::UpdateBoard(char guess, const string &secretPhrase, string &hiddenPhrase, const int secretPhraseLength,
                 int &numberOfGuessesLeft) {
    bool found = false;
    for (int i = 0; i < secretPhraseLength; ++i) {
        if (tolower(secretPhrase[i]) == tolower(guess)) {
            hiddenPhrase[i] = secretPhrase[i];
            found = true;
        }
    }
    if (!found) {
        numberOfGuessesLeft--;
    }
}

void Game::DrawBoard(int numberOfGuessesLeft, const string &hiddenPhrase) {
    switch (numberOfGuessesLeft) {
        case 0: {
            cout << " +---+" << endl;
            cout << " |   |" << endl;
            cout << " |   O" << endl;
            cout << " |  /|\\" << endl;
            cout << " |  / \\" << endl;
            cout << "-+-" << endl << endl;
        }
            break;
        case 1: {
            cout << " +---+" << endl;
            cout << " |   |" << endl;
            cout << " |   O" << endl;
            cout << " |  /|\\" << endl;
            cout << " |  / " << endl;
            cout << "-+-" << endl << endl;
        }
            break;
        case 2: {
            cout << " +---+" << endl;
            cout << " |   |" << endl;
            cout << " |   O" << endl;
            cout << " |  /|\\" << endl;
            cout << " |  " << endl;
            cout << "-+-" << endl << endl;
        }
            break;
        case 3: {
            cout << " +---+" << endl;
            cout << " |   |" << endl;
            cout << " |   O" << endl;
            cout << " |  /|" << endl;
            cout << " |  " << endl;
            cout << "-+-" << endl << endl;
        }
            break;
        case 4: {
            cout << " +---+" << endl;
            cout << " |   |" << endl;
            cout << " |   O" << endl;
            cout << " |  /" << endl;
            cout << " |  " << endl;
            cout << "-+-" << endl << endl;
        }
            break;
        case 5: {
            cout << " +---+" << endl;
            cout << " |   |" << endl;
            cout << " |   O" << endl;
            cout << " | " << endl;
            cout << " | " << endl;
            cout << "-+- " << endl << endl;
        }
            break;
        case 6: {
            cout << " +---+" << endl;
            cout << " |   |" << endl;
            cout << " |  " << endl;
            cout << " |  " << endl;
            cout << " |  " << endl;
            cout << "-+-" << endl << endl;
        }
            break;
        default:
            break;
    }

    cout << hiddenPhrase << endl;
}

void Game::DisplayResult(int numberOfTries, const string &secretPhrase) {
    if (numberOfTries > 0) {
        cout << "You won! Number of guesses left is: " << numberOfTries << endl;
    } else {
        cout << "Sorry you lost! Wanted phrase was: " << secretPhrase << endl;
    }
}

bool Game::IsGameOver(int numberOfGuessLeft, const string &hiddenPhrase, const int secretPhraseLength) {
    bool hasDashes = false;

    for (int i = 0; i < secretPhraseLength; ++i) {
        if (hiddenPhrase[i] == '-') {
            hasDashes = true;
            break;
        }
    }

    return numberOfGuessLeft == 0 || !hasDashes;
}

