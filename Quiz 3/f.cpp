#include <bits/stdc++.h>
using namespace std;

int N;

int f(){


cin >> N;

for (unsigned int i = 2; i < N; ){

if ( N % i == 0 ){

cout << i << ' ';

N /= i;

} else { i++; }

} 

if ( N > 1 )

cout << N;

}

int main(){
cin >> N;

cout << f(int N);

return 0;
}