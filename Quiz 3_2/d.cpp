#include <iostream>

using namespace std;

int ldok(long k,int a){

    if(a==1) {return 0;}

    else if(a==2) {return 1;}

    return ( ldok(k, a-2) + k * ldok(k, a-1) ) % 10;
}

int main(){
    long k;
    int m;
    cin >> k >> m;
    cout << ldok(k,m);
    return 0;
}
