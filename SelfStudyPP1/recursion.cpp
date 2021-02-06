#include <bits/stdc++.h>

using namespace std;

int a;

int func(int b){

if (b == a+1) { return 0; }

cout << b << endl;

    return func(b+1);
}



int main(){ 
 

cin >> a;

func(1);

return 0;
}