#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define eb emplace_back
#define mp make_pair
#define ii pair<int,int>
typedef vector<string> grafo;

int n, m, k;
int totalDots = 0;
int targetKeep = 0;
vector<pair<int,int>> kept;

void dfs(int x, int y, grafo& g, vector<vector<bool>>& vis){
    if(x < 0 || x >= n || y < 0 || y >= m) return;
    if(vis[x][y]) return;
    if(g[x][y] != '.') return;
    if(kept.size() >= targetKeep) return; 
    vis[x][y] = true;
    kept.eb(x, y);
    dfs(x + 1, y, g, vis);
    dfs(x - 1, y, g, vis);
    dfs(x, y + 1, g, vis);
    dfs(x, y - 1, g, vis);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    if(!(cin >> n >> m >> k)) return 0;

    grafo g(n);
    for(int i = 0; i < n; i++){
        cin >> g[i];
        for(char c : g[i]) if(c == '.') totalDots++;
    }

    if(totalDots == 0){
        for(const auto& row : g) cout << row << '\n';
        return 0;
    }

    targetKeep = totalDots - k;
    if(targetKeep <= 0){
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(g[i][j] == '.') g[i][j] = 'X';
        for(const auto& row : g) cout << row << '\n';
        return 0;
    }

    vector<vector<bool>> vis(n, vector<bool>(m, false));
    bool run = false;
    for(int i = 0; i < n && !run; i++){
        for(int j = 0; j < m && !run; j++){
            if(g[i][j] == '.'){
                dfs(i, j, g, vis);
                run = true;
            }
        }
    }

    vector<vector<bool>> keep(n, vector<bool>(m, false));
    for(auto &p : kept) keep[p.first][p.second] = true;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(g[i][j] == '.' && !keep[i][j]){
                g[i][j] = 'X';
            }
        }
    }

    for(const auto& row : g) cout << row << '\n';
    return 0;
}
