#include <iostream>
using namespace std;

int main(){

/* 
  show all number %3 == 0 in range a,b
  show the number of divisors
*/

int a, b;

cin >> a >> b;

int cnt = 0;
for(int i = a; i <= b; i++) {
    if (i %3 == 0){
        cnt++;
        cout << i << " ";
    }
}

cout << endl << cnt << endl;

return 0;

}