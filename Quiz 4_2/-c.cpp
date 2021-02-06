#include <bits/stdc++.h>

using namespace std;
int cnt,prime,cnt1;



bool isPrime(int n){ 

    if(n == 1){ return false; }

    for(int i = 2; i < n; i++)
    if (n % i == 0) { return false; }
 
return true; 
}


vector <int> v(11111);


int main () 
{
    int n;
    cin >> n;
    for (int i = 2; 2 < INT_MAX; i++){
        if(isPrime(i)){

            cnt++;

            if(isPrime(cnt)){
            prime++;
            if(prime==n) { cout << i; break;}
            }
        }
    }    
}