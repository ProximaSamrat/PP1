#include <bits/stdc++.h>

using namespace std;

int main(){

int a, b, c = 0;
cin >> a >> b;

do
{
    if (a % 2 == 0) {a++;}
    c += a; 
a++;  
} while (a < b);

cout << c << endl;
/*
while (a < 10)
{
    cout << a << endl;
    a++;
}
*/


return 0;}
