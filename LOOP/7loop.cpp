#include <iostream>
using namespace std;

int main(){

/* 
  show all number %3 == 0 in range a,b
*/

int a, b;

cin >> a >> b;

for(int i = a; i <= b; i++) {
    if (i %3 == 0);
    cout << i << " ";
}

return 0;

}