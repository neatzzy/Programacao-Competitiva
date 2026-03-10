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
    vector<string> keys = {"PP", "P", "M", "G", "GG"};
    map<string, int> mp;

    for(const auto& k : keys) mp[k] = 0;

    while(n--){
      string aux; cin >> aux;
      if(mp[aux] == 0) mp[aux]++;
      else mp[aux]--;
    }

    ll ans = 0;

    for(const auto& x : mp) ans += x.second;

    cout << ans << endl;
    
    return 0;
}