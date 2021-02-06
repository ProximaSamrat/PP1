#include <bits/stdc++.h> 

using namespace std;

int main(){
    
string s,a;

cin >> a >> s;

for(int i = 0; i<s.length();i++)

{

if(a.find(s[i]) != -1)

{

s.erase(i,1);

}

}

cout<<s;

return 0;
}