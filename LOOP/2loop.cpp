#include <iostream>
using namespace std;

int main(){

/*  for(initialize iterator; condition; inc/dec iterator) {
        expression / instructions;
    }
*/


for(int i = 1; i <= 100; i = i += 2) {
   cout << i << " ";
}

return 0;

}