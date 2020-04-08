//
// Created by stipo on 06. 04. 2020..
//

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Card.hpp"
#include <string>
#include <vector>


using namespace std;

class Player {
public:
    string name;
    int points;
    vector<Card> cards;

    virtual ~Player();

    Player(string &name, int points);
    void akuza(vector<Card>);
    void printHand();

    const string &getName() const;

    void setName(const string &name);

    int getPoints() const;

    void setPoints(int points);

    const vector<Card> &getCards() const;

    void setCards(const vector<Card> &cards);
};



#endif //PLAYER_HPP
