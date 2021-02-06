#include <bits/stdc++.h>
using namespace std;

int main(){
string s1, s2, s3;

cin >> s1 >> s2;

s3 = s1 + s2;

sort(s3.begin(), s3.end());
cout << s3;


    return 0;
}