#include <bits/stdc++.h>
using namespace std;

map<int, int> m;

int main(){
string s;
getline(cin, s);

map<string, int> m;
string a = "";
for (int i = 0; i < s.size(); i++){
    if(s[i] == ' '){
m[a]++;
a="";
}
else a+=s[i];
}
map<string, int>::iterator it;{
for(it = m.begin(); it != m.end(); it++)
cout << it->first << endl << it->second << endl;
}
    return 0;
}