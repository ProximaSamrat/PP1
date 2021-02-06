#include <iostream>

using namespace std;

int main()
{
  /* 
    All odd number between [0, 100]
  */

  for (int i = 0; i <= 100; i++){
    if (i % 2 == 1)
      cout << i << " ";
  }

  // for (int i = 0; i <= 100; i++){
  //   if (i % 2 == 0)
  //     cout << i << " ";
  // }

  return 0;
} 