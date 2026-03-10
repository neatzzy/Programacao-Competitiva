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

    int n; cin >> n;
    ll ans = 0;

    while(n--){
      int a; cin >> a;
      if(!(a % 17)) ans++;
    }

    cout << ans << endl;
    
    return 0;
}