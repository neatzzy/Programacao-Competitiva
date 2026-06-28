#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;
using ll = long long;
//#define int long long
using ii = pair<int,int>;
using graph = vector<vector<int>>;

#define nl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for(int i = a ; i < (b) ; ++i)

const int INF = 1e9;
const ll LINF = 1e18;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    graph adj(n);
    int bad = 0;

    rep(i, 0, n-1){
        int u, v; cin >> u >> v; u--; v--;
        adj[u].pb(v);
        adj[v].pb(u);
        if(a[u] != a[v]) bad++;
    }

    int base = bad + 1;
    int best = 0;

    rep(v, 0, n){
        int diffNb = 0;
        for(int u : adj[v])
            if(a[u] != a[v]) diffNb++;
        best = max(best, sz(adj[v]) - 2 * diffNb);
    }

    cout << base + best << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}