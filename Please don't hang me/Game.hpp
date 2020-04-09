//
// Created by stipo on 09. 04. 2020..
//

#ifndef HANGMAN_GAME_HPP
#define HANGMAN_GAME_HPP

#include <string>

class Game {
public:
    void PlayGame();

    int GetSecretPhraseLength(std::string &secretPhrase);

    bool IsGameOver(int numberOfGuessLeft, const std::string &hiddenPhrase, int secretPhraseLength);

    std::string MakeHiddenPhrase(const std::string &secretPhrase, int secretPhraseLength);

    void DrawBoard(int numberOfGuessesLeft, const std::string &hiddenPhrase);

    void
    UpdateBoard(char guess, const std::string &secretPhrase, std::string &hiddenPhrase, int secretPhraseLength,
                int &numberOfGuessesLeft);

    void DisplayResult(int numberOfTries, const std::string &secretPhrase);
};


#endif //HANGMAN_GAME_HPP
