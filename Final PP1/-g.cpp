#include <bits/stdc++.h>

using namespace std;
int cnt,prime,cnt1;



bool isPrime(int n){ 

    if(n == 1){ return false; }

    for(int i = 2; i < n; i++)
    if (n % i == 0) { return false; }
 
return true; 
}




int main () 
{
    int n;
    cin >> n;
    for (int i = 2; 2 < n; i++){
        if(isPrime(i) && isPrime(n-i)){
          cout << i << " " << n-i << endl;
          return 0;
        }
    }    
    return 0;
}