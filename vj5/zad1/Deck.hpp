//
// Created by stipo on 06. 04. 2020..
//

#ifndef DECK_HPP
#define DECK_HPP

#include "Card.hpp"
#include <vector>

class Deck {
  int mCurCard = 0;
  Card getCard();
  std::vector<Card> mCards;

 public:
  Deck();

  ~Deck() { std::cout << "Deck destructor" << std::endl; }

  void shuffle();
  std::vector<Card> getCards();
  void printDeck();

  inline int getCurCard() { return mCurCard; }

  inline void setCurCard(int curCard) { mCurCard = curCard; }

  inline void setCards(const std::vector<Card> &cards) { mCards = cards; }

};

#endif //DECK_HPP
