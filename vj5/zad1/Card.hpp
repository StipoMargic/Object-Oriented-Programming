//
// Created by stipo on 06. 04. 2020..
//

#ifndef CARD_HPP
#define CARD_HPP

using namespace std;

class Card
{
public:
    int numb;
    char type;

    Card(int numb, char type);

    virtual ~Card();
};

#endif //CARD_HPP
