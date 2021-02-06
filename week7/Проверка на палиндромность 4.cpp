#include <iostream>

using namespace std;

int main(){
  /*
  Palindrom or not?
  YES:
    abcba
    ABBA
    abccba
  NO:
    abb
    bbccd
  Solution:
  s = abcba
  t = abcba
  */
  string s;
  cin >> s;

  string t = s;

  reverse(s.begin(), s.end());

  if(s == t)
    cout << "YES";
  else 
    cout << "NO";

  return 0;
}