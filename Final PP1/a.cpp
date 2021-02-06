#include <bits/stdc++.h>

using namespace std;

int q, w, e, r, t, y, u;
  //1  2  5  10 20 50 100

bool check(int x){
    if(x > u*100 + y*50 + t*20 + r*10 + e*5 + w*2 + q*1)
    return false;
    if(x <= u*100 + y*50 + t*20 + r*10 + e*5 + w*2 + q*1)
    {
        while(u>=0 && x >= 0){
        x = x - 100;
        u--; 
        if (x == 0) return true;
    }
    if(u == 0 && x == 0){return true;}
        if(u == 0){
         while(y>=0 && x >= 0){
        x = x - 50;
        y--; 
        if (x == 0) return true;
    }
    if(y == 0 && x == 0){return true;}
    if(y == 0 && x >= 0){
         while(t>=0 && x >= 0){
        x = x - 20;
        t--; 
        if (x == 0) return true;
    }
    if(t == 0 && x == 0){return true;}
if(t == 0 && x > 0){
         while(r>=0 && x >= 0){
        x = x - 10;
        r--; 
        if (x == 0) return true;
    }
    if(r == 0 && x == 0){return true;}
if(r == 0 && x > 0){
         while(e>=0 && x >= 0){
        x = x - 5;
        e--; 
        if (x == 0) return true;
    }
    if(e == 0 && x == 0){return true;}
if(e == 0 && x > 0){
         while(q>=0 && x >= 0){
        x = x - 1;
        q--; 
        if (x == 0) return true;
    }
}
}
}
}
}
}
return false;
}

int main(){


cin >> q >> w >> e >> r >> t >> y >> u;
int n;
cin >> n;

for (int i = 0; i < n; i++){
    int x;
    cin >> x;
    check(x);
    if(check(x) == false) cout << "Transaction stopped!";
    if(check(x) == true) cout << "Transaction accepted!";

}

return 0;
}