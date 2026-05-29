#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
typedef vector<vector<int>> graph;

void solve(){
    int ans = 0;
    int n, k; cin >> n >> k;
    vi v(n);
    for(int i = 0 ; i < n ; i++) cin >> v[i];

    sort(v.begin(), v.end());
    
    for(int i = n-1 ; i >= 0 ; i--){
        if(k > 0){
            ans += max((v[i] - 5), 0LL);
            k--;
            continue;
        }
        ans += max((v[i] - 10), 0LL);
    }

    cout << ans << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}