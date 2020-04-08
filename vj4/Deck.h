#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <vector>
#include <iostream>

using namespace std;

class Deck
{
  int curCard = 0;  
  Card getCard();
  vector<Card> cards;

public:
  Deck();
  void shuffle();
  vector<Card> getCards();
  void printDeck();
};

#endif