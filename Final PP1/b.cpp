#include <bits/stdc++.h>
using namespace std;


int main()
{
int n,k,i,j;
cin>>n;
n = n*2;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
    cout<<'0';
    }
    for(int k=n;k>=n-(2*i);k--){

        cout<<'*';
    }
        cout<<endl;

}
return 0;
}