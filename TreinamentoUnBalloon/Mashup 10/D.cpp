#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

vector<vi> dp(20001, vi(20001, -1));
unordered_map<int, int> colorCount;

int solve(int i, int k, int m, vector<ii> &gems){
    if(m == 0) return 0;
    if(i == 0) return LLONG_MIN;
    if(dp[i][m] != -1) return dp[i][m];

    int option1 = solve(i-1, k, m, gems);
    int option2 = LLONG_MIN;
    int color = gems[i-1].first;
    int value = gems[i-1].second;

    if(colorCount[color] < k){
        colorCount[color]++;
        option2 = value + solve(i-1, k, m-1, gems);
        colorCount[color]--;
    }
    
    return dp[i][m] = max(option1, option2);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, m; cin >> n >> m >> k;
    vector<ii> gems(n);
    for(int i = 0 ; i < n ; i++) cin >> gems[i].first >> gems[i].second;
    cout << solve(n, k, m, gems) << endl;
    
    return 0;
}
