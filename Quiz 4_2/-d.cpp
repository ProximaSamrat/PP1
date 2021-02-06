#include <algorithm>
#include <iostream>

using namespace std;

char a[100][100];
int di[] = {1, -1, 0, 0};
int dj[] = {0, 0, 1, -1};
int n, m;

bool chek(int i, int j){
    return i >= 0 && i < n && j >= 0 && j < m;
}

void func(int i, int j){
    a[i][j] = '0';
    for(int k = 0; k < 4; k++){
        int x = i + di[k], y = j + dj[k];
        if(chek(x, y) && a[x][y] != '0')
            func(x, y);
    }
}




int main(){

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(a[i][j] == '1')
    {
    func(i, j);
    cnt++;
    }

    if (cnt == 0){ 
    cout <<"nothing is left" << endl; 
    return 0;
    }

    cout << cnt;
    return 0;
}