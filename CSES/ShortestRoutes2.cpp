#include <bits/stdc++.h>

using namespace std;

#define vi vector<long long>
#define ll long long
#define pb push_back
#define mp make_pair
typedef vector<vi> graph;

int n, m;

void floydWarshall(graph& g){
    for(int k = 1 ; k <= n ; k++){
        for(int i = 1; i <= n ; i++){
            for(int j = 1 ; j <= n ; j++){
                if(g[i][k] != LLONG_MAX && g[k][j] != LLONG_MAX) g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
            }
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int q;

    cin >> n >> m >> q;
    graph g(n+1, vi(n+1, LLONG_MAX));
    for(int i = 1; i <= n; i++) g[i][i] = 0;

    for(int i = 0 ; i < m ; i++){
        ll a, b, c; cin >> a >> b >> c;
        if (g[a][b] > c) g[a][b] = c;
        if (g[b][a] > c) g[b][a] = c;
    }

    floydWarshall(g);
    for(int i = 0 ; i < q ; i++){
        int start, end; cin >> start >> end;
        cout << ((g[start][end] == LLONG_MAX)? -1 : g[start][end]) << "\n";
    }
    return 0;
}