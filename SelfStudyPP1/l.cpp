#include <bits/stdc++.h>

using namespace std;


int main()
{
int t;
cin >> t;
for(int i=0; i < t; i++){
int cnt = 0;
int n;
cin >> n;
int a[n];
for(int j = 0; j < n; j++){
int x;
cin >> x;
a[j] = x;
}

for (int k = 0; k < n; k++){
   for(int l = k + 1; l < n; l++){
    if (a[k] == a[l]) {cnt++; cnt++;}
   }
}
if (cnt == (n/2)) {cout << "ZA WARUDO" << endl;}
else{
cout << cnt << endl;
}

}


return 0;
}