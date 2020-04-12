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

  Player(string &name, int points) : mName(name), mPoints(points) {}

  ~Player();
  void akuza(vector<Card>);
  void printHand();

  inline string &getName() { return mName;}

  inline void setName(const string &name) { mName = name; };

  inline int getPoints() { return mPoints; }

  inline void setPoints(int points) { mPoints = points; }

  inline vector<Card> &getCards() { return mCards; }

  inline void setCards(const vector<Card> &cards) { mCards = cards; }

 private:
  string mName;
  int mPoints;
  vector<Card> mCards;
};

#endif //PLAYER_HPP
