#include <iostream>

using namespace std;

int main(){
  int n, m, maxi, mini;
  cin >> n >> m;
  int a[n][m];

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> a[i][j];
      if(i == 0 && j == 0){
        maxi = a[i][j];
        mini = a[i][j];
      } else {
        if(a[i][j] > maxi)
          maxi = a[i][j];
        if(a[i][j] < mini)
          mini = a[i][j];
      }
    }
  }

  printf("max = %i, min = %i\n", maxi, mini);

  return 0;
}