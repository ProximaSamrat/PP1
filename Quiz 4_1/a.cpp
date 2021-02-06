#include <bits/stdc++.h>

using namespace std;

void f(int n){

    map<pair<int,int>,int> map;
     
    for(int i=0; i<n; i++){
        int x,y; 
        cin>>x>>y;

        if(x<y) swap(x,y);
        
        map[{x,y}]++;
        int cnt=map[{x,y}]-1;
        cout<<cnt<<endl;
        
    }
}
int main(){
    int n; cin>>n;
    f(n);
}

