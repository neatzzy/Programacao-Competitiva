#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

void solve(){
    int n; cin >> n;
    int mn = INT_MAX, mx = INT_MIN;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        mn = min(mn, x);
        mx = max(mx, x);
    }
    cout << (mx - mn + 1) << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}