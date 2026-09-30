#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;
using ll = long long;
#define int long long
using ii = pair<int,int>;
using graph = vector<vector<int>>;

#define nl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for(int i = a ; i < (b) ; ++i)

const int INF = 1e9;
const ll LINF = 1e18;
const ll mod = 1e9 + 7;
int exponent = 0;

int powmod(int base) {
    long long res = 1;
    
    base %= mod; 
    
    while (exponent > 0) {
        if (exponent & 1) {
            res = (__int128)res * base % mod;
        }
        base = (__int128)base * base % mod;
        exponent >>= 1;
    }
    return res;
}

bool bfs(graph& g, vector<int>& color, int start){
    queue<int> q;
    q.push(start);
    color[start] = 0;

    while(!q.empty()){
        int u = q.front(); q.pop();
        for(auto v : g[u]){
            if(color[v] == -1){
                color[v] = color[u] ^ 1;
                q.push(v);
            }
            else if(color[v] == color[u]) return false;
        }
    }
    return true;
}

void solve(){
    int n; cin >> n;
    graph g(n+1);

    for(int i = 1 ; i <= n ; i++){
        int q; cin >> q;
        while(q--){
            int c; cin >> c;
            g[i].pb(c);
        }
    }

    vector<int> color(n+1, -1);
    bool bipartite = true;
    int components = 0;

    for(int i = 1 ; i <= n && bipartite ; i++){
        if(color[i] == -1){
            components++;
            if(!bfs(g, color, i)) bipartite = false;
        }
    }

    if(bipartite){
        exponent = components;
        cout << powmod(2) << nl;
    }
    else cout << 0 << nl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}