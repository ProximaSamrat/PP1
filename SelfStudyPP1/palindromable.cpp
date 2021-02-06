#include <bits/stdc++.h>

using namespace std;

int factorial(int a){
    int d = 1;
    for(int i = 1; i <= a*a; i++){
        d *= i;
    }
    return d;
}


int main(){
    string s;
    int sum = 0;

    cin>>s;
    for(int i = 0; i < factorial(s.size()); i++){
        next_permutation(s.begin(), s.end());
        string temp = s;
        reverse(s.begin(),s.end());
        if(temp == s){
            cout<<"ZA WARUDO TOKI WO TOMARE";
            return 0;
        }
    }   
    cout<<"JOJO";
    return 0;
}