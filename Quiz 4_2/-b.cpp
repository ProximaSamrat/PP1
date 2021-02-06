#include <bits/stdc++.h>

using namespace std;

int main () {
    int l, R;
    cin >> l >> R;
    int q,w,e,r,t,y;
//      1 1 1 1 1 1        
    for (; l <= R; l++)
    {
         q=l/100000%10; w=l/10000%10; e=l/1000%10; r=l/100%10; t=l/10%10; y=l%10;

         if (l <= 10 && l<= R)
     {cout << l << endl; return 0;}

     if (l < 100 && l >10 &&  t!=y)
     {cout << l << endl; return 0;}

      if (l < 1000 && l > 100 &&  r!=t && r!=y && t!=y)
     {cout << l << endl; return 0;}

     if (l < 10000 && l > 1000 &&  e!=r && e!=t && e!=y && r!=t && r!=y && t!=y)
     {cout << l << endl; return 0;}

     if (l < 100000 && w!=e && w!=r && w!=t && w!=y && e!=r && e!=t && e!=y && r!=t && r!=y && t!=y)
     {cout << l << endl; return 0;}


        if (l == 100000 && q!=w && q!=e && q!=r && q!=t && q!=y && w!=e && w!=r && w!=t && w!=y && e!=r && e!=t && e!=y && r!=t && r!=y && t!=y)
     {cout << l << endl; return 0;}

     
    }

 cout<<"Understandable, have a great day"<<endl;
  // else
   // {
    //cout << l << endl;
   // }
     return 0;

}