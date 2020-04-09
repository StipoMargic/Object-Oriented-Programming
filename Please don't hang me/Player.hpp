//
// Created by stipo on 09. 04. 2020..
//

#ifndef HANGMAN_PLAYER_HPP
#define HANGMAN_PLAYER_HPP


class Player {
    int score;

public:

    static bool WantToPlayAgain();

    static char GetGuess();

    int getScore() const;

    void setScore(int score);

    Player();
    virtual ~Player();
};


#endif //HANGMAN_PLAYER_HPP
