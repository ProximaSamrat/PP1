#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if(n==1){
        return 1;
    }
    
  int k = 0;
  int mx;

    for(int i=1;i<=n/2;i++){
        
        if(n%i==0){
            
        k++;

    mx = i;
        }
    }
    
    return k+f(mx);
    
    
    }

int main(){
    
    
  int n;
  cin >> n;
  f(n);

  cout << f(n);

}