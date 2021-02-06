#include <bits/stdc++.h>
using namespace std;

int N;

int f (int N, int i ){
 
if (N < 2){
return;
}

if ( N % i == 0 ){
cout << i << " ";
return f( N/i, i ); 

} else{ 
return f( N, i+1 ); 
}

}

int main(){


cin >> N;
int i = 2;

cout << endl << f(N,i);

return 0;
}