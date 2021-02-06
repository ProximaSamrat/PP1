#include <iostream>
using namespace std;
int main(){
 
 int a, b, c, d;
 
 cin >> a >> b >> c >> d;
 
 cout << (a/8%2*1) << (b/4%2*2) << (c/2%2*4) << (d/1%2*8);
 
 return 0;

}