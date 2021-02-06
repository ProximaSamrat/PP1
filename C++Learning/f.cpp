#include <bits/stdc++.h> 

using namespace std;

int main(){

int k,m,l,cnt=0;
cin >> k >> m >> l;
int a[k][k];

for (int i=0; i<k; i++){
for (int j=0; j<m; j++){
cin >> a[i][j];

}

}

for (int i=0; i<k; i++){
for (int j=0; j<m; j++){
if(a[i][j]==l){

    cnt++;
}

}

}
cout << cnt;
}