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
    int h, iv, c, d; 
    cin >> h >> iv >> c >> d;

    int numIasmim = (h + iv - 1) / iv;

    int numCarol;
    if(c >= h) numCarol = 1;
    else if(c <= d) numCarol = LINF;
    else {
        int prog = c - d;
        numCarol = 1 + (h - c + prog - 1) / prog;
    }

    if(numIasmim == numCarol) cout << "Empate\n";
    else if(numIasmim < numCarol) cout << "Iasmim\n";
    else cout << "Carol\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}