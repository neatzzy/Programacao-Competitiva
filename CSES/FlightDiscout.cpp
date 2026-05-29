#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<ii>> graph;

vi djikstra(graph& g){
    int V = g.size();
    vi dist(V, LLONG_MAX);
    dist[1] = 0;
    vector<bool> visited(V, false);

    priority_queue<ii, vector<ii>, greater<ii>> pq;
    pq.push({0, 1});

    while(!pq.empty()){
        auto [d, u] = pq.top();
        pq.pop();

        if(visited[u]) continue;
        visited[u] = true;

        for(const auto& a : g[u]){
            int v = a.first;
            int w = a.second;

            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    graph g(n*2 + 1);

    for(int i = 0 ; i < m ; i++){
        int a, b, c; cin >> a >> b >> c;
        g[a].pb({b, c});
        g[a+n].pb({b+n, c});
        g[a].pb({b+n, c/2});
    }

    vi dist = djikstra(g);

    cout << min(dist[n], dist[2*n]) << '\n';

    return 0;
}