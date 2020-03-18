#include <string>
#include <iostream>

using namespace std;

void eraseSubstr(string &s, string &pattern)
{
  for (string::size_type i = s.find(pattern);
       i != string::npos;
       i = s.find(pattern))
    s.erase(i, pattern.length());
}

int main()
{
  cout << "Enter string: ";
  string str = "";
  getline(cin, str);

  cout << "Enter pattern: ";
  string pattern = "";

  getline(cin, pattern);

  eraseSubstr(str, pattern);
  cout << str << endl;
}