#include <iostream>
using namespace std;

void f(int n, int i )
  {
 
    if (n<2){
      return;
    }
    if (n%i==0){
      cout<<i<<" ";
      f(n/i, i); 
    }else {
      f(n, i+1);
    }
  }

int main(){
    int n;
    cin >> n;
    f(n,2);
return 0;
}