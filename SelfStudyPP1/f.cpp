#include <bits/stdc++.h>

using namespace std;

int main () 
{
    int x1, x2, x3;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
    cin >> x1 >> x2;
    int q,w,e,r,t,y;
    int q2,w2,e2,r2,t2,y2;
    int q3,w3,e3,r3,t3,y3;
       q=x1/100000%10; w=x1/10000%10; e=x1/1000%10; r=x1/100%10; t=x1/10%10; y=x1%10;


     x1 = q + 10*w + 100*r + 1000*t + 10000*y;

      q2=x2/100000%10; w2=x2/10000%10; e2=x2/1000%10; r2=x2/100%10; t2=x2/10%10; y2=x2%10;

    
     x2 = q2 + 10*w2 + 100*r2 + 1000*t2 + 10000*y2;

     x3 = x1+x2;

     q3=x3/100000%10; w3=x3/10000%10; e3=x3/1000%10; r3=x3/100%10; t3=x3/10%10; y3=x3%10;
     
     x3 = q3 + 10*w3 + 100*r3 + 1000*t3 + 10000*y3; 

     cout << x3 << endl;

    }

    return 0;
}