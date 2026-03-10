#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

    int n, m; cin >> n >> m;
    ii frodo; cin >> frodo.first >> frodo.second;

    for(int i = 1 ; i <= n ; i++){
      for(int j = 1 ; j <= m ; j++){
        cout << abs(i - frodo.first) + abs(j - frodo.second) << " ";
      }
      cout << "\n";
    }
    
    return 0;
}