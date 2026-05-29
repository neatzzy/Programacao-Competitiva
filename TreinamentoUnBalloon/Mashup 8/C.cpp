#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    unordered_map<int, int> socks;
    socks.reserve(n);

    while(n--){
        int n; cin >> n;
        socks[n]++;
    }

    int ans = 0;
    for(auto& [key, val] : socks){
        ans += val / 2;
    }
    
    cout << ans << '\n';
    
    return 0;
}