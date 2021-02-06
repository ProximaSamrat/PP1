#include <bits/stdc++.h>
using namespace std;

bool Prime(long long num1){

long long cnts = 0;

for (long long j = 2; j < num1; j++){

if (num1 % j == 0){
cnts = 1;
break;

}

}

if  (cnts == 0)
{return true;} else {return false;}

}
 
int main(){
 
long long n, num2=1;
long long cnt = 0;
    
cin >> n;
    

while (true){
num2++;

if(Prime(num2)) 
{cnt++;}

if(cnt==n){
cout << num2;
break;

}

}

}