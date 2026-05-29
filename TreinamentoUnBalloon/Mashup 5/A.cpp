#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

void dfs(graph& g, int start, int depth, vector<bool> visited, vi dist){
visited[start] = true;
dist[start] = depth;

for(auto a : g[start]){
    if(!visited[a]) return dfs(g, a, depth + 1, visited, dist);
}
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    graph g(n+1);

    for(int i = 1 ; i <= n ; i++){
        int j; cin >> j;
        if(j != 1) g[j].pb(i);
    }

    int ma = -1;

    for(int i = 1 ; i <= n ; i++){
        vector<bool> visited (100000, false);
        vi dist (n+1, 0);
        dfs(g, 0, 0, visited, dist);
        ma = max(ma, *max_element(dist.begin(), dist.end()));
    }

    cout << ma << '\n';
    
    return 0;
} 