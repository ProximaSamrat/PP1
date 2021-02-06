#include <iostream>

using namespace std;

int main()
{

  int n, a, b, c, d, res;

cin >> n;

 //a == n /= 1000;
//b == n - ((n /= 10) * 10);
//c == n /= 100 - (n /= 1000)*10;
if (( (n / 1000) == (n % 10) )  &&  (n / 100 - (n / 1000)*10) == (n / 10 - (n / 100 * 10) ) ) cout << "YES" << endl;

else cout << "NO" << endl;

return 0;
} 