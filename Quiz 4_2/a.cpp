#include <bits/stdc++.h>
using namespace std;

map<int,int> Banknotes;
string n1[]{};




int main(){
while

cin >> n1[];

for (int i = 0; i < n1; i++){

  int j1;
  cin >> j1;
  if(Banknotes.find(j1)==Banknotes.end()) 
  { Banknotes[j1]=1; }
  else {Banknotes[j1]++;}

}
    int n2;
    cin >> n2;
    vector<int> Value;
    for (int i = 0; i < n2; i++)
    {
        int j2;
        cin >> j2;
        Value.push_back(j2);
    }
    map<int,int>::iterator it;
    for (int i = 0; i < Value.size(); i++)
    {
        cout<<Banknotes[Value[i]]<<endl;
    }
return 0;
}