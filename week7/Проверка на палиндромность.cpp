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

  int cnt = 0;
  for(int i = 0; i < s.size() / 2; i++){
    if(s[i] == s[s.size() - 1 - i])
      cnt++;
  }

  if(cnt == s.size() / 2)
    cout << "YES";
  else 
    cout << "NO";



  return 0;
}