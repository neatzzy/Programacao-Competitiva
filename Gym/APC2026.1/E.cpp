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

void removeChar(string& s, char c, int n){
    int count = 0;
    for (auto it = s.begin(); it != s.end(); ){
        if (*it == c && count < n) {
            it = s.erase(it);
            count++;
        } else {
            ++it;
        }
    }
}

void solve(){
    int n, m; cin >> n >> m;
    string s; cin >> s;
    map<char, int> mp;

    while(m--){
        char c; cin >> c;
        mp[c]++;
    }

    for(auto& [key, val] : mp) removeChar(s, key, val);
    cout << s << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}