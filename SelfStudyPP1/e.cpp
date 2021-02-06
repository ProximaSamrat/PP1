#include <bits/stdc++.h>

using namespace std;

float res;

float side(int a, int b){
  
 res = sqrt(pow(a, 2) + pow(b, 2));

return res;
}

int main(){
float a, b;

cin >> a >> b;

//cout << side(a, b);
printf ("%.3f", side(a, b));

  return 0;
}