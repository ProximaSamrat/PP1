#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
     for(int i = 0; i <= n - 1; ++i){
         for(int j = 0; j <= i; ++j){
             cout << "[*]";
         }
         cout << endl;
     }
    return 0;
}