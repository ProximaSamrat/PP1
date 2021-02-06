#include <iostream>

using namespace std;

int main()
{
  /* 
    do while
  */

  /*
  for(init iterator; condition; inc/dec iterator){
    expression
  }
  init iterator;
  while(condition){
    expression;
    inc/dec interator;
  }  
  do {
    expression;
  } while (condition)
  */

  // int n = 100;
  // while(n > 1000){
  //   cout << n << endl;
  //   n++;
  // }

  int n = 100;
  do {
    cout << n << endl;
    n++;
  } while(n < 1000);

  return 0;
}