#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
typedef vector<vi> graph;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    graph g(n+1);

    for(int i = 0 ; i < m ; i++){
        int a, b; cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
    }
    vi color(n+1, -1);

    for(int i = 1; i <= n; ++i){
        if(color[i] != -1) continue;
        queue<int> q;
        color[i] = 0;
        q.push(i);

        while(!q.empty()){
            int u = q.front(); q.pop();
            for(int v : g[u]){
                if(color[v] == -1){
                    color[v] = color[u] ^ 1;
                    q.push(v);
                } else if(color[v] == color[u]){
                    cout << "IMPOSSIBLE";
                    return 0;
                }
            }
        }
    }

    for(int i = 1; i <= n; ++i) cout << color[i] + 1 << " ";

    cout << "\n";

    return 0;
}