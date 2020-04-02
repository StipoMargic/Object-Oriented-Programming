#include "Headers.h"
#include <iostream>

void result(int numberOfPlayers)
{
  Deck newDeck;
  if (numberOfPlayers == 2)
  {
    for (int i = 0; i < numberOfPlayers; i++)
    {
      string name;
      cout << "Enter name: " << endl;
      getline(cin, name);
      newDeck.shuffle();

      Player *Gamer = new Player(name, 0);

      Gamer->cards = newDeck.getCards();
      Gamer->akuza(Gamer->cards);
      cout << Gamer->name << " have: " << Gamer->points << "points." << endl;

      Gamer->printHand();

      delete Gamer;
    }
  }
  if (numberOfPlayers == 4)
  {
    for (int i = 0; i < numberOfPlayers; i++)
    {
      cout << "Enter name: " << endl;
      string name;
      getline(cin, name);
      newDeck.shuffle();

      Player *Gamer = new Player(name, 0);

      Gamer->cards = newDeck.getCards();
      Gamer->akuza(Gamer->cards);
      cout << Gamer->name << " have: " << Gamer->points << "points." << endl;

      delete Gamer;
    }
  }
}
