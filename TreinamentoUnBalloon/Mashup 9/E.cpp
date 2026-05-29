#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

const int mod = 1e9 + 7;
vi fact(1e6 + 1, -1);

int factMod(int n){
    if(fact[n] != -1) return fact[n];
    return fact[n] = (n * factMod(n - 1)) % mod;
}

int powMod(int x, int n){
    int res = 1;

    while(n >= 1){
        if(n & 1){
            res = (res * x) % mod;
            n--;
        }
        else{
            x = (x * x) % mod;
            n /= 2;
        }
    }
    return res;
}


void solve(){
    int a, b; cin >> a >> b;
    cout << factMod(a) * powMod(factMod(b), mod - 2) % mod * powMod(factMod(a - b), mod - 2) % mod << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    fact[0] = 1;
    fact[1] = 1;
    while(t--) solve();
    
    return 0;
}