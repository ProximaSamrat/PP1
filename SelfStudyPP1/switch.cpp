#include <bits/stdc++.h>

using namespace std;

int main(){
int int1, int2, ints = 0;
char sign;
cin >> int1 >> sign >> int2;
if (sign == '+') ints = 1;
if (sign == '-') ints = 2;
if (sign == '*') ints = 3;
if (sign == '/') ints = 4;
if (sign == '%') ints = 5;



switch (ints)
{
    case 1: cout << int1 + int2 << endl; break; 

    case 2: cout << int1 - int2 << endl; break;

    case 3: cout << int1 * int2 << endl; break; 

    case 4: cout << (float)int1 / int2 << endl; break; 

    case 5: cout <<  int1 % int2 << endl; break; 

   default: cout << "I do not know such function/n";
 break;
}



    return 0;
}
