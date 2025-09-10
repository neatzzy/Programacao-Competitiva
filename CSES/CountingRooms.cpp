#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define graph vector<string>

int n, m;

bool isValid(int x, int y, graph& g){
    if(x < 0 or y < 0 or x >= n or y >= m) return false;
    if(g[x][y] == '#') return false;
    return true;
}

void DFS(graph& g, vector<vector<bool>>& visited, int x, int y){
    vi dx = {0, 0, 1, -1};
    vi dy = {1, -1, 0, 0};
    visited[x][y] = true;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(isValid(nx, ny, g) && !visited[nx][ny]){
            DFS(g, visited, nx, ny);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ans = 0;

    cin >> n >> m;
    graph g(n);
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for(int i = 0 ; i < n ; i++){
        cin >> g[i];
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(g[i][j] == '.' && !visited[i][j]){
                DFS(g, visited, i, j);
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}