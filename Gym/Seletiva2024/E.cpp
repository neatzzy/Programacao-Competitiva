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

vector<string> duval(const string& s){
    int n = sz(s);
    int i = 0;
    vector<string> fac;
    while(i < n){
        int j = i +1 , k = i;
        while(j < n and s[k] <= s[j]){
            if(s[k] < s[j]) k = i;
            else k++;
            j++;
        }
        while(i <= k){
            fac.pb(s.substr(i, j-k));
            i += j - k;
        }
    }
    return fac;
}

void solve(){
    string s; cin >> s;
    vector<string> fac = duval(s);

    cout << '|';
    for(auto& i : fac) cout << i << '|';
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