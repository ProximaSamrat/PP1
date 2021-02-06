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
 
  */
  string s;
  cin >> s;

  for(int i = 0; i < s.size() / 2; i++){
    if(s[i] != s[s.size() - 1 - i]){
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";

  return 0;
}