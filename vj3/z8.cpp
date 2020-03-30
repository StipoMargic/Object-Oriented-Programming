#include <iostream>
#include <vector>

using namespace std;

vector<int> bitUnStuffing(vector<int> bitVector)
{
  vector<int> newVector;
  int track = 0;

  for (int i = 0; i < bitVector.size(); i++)
  {
    if (bitVector[i] == 1 && bitVector[i + 1] == 1)
    {
      track++;
      newVector.push_back(1);
    }

    if (track > 4 && bitVector[i + i] == 0)
    {
      i += 2;
      track = 0;
    }
  }

  return newVector;
}

int main()
{

  vector<int> myVec;
  int x = 0, y = 1;
  int numb = 0;

  while (numb == 0 || numb == 1)
  {
    cin >> numb;
    myVec.push_back(numb);
  }

  myVec.pop_back();

  vector<int> newVec = bitUnStuffing(myVec);

  for (int i = 0; i < newVec.size(); i++)
  {
    cout << newVec[i];
  }
}