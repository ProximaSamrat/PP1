#include<iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {

    string s, x;
    cin>>s;
    cin>>x;

    if (s.length() != x.length()) {
        cout << "Understandable have a nice day";
        return 0;
    }

    x += x;

    for (int i = 0; i < x.length(); ++i) {
        bool znak = 1;

        for (int j = 0; j < s.length(); ++j)
        {
            if (x[i + j] != s[j]) {
                znak = 0;
            }
        }

        if (znak) {                   
            cout << i;
            return 0;
        }
    }
    
    cout << "Understandable have a nice day";

    return 0;
}