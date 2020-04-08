//
// Created by stipo on 06. 04. 2020..
//

#include <iostream>
#include "Deck.hpp"
int Deck::getCurCard() const {
    return curCard;
}

void Deck::setCurCard(int curCard) {
    Deck::curCard = curCard;
}

void Deck::setCards(const vector <Card> &cards) {
    Deck::cards = cards;
}
Deck::Deck() {
    cout << "Deck Constructor" << endl;
    int i = 0, j = 0, k = 1;
    char type[]{'B', 'K', 'S', 'D'};
    for (i = 0; i < 4; i++) {
        for (j = 1; j <= 10; j++) {
            k = j;
            if (j > 7)
                k += 3;
            cards.push_back(Card(k, type[i]));
        }
    }
}

Deck::~Deck() {
    cout << "Deck destructor" << endl;
}

Card Deck::getCard() {
    return cards[curCard++];
}

vector<Card> Deck::getCards() {
    vector<Card> hand;

    for (int i = 0; i < 10; i++) {
        hand.push_back(getCard());
    }

    return hand;
}

void Deck::shuffle() {
    int n = cards.size();

    for (int i = 0; i < n - 1; i++) {
        int j = i + rand() % (n - i);
        swap(cards[i], cards[j]);
    }
}

void Deck::printDeck() {
    for (int i = 0; i < 40; i++) {
        cout << cards[i].numb << "\t";
        cout << cards[i].type;
        cout << endl;
    }
}
