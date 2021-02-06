#include <bits/stdc++.h>
using namespace std;

string band;
void f(int i){

    if ( i==band.size()){ cout<<-1; return; }

    
    else if (band[i]<'a'){ cout << band[i]; return; }
    
    f(i+1);
}


int main(){ 
    cin >> band;
    f(0);
}