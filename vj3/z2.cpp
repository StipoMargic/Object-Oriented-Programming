#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string reverseString(string sentence)
{
  reverse(sentence.begin(), sentence.end() - 1);

  sentence[0] = toupper(sentence[0]);
  sentence[sentence.length() - 2] = tolower(sentence[sentence.length() - 2]);

  return sentence;
}
int main()
{
  cout << "Enter string: ";
  string sentence = "";

  getline(cin, sentence);

  string reversed = reverseString(sentence);

  cout << reversed;

  return 0;
}