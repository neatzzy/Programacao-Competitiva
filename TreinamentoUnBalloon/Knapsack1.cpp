#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

int knapsack(int w, vector<ii>& items){
    int n = items.size();
    vector<vi> dp(n+1, vi(w+1, 0));

    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j <= w ; j++){
            if(items[i-1].first > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-items[i-1].first] + items[i-1].second);
        }
    }

    return dp[n][w];
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, w; cin >> n >> w;

    vector<ii> items(n);

    for(int i = 0 ; i < n ; i++){
        cin >> items[i].first >> items[i].second;
    }

    cout << knapsack(w, items) << '\n';
    
    return 0;
}