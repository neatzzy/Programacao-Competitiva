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
    string s; cin >> s;

    int ans = 0;

    rep(i, 0, n-1) if(s[i] != s[i+1]) ans++;

    cout << (ans == 1 ? "2\n" : "1\n");
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}