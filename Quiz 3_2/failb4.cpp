#include <iostream>
using namespace std;

int main(){
    int n = 8, m = 8, amount_of_figures;
    string coord;
    cin >> amount_of_figures;
    char A[n][m];
    int x, y;
    for (int i = 0; i < n ; i++){ 
        for (int j = 0; j < m ; j++){ 
            A[i][j] = '0';
        }
    }
    for (int j = 0; j < amount_of_figures; j++){
        cin >> coord >> y;

        if (coord == "A1") x = 0, y= 0;
        if (coord == "A2") x = 0, y= 1;
        if (coord == "A3") x = 0; y= 2;
        if (coord == "A4") x = 0; y= 3;
        if (coord == "A5") x = 0; y= 4;
        if (coord == "A6") x = 0; y= 5;
        if (coord == "A7") x = 0; y= 6;
        if (coord == "A8") x = 0; y= 7;

        if (coord == "B1") x = 1, y= 0;
        if (coord == "B2") x = 1, y= 1;
        if (coord == "B3") x = 1; y= 2;
        if (coord == "B4") x = 1; y= 3;
        if (coord == "B5") x = 1; y= 4;
        if (coord == "B6") x = 1; y= 5;
        if (coord == "B7") x = 1; y= 6;
        if (coord == "B8") x = 1; y= 7;

        if (coord == "C1") x = 2, y= 0;
        if (coord == "C2") x = 2, y= 1;
        if (coord == "C3") x = 2; y= 2;
        if (coord == "C4") x = 2; y= 3;
        if (coord == "C5") x = 2; y= 4;
        if (coord == "C6") x = 2; y= 5;
        if (coord == "C7") x = 2; y= 6;
        if (coord == "C8") x = 2; y= 7;

        if (coord == "D1") x = 3, y= 0;
        if (coord == "D2") x = 3, y= 1;
        if (coord == "D3") x = 3; y= 2;
        if (coord == "D4") x = 3; y= 3;
        if (coord == "D5") x = 3; y= 4;
        if (coord == "D6") x = 3; y= 5;
        if (coord == "D7") x = 3; y= 6;
        if (coord == "D8") x = 3; y= 7;

        if (coord == "E1") x = 4, y= 0;
        if (coord == "E2") x = 4, y= 1;
        if (coord == "E3") x = 4; y= 2;
        if (coord == "E4") x = 4; y= 3;
        if (coord == "E5") x = 4; y= 4;
        if (coord == "E6") x = 4; y= 5;
        if (coord == "E7") x = 4; y= 6;
        if (coord == "E8") x = 4; y= 7;

        if (coord == "F1") x = 5, y= 0;
        if (coord == "F2") x = 5, y= 1;
        if (coord == "F3") x = 5; y= 2;
        if (coord == "F4") x = 5; y= 3;
        if (coord == "F5") x = 5; y= 4;
        if (coord == "F6") x = 5; y= 5;
        if (coord == "F7") x = 5; y= 6;
        if (coord == "F8") x = 5; y= 7;

        if (coord == "G1") x = 6, y= 0;
        if (coord == "G2") x = 6, y= 1;
        if (coord == "G3") x = 6; y= 2;
        if (coord == "G4") x = 6; y= 3;
        if (coord == "G5") x = 6; y= 4;
        if (coord == "G6") x = 6; y= 5;
        if (coord == "G7") x = 6; y= 6;
        if (coord == "G8") x = 6; y= 7;

        if (coord == "H1") x = 7, y= 0;
        if (coord == "H2") x = 7, y= 1;
        if (coord == "H3") x = 7; y= 2;
        if (coord == "H4") x = 7; y= 3;
        if (coord == "H5") x = 7; y= 4;
        if (coord == "H6") x = 7; y= 5;
        if (coord == "H7") x = 7; y= 6;
        if (coord == "H8") x = 7; y= 7;


        A[x][y] = '*';
    }
     for (int i = 1; i < n + 1; i++){
        for (int j = 1; j < m + 1; j++){ 

         cout << A[i][j];
        
        if (j != m) cout << " ";
        }
        cout << endl;
    }
    return 0;
}