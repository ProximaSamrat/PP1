#include <iostream>

using namespace std;

int main(){

int b; 

cin >> b;

int a[b][b];
    
for (int i = 0; i < b; i++)
{
for (int j = 0; j < b; j++)  
{
cin >> a[i][j];
}
}


for (int i = b-1; i>= 0; i--){   
for (int j = 0; j+i < b; j++){  
cout << a[j][j+i] <<" ";
}
cout << endl;
}

for (int i = 1; i < b; i++){
for (int j = 0; j+i < b; j++){   
cout << a[j+i][j] << " ";
}
cout << endl;
}

return 0;
}