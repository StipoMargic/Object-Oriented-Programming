#include <bits/stdc++.h>
#include <vector>
#include <iostream>

using namespace std;

void findNumbers(vector<int> myVector)
{
  vector<int> newVector;
  if (myVector.size() % 2)
    newVector.insert(newVector.begin(), myVector[(myVector.size() / 2)]);

  for (int i = 0; i < myVector.size() / 2; i++)
  {
    int sum = myVector[i] + myVector[(myVector.size() - 1) - i];
    newVector.insert(newVector.begin() + 1, sum);
  }

  cout << *min_element(newVector.begin(), newVector.end()) << endl;
  cout << *max_element(newVector.begin(), newVector.end()) << endl;
}

int main()
{

  vector<int> myVector = {2, 1, 0, 20, 4, 5, 6};

  findNumbers(myVector);

  return 0;
}