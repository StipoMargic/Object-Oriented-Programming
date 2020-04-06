//
// Created by stipo on 06. 04. 2020..
//

#include <iostream>
#include "Card.hpp"

Card::Card(int numb, char type) {
    this->numb = numb;
    this->type = type;

    cout << "Card Constructor" << endl;
}

Card::~Card() {
    cout << "Card Destructor" << endl;
}
