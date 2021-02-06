#include <bits/stdc++.h>

using namespace std;

int main(){
  
int l=0; 
int u=0;
int n, a, b;
string S;
cin >> n >> a >> b;

cin >> S;


for (int i = 0; i < S.size(); i++){

        if (S[i] >= 'a' && S[i] <= 'z')  {l++;}
        if (S[i] >= 'A' && S[i] <= 'Z')  {u++;}
}


if(l == S.size() || u == S.size()) {cout << "0"; return 0;}


if (l*b < u*a) cout << l*b << endl;
if (l*b > u*a) cout << u*a << endl;
if(l == u && b == a) cout << u * b;
/*
if(l == u && a < b) {cout << u * a; return 0;}
if(l == u && b < a) {cout << u * b; return 0;}

if(l == u && b == a) {cout << u * b; return 0;}

if (u < l) {cout << (u)*a; return 0;}

if (l < u) {cout << (l)*b; return 0;}
*/

    return 0;
}

