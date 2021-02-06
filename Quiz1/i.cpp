#include <iostream>

using namespace std;

int main()
{

int n;
cin >> n;
if ((n / 3600) < 10)
cout << "0" << (n / 3600) << ":";
else cout << (n / 3600) << ":";

if (( (n / 60) - ( (n / 3600) * 60) ) < 10)
cout << "0" << ( (n / 60) - ( (n / 3600) * 60) ) << ":";
else cout << ( (n / 60) - ( (n / 3600) * 60) ) << ":";

if ((n % 60) < 10)
cout << "0" << (n % 60) << endl;
else cout << (n % 60) << endl;


//cout << "0" << (n / 3600) << ":" << "0" << ( (n / 60) - ( (n / 3600) * 60) ) << ":" <<  (n % 60) << endl;

return 0;
} 