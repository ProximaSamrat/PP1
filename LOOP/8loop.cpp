#include <iostream>
using namespace std;

int main(){

/* 
  show all eve number between [100 ; 0]
*/


for(int i = 100; i >= 0; i--) {
    if (i %2 == 0)
    cout << i << " ";
}

return 0;

}