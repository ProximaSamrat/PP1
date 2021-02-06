#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

vector<int> v1;
vector<int> v2;
vector<int> v12;
int n, m;
cin >> n;

for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v1.push_back(x);
}

cin >> m;
for(int j = 0; j < m; j++){
    int y;
    cin >> y;
    v2.push_back(y);
}

v12.reserve(v1.size() + v2.size());
v12.insert(v12.end(), v1.begin(), v1.end());
v12.insert(v12.end(), v2.begin(), v2.end());
sort(v12.begin(), v12.end());
for(int k = 0; k < v12.size(); k++){
    cout << v12[k] << " ";
}


return 0;
}