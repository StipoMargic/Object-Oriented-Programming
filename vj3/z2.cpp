#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

string reverseString(string sentence)
{
  vector<string> sVector;
  string newString;
  int track = 0;

  for (int i = 0; i < sentence.length() - 1; i++)
  {
    if (sentence[i] != ' ')
    {
      newString = newString + sentence[i];
    }
    else
    {
      sVector.push_back(newString);
      newString = "";
    }
  }
  sVector.push_back(newString);

  reverse(sVector.begin(), sVector.end());

  string revStr;
  for (auto i : sVector)
  {
    revStr += i;
    revStr += " ";
  }
  int len = revStr.length();
  revStr[0] = toupper(revStr[0]);
  revStr[len - 2] = tolower(revStr[len - 2]);
  revStr[len - 1] = '.';

  return revStr;
}

int main()
{
  // cout << "Enter string: ";
  // string sentence = "";

  // getline(cin, sentence);

  string reversed = reverseString("I love you.");

  cout << reversed;

  return 0;
}