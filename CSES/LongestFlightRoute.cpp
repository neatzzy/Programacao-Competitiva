#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

vector<vi> dp(10001, vi(10001, -1));
int n;

int dfs(graph &g, int start){
    if(start == n) return 1;
    int ans = LLONG_MIN;
    for(auto& v : g[start]) ans = max(ans, dfs(g, v)+1);
    return ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m; cin >> n >> m;
    graph g(n+1);

    for(int i = 0 ; i < m ; i++){
        int a, b; cin >> a >> b;
        g[a].pb(b);
    }
    


    
    return 0;
}