#include <bits/stdc++.h>

using namespace std;

int i;

void scan(string s, int i){
   /* for(int i = 0; i < s.size(); i++){ */
        if(s[i] >= 'a' && s[i] <= 'z'){
            return scan(s, i + 1);}
        
        if(s[i] < 'A' && s[i] > 'Z' && s[i] < 'a' && s[i] > 'z'){
        return scan(s, i + 1);
        }

        if(s[i] >= 'A' && s[i] <= 'Z'){
            cout << s[i];}
            else if(i == s.size() -1){ cout << -1 << endl;  

      //      return;
      //  } else if(i == s.size() -1){ cout << -1 << endl;  

    

}

}

int main(){

string s;
getline(cin, s);

scan(s, i);

return 0;
}