#include <bits/stdc++.h>

using namespace std;


int y ;
vi ans;
string s;
string b, a;
int main(){ 
 
 cin >> a >> b;
 int j = 0;
 for(int i = 0; i < a.size(); ++i){
  if (a[i] == b[0]){
   j = 0; 
   while(a[i+j] == b[j] and j < b.size()) j++;
   if (j == b.size()) ans.pb(i);
  }
 }

 for(int i = 0; i < ans.size(); ++i)
  cout << ans[i] << " ";
}