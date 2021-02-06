#include <bits/stdc++.h>
using namespace std;


int main()
{
int n;
int cnt = 1;
int a[n];
cin >> n;
for (int i = 0; i < n; i++){
int x;
cin >> x;
a[i] = x;

}

for (int i = 0; i < n-1; i++){
    for (int j = 1; j < n; j++){
        if(a[j]<a[i]){cnt++;}
        if(a[j]==a[0]){cnt=1;}
    


    }
}
cout << cnt << endl;







return 0;
}