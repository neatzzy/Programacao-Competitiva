#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define vb vector<bool>
typedef vector<vector<int>> graph;

int m, n;

bool bfs(int start, graph& g, vb& visited, vi& parent){
    queue<int> q;

    visited[start] = true;
    q.push(start);
    parent[start] = -1;

    if(start == n) return true;

    while(!q.empty()){
        int aux = q.front();
        q.pop();

        for(const auto x : g[aux]){
            if(!visited[x]){
                visited[x] = true;
                parent[x] = aux;
                q.push(x);
                if(x == n) return true;
            }
        }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    vb visited(n+1, false);
    graph g(n+1);

    for(int i = 0 ; i < m ; i++){
        int a, b; cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
    }

    vi parent(n+1, -1);

    if(bfs(1, g, visited, parent)){
        stack<int> result;
        int aux = n;
        while(aux != -1){
            result.push(aux);
            aux = parent[aux];
        }
        cout << result.size() << "\n";
        while(!result.empty()){
            cout << result.top() << " ";
            result.pop();
        }
        cout << "\n";
    }
    else {
        cout << "IMPOSSIBLE\n";
    }

    
    return 0;
}   
