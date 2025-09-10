#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define vb vector<bool>
typedef vector<vector<int>> graph;

void DFS(int start, graph& g, vb& visited){
    visited[start] = true;
    for(const auto adj : g[start]){
        if(!visited[adj]) DFS(adj, g, visited);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m; cin >> n >> m;
    vi roads;
    vb visited (n+1, false);
    graph g(n+1);

    for(int i = 0 ; i < m ; i++){
        int a, b; cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
    }
    for(int i = 1 ; i <= n ; i++){
        if(!visited[i]){
            roads.pb(i);
            DFS(i, g, visited);
        }
    }
    cout << roads.size() - 1 << "\n";
    for(size_t i = 0; i + 1 < roads.size(); ++i){
        cout << roads[i] << " " << roads[i+1] << "\n";
    }
    
    return 0;
}