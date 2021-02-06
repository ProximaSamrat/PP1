#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
getline(cin, s);

for (int i = 0; i < s.size();){
if(s[i] == 'a') {s[i] = 'z'; i++;}
if(s[i] == 'b') {s[i] = 'y'; i++;}
if(s[i] == 'c') {s[i] = 'x'; i++;}
if(s[i] == 'd') {s[i] = 'w';  i++;}
if(s[i] == 'e') {s[i] = 'v';  i++;}
if(s[i] == 'f') {s[i] = 'u';  i++;}
if(s[i] == 'g') {s[i] = 't';  i++;}
if(s[i] == 'h') {s[i] = 's'; i++;} 
if(s[i] == 'i') {s[i] = 'r'; i++;}
if(s[i] == 'j') {s[i] = 'q'; i++;}
if(s[i] == 'k') {s[i] = 'p'; i++;}
if(s[i] == 'l') {s[i] = 'o'; i++;}
if(s[i] == 'm') {s[i] = 'n'; i++;}
if(s[i] == 'n') {s[i] = 'm'; i++;}
if(s[i] == 'o') {s[i] = 'l'; i++;}
if(s[i] == 'p') {s[i] = 'k'; i++;}
if(s[i] == 'q') {s[i] = 'j'; i++;}
if(s[i] == 'r') {s[i] = 'i'; i++;}
if(s[i] == 's') {s[i] = 'h'; i++;}
if(s[i] == 't') {s[i] = 'g'; i++;}
if(s[i] == 'u') {s[i] = 'f'; i++;}
if(s[i] == 'v') {s[i] = 'e'; i++;}
if(s[i] == 'w') {s[i] = 'd'; i++;}
if(s[i] == 'x') {s[i] = 'c'; i++;}
if(s[i] == 'y') {s[i] = 'b'; i++;} 
if(s[i] == 'z') {s[i] = 'a'; i++;}



}
cout << s << endl;
    return 0;
}


