#include <bits/stdc++.h>

using namespace std;

#define vi vector<ll>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<ll,ll>
typedef vector<vector<ii>> graph;

ll n, m;

vi dijkstra(graph& g){
    priority_queue<ii, vector<ii>, greater<ii>> pq;
    vi dist(n+1, LLONG_MAX);

    pq.push({0, 1});
    dist[1] = 0;

    while(!pq.empty()){
        ii cur = pq.top(); pq.pop();
        ll d = cur.first;
        ll u = cur.second;
        if(d != dist[u]) continue;
        for(const ii& aux : g[u]){
            ll v = aux.first;
            ll w = aux.second;
            if(dist[v] > d + w){
                dist[v] = d + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    graph g(n+1);

    for(ll i = 0 ; i < m ; i++){
        ll a, b, c; cin >> a >> b >> c;
        g[a].pb({b, c});
    }

    vi dist = dijkstra(g);

    for(ll i = 1 ; i <= n ; i++) cout << dist[i] << " ";
    cout << "\n";
    
    return 0;
}