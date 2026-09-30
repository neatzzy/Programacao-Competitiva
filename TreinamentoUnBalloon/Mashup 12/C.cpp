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
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for(int i = a ; i < (b) ; ++i)

const int INF = 1e9;
const ll LINF = 1e18;

void solve(){
    int n, k; cin >> n >> k;
    vi left(n), right(n);
    for(auto& i : left) cin >> i;
    for(auto& i : right) cin >> i;

    int ans = 0;
    vi mins;

    rep(i, 0, n){
        ans += max(left[i], right[i]);
        mins.pb(min(left[i], right[i]));
    }

    sort(rall(mins));

    rep(i, 0, k-1) ans += mins[i];

    cout << ans + 1 << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}