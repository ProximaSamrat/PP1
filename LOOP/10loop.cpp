#include <iostream>
using namespace std;

int main()
{
  /* 
   fibonacci sequence (0, 1, 1, 2, 3, 5, 8, 13, ...)
   show first N elements of FS
   (n = 5; result: 0,    1,    1,   2,   3)
                   t1    t2    next 
                   t1 = t2, t2 = next

  */

int n;
cin >> n;

int t1 = 0, t2 = 1, next;
for(int i = 0; i < n; i++) {
    if( i == 0 )
      cout << t1 << " ";
    else if ( i == 1 )
      cout << t2 << " ";
    else {
      next = t1 + t2;
      t1 = t2;
      t2 = next;
      cout << next << " ";
    }
}


return 0;

}