#include <iostream>

using namespace std;

int main()
{
  /* 
    Find the sum of digitis of given number.
    n = 15 ------- > 1 + 5 = 6
    result: 6
    n = 245 ----> 2 + 4 + 5 = 11
    result: 11
  */

  /*
    n = 245: a = 245 % 10 = 5; sum = sum + a = 0 + 5 = 5; n = n / 10
    n = 24: a = 24 % 10 = 4; sum = sum + a = 5 + 4 = 9; n = n / 10
    n = 2: a = 2 % 10 = 2; sum = sum + a = 9 + 2 = 11; n = n / 10
    n = 0: stop looping
  */
  int n, sum = 0, a;
  cin >> n;

  while(n) { // n != false <==> n != 0
    a = n % 10;
    sum += a; // sum = sum + a;
    n /= 10; // n = n / 10;
  }

  cout << sum << endl;



  return 0;
} 