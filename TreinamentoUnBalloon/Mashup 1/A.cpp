#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
typedef vector<vector<int>> graph;

void solve(){
    int x, y, z; cin >> x >> y >> z;
    int ans = 0;

    if(x >= 50) ans++;
    if(y >= 50) ans++;
    if(z >= 50) ans++;

    ans >= 2 ? cout << "Yes" : cout << "No";
    cout << '\n';
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}