#include <iostream>

using namespace std;

int main(){
    int n; 
    cin >> n;

    int mins; 
    cin >> mins;

    int maxs = mins;

    for (int i = 0; i < n-1; i++)
    {
        int x; cin >>x;
        if (x < mins) mins = x;
        if (x > maxs) maxs = x;
    }
    cout<<maxs-mins+1-n;
}