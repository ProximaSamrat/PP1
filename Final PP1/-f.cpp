#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <set>
using namespace std;

int reversing(int counter) {
    int r = 0;
    while(counter != 0){
        r= r * 10 + counter % 10;
        counter/=10;
    }
    return r;
}

int main() {
    int c;
    cin>>c;
    vector<int> array;
    while (c--)
    {
        int d,e,f;
        cin>>d>>e;
        f=reversing(d) + reversing(e);
        array.push_back(reversing(f));
    }
    for (auto now : array) cout << now << endl;
    return 0;
}