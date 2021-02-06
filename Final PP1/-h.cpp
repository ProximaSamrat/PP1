#include <iostream>

using namespace std;

string s, k;

string result() {
    string text;
    for(int i = 0; i < s.length(); i++) {
        int a = int(s[i]) + int(k[i]) % 97;
        if (a > 122) a = a - 26;
        text += char(a);
    }
    return text;
}

int main() {

    cin >> s >> k;

    int i, j = 0;
    for(i = k.size(); i < s.size(); i++) {
        k += k[j];
        j++;
    }
    cout << result();

    return 0;

}