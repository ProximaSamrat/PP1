#include <bits/stdc++.h>

using namespace std;

int a;

int func(int a){
cout << a << endl;
if (a == 0) { return 0; }

if (a == 1) { return 1; }


    return a * func(a - 1);
}



int main(){ 
 

cin >> a;

cout << func(a) << endl;

return 0;
}