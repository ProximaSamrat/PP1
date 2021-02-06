#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    if ((n % 2) == 0)
    cout <<  (n /= 2)  << endl;
    else if (n == 1)
    cout <<  "0"  << endl;
    else if ((n % 2) != 0)
    cout << n << endl;
    
    
  
  
   // if (k >= n) cout << 2;
   // else if (2 * n % k == 0 ) cout << n*2/k;
   // else cout << n*2/k + 1;
    
    return 0;

}