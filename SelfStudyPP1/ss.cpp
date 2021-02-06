#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int a, b, res, gues;

int result(int a, int b){
    if (gues == a * b) return true;
    else return false;

}

int main(){
    cout << "Enter first digit: ";
    cin >> a ;
    cout << endl << "enter second digit: ";
    cin >> b;
    cout << endl << "gues the result of their multiplication: ";
    cin >> gues;

result(a, b);

if (result(a, b))
cout << endl << "Yes! U R RIGHT!";
else 
cout << endl << "U FOOL!!! The true answer was " << (a * b);

  return 0;
}