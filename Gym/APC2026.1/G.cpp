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
    int n, k; cin >> n >> k;
    string s; cin >> s;

    int uns = 0;
    int res = 0;

    rep(i, 0, k) uns += (s[i] == '1');

    if(uns * 2 >= k) res++;

    rep(i, k, n){
        uns += (s[i] == '1');
        uns -= (s[i - k] == '1');
        if(uns * 2 >= k) res++;
    }

    cout << res << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}