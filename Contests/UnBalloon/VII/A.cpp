#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

vi colors;
vi answers;
map<int,int> freq;

void dfs(int start, int parent, graph& g){
    freq[colors[start]]++;
    answers[start] = freq.size();

    for(auto& v : g[start]) if(v != parent) dfs(v, start, g);

    freq[colors[start]]--;
    if(freq[colors[start]] == 0) freq.erase(colors[start]);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q; cin >> n >> q;
    colors.resize(n+1);
    answers.resize(n+1);
    graph g(n+1);

    for(int i = 1 ; i <= n ; i++) cin >> colors[i];

    for(int i = 1 ; i < n ; i++){
        int u, v; cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }

    vi queries(q); for(int i = 0 ; i < q ; i++) cin >> queries[i];

    dfs(1, -1, g);

    for(auto& qr : queries) cout << answers[qr] << '\n';
    
    return 0;
}