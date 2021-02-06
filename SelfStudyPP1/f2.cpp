#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <set>
using namespace std;

int c;
int r;
int rever(int counter) {
    while(counter!=0)
    {
        r*=10;
        r+=counter%10;
        counter/=10;
    }
    return r;
}
vector<int> a;
int main() {
    cin>>c;
    while (c--){
        int d,e,f;
        cin>>d>>e;
        f=rever(d)+rever(e);
        a.push_back(rever(f));
    }
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
    }
    return 0;
}