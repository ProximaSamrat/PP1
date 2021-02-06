#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n%2 == 0 && n>0 && n<=100)
    cout << "Even" <<endl;
    else if (n%2 != 0 && n>0 && n<=100)
    cout << "Odd" <<endl;
    else
    {
        cout <<"None"<<endl;
    }
    
    return 0;

}