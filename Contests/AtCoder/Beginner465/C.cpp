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
    deque<int> d;
    bool front = false;

    rep(i, 0, n){
        int x = i + 1;
        if(front)d.push_front(x);
        else d.push_back(x);
        if(s[i] != 'x') front = !front;
    }

    if(front) for(auto i = d.rbegin() ; i != d.rend(); ++i) cout << *i << ' ';
    else for(auto i = d.begin() ; i != d.end() ; ++i) cout << *i << ' ';
    cout << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}