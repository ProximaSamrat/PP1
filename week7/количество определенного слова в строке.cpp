#include <iostream>

using namespace std;

int main(){

  string s = "hello kbtu world kbtukbtukbtu2";
  string t = "kbtu";

  size_t f = s.find(t);
  int cnt = 0;
  while(f != string::npos){
    cnt++;

    // cout << f << " ";

    f = s.find(t, f + t.size());
  }

  cout << cnt << endl;


  return 0;
} 