#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

vi primes = {2, 3, 5, 7};

void solve(){
    int l, r; cin >> l >> r;
    int ans = 0;
    for(int i = l ; i <= r ; i++){
        bool check = true;
        for(auto& p : primes){
            if(i % p == 0){
                check = false;
                break;
            }
        }
        if(check) ans++;
    }
    cout << ans << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}