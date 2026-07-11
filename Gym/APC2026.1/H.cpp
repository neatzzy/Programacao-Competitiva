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
    unordered_map<int, int> freq;

    while(n--){
        int aux; cin >> aux;
        freq[aux]++;
    }

    vector<int> counts;
    for(auto& [key, val] : freq)
        counts.pb(val);

    sort(all(counts));

    int ans = 0;
    int maxCount = counts.back();

    for(int q = 1; q <= maxCount; q++){
        int m = counts.end() - lower_bound(all(counts), q);
        ans = max(ans, m * q);
    }

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
