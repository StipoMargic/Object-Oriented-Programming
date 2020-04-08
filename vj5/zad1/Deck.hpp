//
// Created by stipo on 06. 04. 2020..
//

#ifndef DECK_HPP
#define DECK_HPP

#include "Card.hpp"
#include <vector>

class Deck {
    int curCard = 0;

    Card getCard();

    vector <Card> cards;

public:
    Deck();
    virtual ~Deck();

    void shuffle();
    vector <Card> getCards();
    void printDeck();

    int getCurCard() const;

    void setCurCard(int curCard);

    void setCards(const vector <Card> &cards);

};



#endif //DECK_HPP
