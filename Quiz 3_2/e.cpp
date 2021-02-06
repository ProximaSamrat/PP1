#include <bits/stdc++.h>
using namespace std;

int n, i, j, counter = 0;

void Fx(int n){

    if (n == 1) {
        cout << 1;
        return;
    } 

for (i=1; i <= n;){ 
    if (n % i == 0) { counter++; i++;}
    else 
    i++; 
}


for (j = i - 2; j > 0; j--){
if (n % j == 0) break;
}


for (int k = 1; k <= j;){ 
    if (j % k == 0) { counter++; k++;}
    else 
    k++;
}
cout << counter;
}

int main(){

cin >> n;

Fx(n);
  
return 0;
}