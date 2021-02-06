#include <bits/stdc++.h>

using namespace std;

int main(){

int n, a[n];

set<int> s;

cin >> n;

for( int i = 0; i < n; i++ )
{
    cin >> a[i];
    s.insert( a[i] );
}

if(n == s.size())   {cout<<"YES";}
if(n != s.size())   {cout<<"NO";}
    
return 0;
}