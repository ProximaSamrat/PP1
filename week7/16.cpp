#include <iostream>
#include <sstream>
#include <bits/stdc++.h>

using namespace std;

int main(){

  stringstream ss;

  // hello 2.3 4
  ss << "hello" << " " << "2.3" << " " << "4";

  string s;
  float t;
  int n;
  ss >> s >> t >> n;

  cout << s << endl;
  cout << t * 2 << endl;
  cout << n * 2 << endl;

  return 0;
}