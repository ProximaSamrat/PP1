#include <iostream>
using namespace std;

int main()
{
  /* 
 find the sum of all numbers entered by user till 0
 2 3 4 5 10
 result:24
  */

int n, sum = 0;

for (;;){
    cin >>n;
    sum = sum + n;
    if(n == 0)
    break;
}

cout << sum << endl;
return 0;

}