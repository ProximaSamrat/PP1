#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef pair<ii , int> iii;
typedef vector<int> vi;

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define all(s) s.begin(),s.end()
#define fo(n) for(int i = 1; i <= n; ++i)
const int maxn = (int) 1001;
const int inf = (int) 1e9+7;


int n,m;
char re[27];

string s;


int main(){ 
 
 cin >> s;
 cout << "The anagram variants for string "<< s <<" are:" << endl;
 do{
  cout << s << endl;
 } while(next_permutation(all(s)));

}