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
    int k; cin >> k;
    unordered_set<int> primes = {2, 3, 5, 7};
    unordered_set<int> squares = {1, 2, 4, 9};
    string s; cin >> s;

    ll ans = 0;

    for(auto& i : s){
        int n = i - '0';
        if(primes.contains(n) or squares.contains(n)) ans++;
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