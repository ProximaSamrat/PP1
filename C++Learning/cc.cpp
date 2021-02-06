#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int main (){
    
    int n,m,d=0,c=0, l;
    cin >> n >> m >> l;
    int b=n;
    int a[n][n]; 
     for (int i=0; i<n; i++){
         for (int j=0; j<m; j++){
             cin >> a[i][j];
             if (a[i][j]==l){
                 d++;

             }
             if (j==(m-1) && d>0){
                     c++;
                 }
         }
         d=0;

     }
     cout << c;
     }
  
