#include <bits/stdc++.h>

using namespace std;

int main(){

int a, min; 

cin >> a >> min;

int max = min;

for (int i = 0; i < a-1; i++)

{
    int b; 
    cin >> b;
    if (b < min) 
    min = b;
    if (b > max) 
    max = b;
}

cout << max - min + 1 - a;        // 8 - 2 + 1 - 4 = 3

}
