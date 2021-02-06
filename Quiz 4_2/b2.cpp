#include <bits/stdc++.h>

using namespace std;

int main () {
    int l;
    cin>>l;
    int q,w,e,r,t,y;
    while(true){
        l++;
        q=l/1000; w=l/100%10; e=l/10%10; r=l%10;  
        if(q!=w && q!=e && q!=r && w!=e && w!=r && e!=r)
        {break;}
    }
     cout<<l<<endl;
     return 0;

}