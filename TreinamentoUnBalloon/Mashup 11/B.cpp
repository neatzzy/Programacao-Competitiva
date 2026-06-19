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
    int n, k; cin >> n >> k;
    vector<ii> seg(n);

    for(auto&[l, r] : seg) cin >> l >> r;

    bool hasLeft = false, hasRight = false;
    for(auto&[l, r] : seg){
        if(l == k) hasLeft = true;
        if(r == k) hasRight = true;
    }

    cout << ((hasLeft and hasRight) ? "YES\n" : "NO\n");
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}