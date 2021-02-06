#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    if (n%4 == 0 &&  n>=1 && n<=30000)
    cout << "YES" <<endl;
    else if ( n%400 == 0 && n>=1 && n<=30000)
    cout << "YES" <<endl;
    else if ( n%100 != 0 && n>=1 && n<=30000)
    cout << "NO" <<endl;
    else
        cout << "NO" <<endl;
    
    
    
     return 0;

}