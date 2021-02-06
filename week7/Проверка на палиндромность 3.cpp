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
  
  1)
      l       r
      a b c b a
  2)
        l   r
      a b c b a
  */
  string s;
  cin >> s;

  int left = 0;
  int right = s.size() - 1;

  while(left <= right){
    if(s[left] != s[right]){
      cout << "NO";
      return 0;
    }
    left++;
    right--;
  }

  cout << "YES";

  return 0;
}