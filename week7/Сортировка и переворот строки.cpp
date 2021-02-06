#include <iostream>
#include <algorithm>

using namespace std;

int main(){

  int a[6] = {4, 10, 2, 2, 3, -1};

  cout << *(a + 0) << endl;
  cout << *(a + 2) << endl;
  cout << *(a + 3) << endl;

  // sort(starting_point_address, ending_point_address:not_including )

  sort(a, a + 6);
  //reverse(a, a + 4);

  for(int i = 0; i < 6; i++)
    cout << a[i] << " ";


  return 0;
} 