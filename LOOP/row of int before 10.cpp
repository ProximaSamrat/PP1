#include <iostream>

using namespace std;

int main()
{
  /* 
    while
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
  */

  int i = 0;
  while(i < 10){
    cout << i << " ";
    i++;
  }

  return 0;
} 