#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

string commonSubStrwww(string &first, string &second)
{
  int fLen = first.length();
  int sLen = second.length();
  int subStr[fLen + 1][sLen + 1];

  int len = 0;

  int row, col;

  for (int i = 0; i <= fLen; i++)
  {
    for (int j = 0; j <= sLen; j++)
    {
      if (i == 0 || j == 0)
        subStr[i][j] = 0;

      else if (first[i - 1] == second[j - 1])
      {
        subStr[i][j] = subStr[i - 1][j - 1] + 1;
        if (len < subStr[i][j])
        {
          len = subStr[i][j];
          row = i;
          col = j;
        }
      }
      else
        subStr[i][j] = 0;
    }
  }

  if (len == 0)
  {
    cout << "No match found";
    return "";
  }

  string result(len, ' ');

  while (subStr[row][col] != 0)
  {
    result[--len] = first[row - 1];
    row--;
    col--;
  }
  return result;
}

int main()
{
  cout << "Enter first string: ";
  string first = "";
  getline(cin, first);

  cout << "Enter second string: ";
  string second = "";
  getline(cin, second);

  string res = commonSubStrwww(first, second);

  cout << res;
  return 0;
}