#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
cin >> n;


    for(int i = 1; i <= n-1; ++i)
    {
        cout << "*" << "\n";
     for(int j = 1; j <= i; ++j)
        {
            cout << "-";
    
        }
        
    }
cout << "*" << "\n";
return 0;

}