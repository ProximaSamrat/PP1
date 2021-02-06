#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
 
using namespace std;
 
int main () 
{       int n;
        int arr[n];
        cin>>n;
        
        for (int i = 0; i < n; i++) 
        {
            
            cin >> arr[i];
        }
        
      /*  for ( int i = 0; i < 10; i++ ) {                                    //n - ???????????
        for ( int j = i+1; j < 10; j++ ) { 
            if ( arr[i] == arr[j] ) {
                         cout << "|" << j << " ? " << i << "|"  << endl;
            }
        }*/
   int repeat[n] = {0};
   for (int i = 0; i < n; i++) repeat[arr[i]] +=1;
   for (int i = 0; i < n; i++)  
   cout <<i<< " - " << repeat[i] << " repeat\n";
   cin.get();
    
 
 
         return 0;
}