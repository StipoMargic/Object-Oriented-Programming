#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isVowel(char ch) { return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'); }

string pigLatin(string orgString)
{
  string res;
  string newStr;
  vector<string> newVec;
  for (int i = 0; i < orgString.length(); i++)
  {
    if (orgString[i] != ' ')
    {
      newStr += orgString[i];
    }
    else
    {
      newVec.push_back(newStr);
      newStr.clear();
    }
  }
  newVec.push_back(newStr);

  for (int i = 0; i < newVec.size(); i++)
  {
    if (isVowel(tolower(newVec[i][0])))
    {
      newVec[i].push_back('h');
      newVec[i].push_back('a');
      newVec[i].push_back('y');
    }
    else
    {
      newVec[i].push_back(newVec[i][0]);
      newVec[i].push_back('a');
      newVec[i].push_back('y');
      newVec[i].erase(0, 1);
    }
  }
  for (int i = 0; i < newVec.size(); i++)
  {
    res += newVec[i];
    res += ' ';
  }

  return res;
}

int main()
{
  vector<string> strVec;
  int num = 0;
  string str;
  int randomNum;

  cout << "Enter sentences till you type q" << endl;

  while (str != "q")
  {
    getline(cin, str);
    strVec.push_back(str);
    num++;
  }

  cout << "Enter number between 1 and " << num - 1 << endl;
  cin >> randomNum;
  string realString = strVec[randomNum - 1];

  string res = pigLatin(realString);
  cout << res;

  return 0;
}