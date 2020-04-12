//
// Created by stipo on 06. 04. 2020..
//

#include <iostream>
#include "Deck.hpp"

using namespace std;

Deck::Deck() {
  cout << "Deck Constructor" << endl;
  int i = 0, j = 0, k = 1;
  char type[]{'B', 'K', 'S', 'D'};
  for (i = 0; i < 4; i++) {
    for (j = 1; j <= 10; j++) {
      k = j;
      if (j > 7)
        k += 3;
      mCards.push_back(Card(k, type[i]));
    }
  }
}

Card Deck::getCard() {
  return mCards[mCurCard++];
}

vector<Card> Deck::getCards() {
  vector<Card> hand;

  for (int i = 0; i < 10; i++) {
    hand.push_back(getCard());
  }

  return hand;
}

void Deck::shuffle() {
  int n = mCards.size();

  for (int i = 0; i < n - 1; i++) {
    int j = i + rand() % (n - i);
    swap(mCards[i], mCards[j]);
  }
}

void Deck::printDeck() {
  for (int i = 0; i < 40; i++) {
    cout << mCards[i].getNumb() << "\t";
    cout << mCards[i].getType();
    cout << endl;
  }
}
