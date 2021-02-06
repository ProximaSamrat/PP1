#include <iostream>

using namespace std;

int main()
{
  /* 
    - [ ] Find the sum of all numbers which are enter by user till 0
    2
    3
    4
    2
    0
    result: 11
  */

  int n, sum = 0;

  for(;;){
    cin >> n;
    sum += n; // sum = sum + n;
    if(n == 0)
      break;
  }

  cout << sum << endl;




  return 0;
}