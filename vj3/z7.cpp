#include <iostream>
#include <vector>

using namespace std;

vector<int> bitStuffing(vector<int> bitVector){
  vector<int> newVector;
  int track = 0;

  for (int i = 0; i < bitVector.size(); i++)
  {
    if(track == 4)
      newVector.push_back(0);

    if (bitVector[i] == 1 && bitVector[i + 1] == 1) track++;
    if (track < 0 && bitVector[i] == 0) track = 0;
    
    newVector.push_back(bitVector[i]);
  }

  return newVector;  
}


int main(){

  vector<int> myVec;
  int x = 0, y = 1;
  int numb = 0;

  while (numb == 0  || numb == 1)
  {
    cin >> numb;
    myVec.push_back(numb);
  }

  myVec.pop_back();

  vector<int> newVec = bitStuffing(myVec);

  for (int i = 0; i < newVec.size(); i++)
  {
    cout << newVec[i];
  }
  

}