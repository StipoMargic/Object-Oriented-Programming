#include "Headers.h"

Player::Player(string name, int points){
  this->name = name;
  this->points = points;
}

void Player::akuza(vector<Card> hand)
{
  int numbOfPoints = 0, x = 4, y = 0, k = 0;
  char type[]{'B', 'K', 'S', 'D'};
  int arr[]{1, 2, 3};
  int array[3][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

  while (!x)
  {
    char temp = type[y];
    for (int i = 0; i < 10; i++)
    {
      if (hand[i].numb == 1 && hand[i].type == temp)
      {
        array[0][k] = 1;
      }
      else if (hand[i].numb == 2 && hand[i].type == temp)
      {
        array[1][k] = 1;
      }
      else if (hand[i].numb == 3 && hand[i].type == temp)
      {
        array[2][k] = 1;
      }
    }
    k++;
    y++;

    x--;
  }

  for (int i = 0; i < 4; i++)
  {
    if (array[0][i] == 1 && array[1][i] == 1 && array[2][i] == 1)
    {
      numbOfPoints += 3;
    }
  }
  int counter = 0;
  
  for (int i = 0; i < 3; i++)
  {
    counter = 0;
    if (array[i][0] == 1)
      counter++;
    if (array[i][1] == 1)
      counter++;
    if (array[i][2] == 1)
      counter++;
    if (array[i][3] == 1)
      counter++;
    if (counter == 3)
    {
      if (counter == 4)
      {
        numbOfPoints += 4;
      }
      else
      {
        numbOfPoints += 3;
      }
    }
  }
  points = numbOfPoints;
}

void Player::printHand()
{
  for (int i = 0; i < 10; i++)
  {
    cout << cards[i].numb << "\t";
    cout << cards[i].type;
    cout << endl;
  }
}
