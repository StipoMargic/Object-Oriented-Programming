#include <iostream>
#include <vector>
using namespace std; 


int numbInList(vector<int> &numbers){

  vector<int> newVector;
  int start, end;

  for (int i = 0; i < numbers.size(); i++)
  {
    if (numbers[i] % 2 == 0)
    {
      newVector.push_back(0);
      newVector.push_back(numbers[i]);
    }else
    {
    newVector.push_back(numbers[i]);
    newVector.push_back(1);
    }
  }

  for (int i = 0; i < newVector.size(); i++)
  {
    if (newVector[i] == 0)
    {
      start = i;
      break;
    }    
  }

    for (int i = newVector.size(); i > 0 ; i--)
  {
    if (newVector[i] == 1)
    {
      end = i;
      break;
    }    
  }
  int res = end - start;

  return res;
}

int main()
{
  vector<int> numbers{1,5,2,6,30,19,4,22};

  int result = numbInList(numbers);

  cout << result;
}