#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Player
{
public:
  string name;
  int points = 0;

  Player(string, int);
  vector<Card> cards;
  void akuza(vector<Card>);
  void printHand();
};

#endif