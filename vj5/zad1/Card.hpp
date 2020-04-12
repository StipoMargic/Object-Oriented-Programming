//
// Created by stipo on 06. 04. 2020..
//

#ifndef CARD_HPP
#define CARD_HPP

#include <iostream>

class Card {
 public:
  Card() : Card(1, 'B') {}

  Card(int numb, char type) : mNumb(numb), mType(type) {}

  ~Card() { std::cout << "Destructor called" << std::endl; }

  inline int getNumb() { return mNumb; }

  inline void setNumb(int numb) { mNumb = numb; }

  inline char getType() { return mType; }

  inline void setType(char type) { mType = type; }

 private:
  int mNumb;
  char mType;
};

#endif //CARD_HPP
