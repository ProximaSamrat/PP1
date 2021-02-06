#include <iostream>
using namespace std;
 
int main()
{
    int n, m = 1;
    cin >> n;
    int a[n][n];
    
    if(n % 2 != 0){
        a[(n / 2)][(n / 2)] = (n * n);      // если N - нечетное то находим центр матрицы и заполняем его числом N * N
    }
    
    for(int i = 0; i < (n / 2); i++){
        for(int j = i; j < (n - i); j++){   // (n - i) - чтоб с каждым разом сторона становилась меньше
            a[i][j] = m;
            m++;
        }
        for(int j = 1; j < (n - i - i); j++){   // начинаем с первого эл. так-как нулевой уже записан
            a[(j + i)][(n - i) - 1] = m;    // (n - i) - 1 - отнимаем 1 чтоб не выходило за рамки массива
            m++;
        }
        for(int j = (n - 2) - i; j >= i; j--){  // (n - 2) - i - отнимаем 1 чтоб не выходило за рамки массива и еще одну 1 
            a[(n - i) - 1][(j)] = m;            // потому-что предыдущий эл. уже заполнен.
            m++;
        }
        for(int j = ((n - i) - 2); j > i; j--){
            a[j][i] = m;
            m++;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            cout << a[i][j] << " " ;
        }
        cout << a[i][n - 1] << endl;
    }
    return 0;
}