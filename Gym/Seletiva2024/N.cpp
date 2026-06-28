#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x; cin >> n >> x;

    vi dp(n+1, -1);


    auto rec = [&](auto self, int t) -> int {
        if(t == 1) return dp[t] = x;
        if(t == 2) return dp[t] = x - 6;
        if(dp[t] != -1) return dp[t];
        return dp[t] = ((self(self, t-1) + self(self, t-2)) / 2) - ((3 * t) % 10); 
    };

    cout << rec(rec, n) << "\n";
    return 0;
}