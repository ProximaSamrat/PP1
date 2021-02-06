#include <bits/stdc++.h>

using namespace std;




int main(){
  

int cnt;
string s;
string w;
getline(cin, s);


for (int i = 0; i < s.size(); i++){

if (s[i] >= 'a' && s[i] <= 'z') {cnt++;}
if (cnt > w.size()) {for (; i < cnt; i++){
 w[i] = s[i];
}
}
if (s[i] == ' ') { 
for (; i < cnt; i++){
 w[i] = s[i];
}
cnt = 0; 
 } 

}


cout << w << endl;

return 0;
}