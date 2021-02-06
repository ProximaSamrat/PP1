#include <iostream>
#include <sstream>

using namespace std;

int main(){

  // Count number of words in given sentences.

  string s;
  getline(cin, s);

  stringstream ss(s);

  int cnt = 0;
  while(ss >> s)
    cnt++;

  cout << cnt << endl;


  return 0;
}