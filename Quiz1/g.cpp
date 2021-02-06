#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, a, b;
cin >> n >> a >> b;

if (n <= a)
cout << "1" << endl;
else if (a > b)
cout << ( ( n / (a-b) ) ) << endl;
else if ((a > b) && ( (n / a) > (b * (n / a)) ) )
cout << (n / a - 1) << endl;
else if (b >= a)
cout << "NO" << endl;    

return 0;

}