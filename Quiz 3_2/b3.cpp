#include <iostream>
using namespace std;

int main(){
    int n = 8, m = 8, amount_of_figures;
    char letter, number;
    string coord;
    cin >> amount_of_figures;
    char A[8][8];
    int x, y;
    for (int i = 0; i < 8; i++){ 
        for (int j = 0; j < 8; j++){ 
            A[i][j] = '0';
        }
    }
    for (int i = 0; i < amount_of_figures; i++){
        cin >> letter >> number;


        A[letter - 65][number - 49] = '*';
    }
     for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){ 

         cout << A[i][j];
        
        }
        cout << endl;
    }
    return 0;
}