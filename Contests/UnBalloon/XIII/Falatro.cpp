#include <bits/stdc++.h>

using namespace std;

#define int long long
#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
typedef vector<vector<int>> graph;


int n, m;

int bfs(int node, graph& g){
  vi neighbors = g[node];

  if(neighbors.empty()) return 1;

  vi dists(n+1, -1);
  queue<int> q;

  int ans, start, u, w;

  ans = LLONG_MAX;

  for(int i = 0 ; i < neighbors.size() ; i++){
    start = neighbors[i];

    dists.assign(n+1, -1);

    while(!q.empty()){
      q.pop();
    }

    dists[start] = 0;
    q.push(start);

    while(!q.empty()){
      u = q.front(); q.pop();
      for(int v : g[u]){
        if(v == node) continue;
        if(dists[v] == -1){
          dists[v] = dists[u] + 1;
          q.push(v);
        }
      }
    }
    for(int j = i + 1 ; j < neighbors.size() ; j++){
      if(dists[neighbors[j]] != -1) ans = min(ans, dists[neighbors[j]] + 2);
    }
  }
  if(ans == LLONG_MAX) return 1;
  return ans;
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> m;
  graph g(n+1);
  vi weights(n+1, -1);

  for(int i = 0 ; i < m ; i++){
    int a, b; cin >> a >> b;
    g[a].pb(b);
    g[b].pb(a);
  }

  ll ans = 0;

  for(int i = 1 ; i <= n ; i++){
    ans += i * bfs(i, g);
  }

  cout << ans << endl;
  
  return 0;
}