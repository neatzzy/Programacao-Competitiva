#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

int countBad(int n){
    int ans = 0;
    vi badFactors = {2, 3, 5, 7};
    for(int i = 1 ; i < (1 << 4) ; i++){
        int mul = 1, bits = 0;
        for(int j = 0 ; j < 4 ; j++){
            if(i & (1 << j)){
                mul *= badFactors[j];
                bits++;
            }
        }
        if(bits & 1) ans += n / mul;
        else ans -= n / mul;
    }
    return ans;
}


void solve(){
    int l, r; cin >> l >> r;
    cout << (r - l + 1) - (countBad(r) - countBad(l - 1)) << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}