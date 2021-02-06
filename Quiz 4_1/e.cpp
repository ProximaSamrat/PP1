#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin>>n;
    int q,w,e,r;
    while(true){
        n++;
        q=n/1000; w=n/100%10; e=n/10%10; r=n%10;  
        if(q!=w && q!=e && q!=r && w!=e && w!=r && e!=r)
        {break;}
    }
     cout<<n<<endl;
     return 0;

}

