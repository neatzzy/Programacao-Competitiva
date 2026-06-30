#include <bits/stdc++.h>

using namespace std;

using vi = vector<long long>;
using ll = long long;
#define int long long
using ii = pair<int,int>;
using graph = vector<vector<int>>;

#define nl '\n'
#define pb push_back
#define abs llabs
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for(int i = a ; i < (b) ; ++i)

const int INF = 1e9;
const ll LINF = 1e18;

void solve(){
    int n; cin >> n;
    vi ratos(n), buracos(n+1);
    for(auto& i : ratos)   cin >> i;
    for(auto& i : buracos) cin >> i;

    vi prefix(n+1, 0), suffix(n+1, 0);

    for(int i = 0; i < n; i++)
        prefix[i+1] = prefix[i] + abs(ratos[i] - buracos[i]);

    for(int i = n-1; i >= 0; i--)
        suffix[i] = suffix[i+1] + abs(ratos[i] - buracos[i+1]);

    int ans = LINF;
    for(int k = 0; k <= n; k++) ans = min(ans, prefix[k] + suffix[k]);

    cout << ans << nl;
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}