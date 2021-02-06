#include <bits/stdc++.h>


using namespace std;

int find_min(vector <int> a, int m) {
    int mina = 1002;
    for (int j = 1; j < m + 1; j++) {
        if (a[j - 1] != a[j]) {
            if (a[j + 1] != a[j]) {
                if (mina > a[j])
                    mina = a[j];
            }
        }
    }
    return mina;
}

void res(int minimum, int m, vector <int> a) {
    if (minimum == 1002) {
        cout<<"ZA WARUDO"<<endl;
    }else{
        for (int j = 1; j < m + 1; j++){
            if (minimum == a[j]) {cout<<j<<endl; break;}
        }
    }
}

int main() {

    int n, m, x;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> m;
        vector <int> arr1, arr2;
        arr1.push_back(0);
        for (int j = 0; j < m; j++){
            cin >> x;
            arr1.push_back(x);
        }
        arr2 = arr1;
        arr1.push_back(1001);
        sort(arr1.begin(), arr1.end());   //0 1 2 3 4 4 6 7 1001
        res(find_min(arr1, m), m, arr2);
    }

    return 0;
}













/*#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
#include <vector>
#include <deque>
#include <queue>
#include <utility>
#include <algorithm>*/