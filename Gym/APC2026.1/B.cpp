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

void solve(){
    int x, y; cin >> x >> y;
    int res;
    if(x % y == 0) res = x * y;
    else res = x + y;
    int a, j; cin >> a >> j;
    if(res == a) cout << "artu\n";
    else if (res == j) cout << "joao\n";
    else cout << "empate\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}