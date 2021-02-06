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
        
   int repeat[n] = {0};
   for (int i = 0; i < n; i++) repeat[arr[i]] +=1;
   for (int i = 0; i < n; i++)  
   cout <<i<< " - " << repeat[i] << " repeat\n";
   cin.get();
    
 
 
         return 0;
}
