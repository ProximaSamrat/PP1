#include <iostream>

using namespace std;

int main()
{

  int a,b,c,d,e,f,res;

cin >> a >> b ; 
cin >> c >> d ;
cin >> e >> f ;
res = a-b+c-d+e-f;

if (res < 0)
  cout << "Hee Hee Losers" << endl;
  else if (res > 0)
    cout << "Grats Yelnur" << endl;
    else if (res == 0)
      cout << "Draw" << endl;

return 0;
} 