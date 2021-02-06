#include <iostream>

using namespace std;

int main()
{

  int n,m;

cin >> n >> m ; 

if (n > m) 
cout << m << endl;
else if (n < m)
cout << (m % n) << endl;
else if ( n == m )
cout << "0" << endl;


return 0;
} 