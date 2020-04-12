//
// Created by stipo on 06. 04. 2020..
//

#include "Headers.hpp"

void result(int numberOfPlayers) {
    Deck newDeck;

    while (numberOfPlayers != 0)
    {
        string name;
        cout << "Enter name: " << endl;
        getline(cin, name);
        newDeck.shuffle();

        auto *Gamer = new Player(name, 0);

        Gamer->setCards(newDeck.getCards());
        Gamer->akuza(Gamer->getCards());
        cout << Gamer->getName() << " have: " << Gamer->getPoints() << "points." << endl;

        Gamer->printHand();

        delete Gamer;

        numberOfPlayers--;
    }
}
