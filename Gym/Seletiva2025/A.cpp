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
    double m; cin >> m;

    double a;

    while(scanf("%lf", &a) != EOF){
        if(a < (m * 0.95)) cout << "Calma que ainda tem o returno.\n";
        else if(a > (m * 1.05)) cout << "Athelera, fera!\n";
        else cout << "Boa! Merece cafe e pao de queijo.\n";
    }
}

signed main(){

    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}