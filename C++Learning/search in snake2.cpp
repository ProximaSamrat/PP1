#include <iostream>
using namespace std;
 
int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int arr[n][m];
    int num = 0;
    for(int i = 0; i < n; ++i) {
        int dir, j;
        if(i % 2 == 0){
            j = 0;
            dir = 1;
        }
        else {
            j = m-1;
            dir = -1;
        }
        for(; j < m&&j >= 0; j+= dir) {
            arr[i][j] = num;
            ++num;
        }
    }
    cout << arr[x - 1][y - 1];
    return 0;
}