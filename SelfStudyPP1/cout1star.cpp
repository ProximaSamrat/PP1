#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  stack<char> ans;
  ans.push(' ');
  for(int i=s.size()-1;i>-1;i--){
    if(s[i]=='*'&&ans.top()!='*')
      ans.push(s[i]);
    else if(s[i]!='*')
      ans.push(s[i]);
  }
  while(!ans.empty()){
    cout<<ans.top();
    ans.pop();
  }
  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
string k;
int main(){
  string s;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == '*' && s[i] == s[i+1]){
        int cnt = 0;
    }else {
      k+=s[i];
    }
  }
  cout << k;
}
*/