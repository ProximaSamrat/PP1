#include <iostream>
using namespace std;

int main(){

/*  for(initialize iterator; condition; inc/dec iterator) {
        expression / instructions;
    }
*/

cout << "loop started\n";
for(int i = 0; i <= 10; i = i + 2) {
   cout << i << " ";
}
cout << "/n loop ended\n";
return 0;

}