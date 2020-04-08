//
// Created by stipo on 06. 04. 2020..
//

#include <iostream>
#include "Card.hpp"

int Card::getNumb() const {
    return numb;
}

void Card::setNumb(int numb) {
    Card::numb = numb;
}

char Card::getType() const {
    return type;
}

void Card::setType(char type) {
    Card::type = type;
}

Card::Card(int numb, char type) {
    this->numb = numb;
    this->type = type;

    cout << "Card Constructor" << endl;
}

Card::~Card() {
    cout << "Card Destructor" << endl;
}
