#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

vector<char> v1;
vector<char> v2;
vector<char> v12;
int n, m;
cin >> n;
string v11;
string v22;
cin >> v11 >> v22;

for(int i = 0; i < v11.size(); i++){
    v1.push_back((char)v11[i]);
}

for(int j = 0; j < v22.size(); j++){

    v2.push_back((char)v22[j]);
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