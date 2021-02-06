#include <bits/stdc++.h>

using namespace std;

int d[10000];

int f(int n, int a[], int b[]){
   
   for (int i = 0; i < n; i++){
       d[i] = abs(a[i] - b[i]);
   }
}


int main(){
int n;

cin >> n;

int a[n], b[n];
for (int i = 0; i < n; i++)
cin >> a[i];
for (int i = 0; i < n; i++)
cin >> b[i];
for (int i = 0; i < n; i++)
cout << f(n, a, b) << " ";

  return 0;
}