#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

const int MOD = 1000000007;

int powMod(int x, int n){
    int res = 1;

    while(n >= 1){
        if(n&1){
            res = (res * x) % MOD;
            n--;
        }
        else{
            x = (x * x) % MOD;
            n >>= 1;
        }
    }
    return res;
}

void solve(){
    int a, b; cin >> a >> b;
    cout << powMod(a, b) << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}