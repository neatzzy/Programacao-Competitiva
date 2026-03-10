#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define vb vector<bool>
typedef vector<vi> graph;

int n, m;
vi path;

bool dfs(graph& g, int v, int parentNode, vb& visited, vi& parent){
    visited[v] = true;
    parent[v] = parentNode;

    for(const int to : g[v]){
        if(to == parentNode) continue;

        if(!visited[to]){
            if(dfs(g, to, v, visited, parent)) return true;
        } else {
            path.clear();
            path.pb(to);
            int aux = v;
            while(aux != to){
                path.pb(aux);
                aux = parent[aux];
            }
            path.pb(to);
            return true;
        }
    }

    return false;
}

bool isCyclical(graph& g){
    vb visited(n+1, false);
    vi parent(n+1, -1);

    for(int i = 1 ; i <= n ; i++){
        if(!visited[i] && dfs(g, i, -1, visited, parent)) return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    graph g(n+1);

    for(int i = 0 ; i < m ; i++){
        int a, b; cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
    }

    if(isCyclical(g)){
        int tam = path.size();
        cout << tam << "\n";
        for(int i = 0 ; i < tam ; i++){
            cout << path[i] << " ";
        }
    }
    else cout << "IMPOSSIBLE";
    cout << "\n";
    
    return 0;
}