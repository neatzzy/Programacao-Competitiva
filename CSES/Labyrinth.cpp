#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
typedef vector<string> graph;
typedef vector<vector<bool>> checkM;

int n, m;
ii start, ending;
stack<char> path;
graph steps;

bool isValid(int x, int y, graph& g, checkM& visited){
    if(x < 0 or y < 0 or x >= n or y >= m) return false;
    if(g[x][y] == '#' or visited[x][y]) return false;
    return true;
}

void backtrack(int x, int y, graph& g){
    if(steps[x][y] != 'X'){
        char ch = steps[x][y];
        path.push(ch);

        switch (ch){
        case 'U':
            backtrack(x+1, y, g);
            break;
        
        case 'D':
            backtrack(x-1, y, g);
            break;

        case 'L':
            backtrack(x, y+1, g);
            break;

        case 'R':
            backtrack(x, y-1, g);
            break;
        }
    }
}

bool bfs(int x, int y, graph&g, checkM& visited){
    vi dx = {0, 0, -1, 1};
    vi dy = {-1, 1, 0, 0};

    steps[x][y] = 'X';
    bool finished = false;

    queue<ii> q;
    q.push({x, y});

    while(!q.empty()){
        ii aux = q.front();
        x = aux.first;
        y = aux.second;
        q.pop();

        if(g[x][y] == 'B'){
            finished = true;
            break;
        }
        visited[x][y] = true;

        for(int i = 0 ; i < 4 ; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(isValid(nx, ny, g, visited)){
                visited[nx][ny] = true;
                q.push({nx, ny});
                switch (i){
                case 0: 
                    steps[nx][ny] = 'L';
                    break;
                case 1: 
                    steps[nx][ny] = 'R';
                    break;
                case 2: 
                    steps[nx][ny] = 'U';
                    break;
                case 3: 
                    steps[nx][ny] = 'D';
                    break;
                }
            }
        }
    }
    if(finished){
        backtrack(x, y, g);
        return true;
    }
    else return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    graph g(n);
    steps = graph(n);
    checkM visited(n, vector<bool>(m, false));
    for (int i = 0; i < n; ++i){
        cin >> g[i];
        for(int j = 0 ; j < m ; j++){
            if(g[i][j] == 'A') start = {i, j};
            else if(g[i][j] == 'B') ending = {i, j};
            
        }
    }

    steps = g;

    if(bfs(start.first, start.second, g, visited)){
        cout << "YES" << "\n" << path.size() << "\n";
        while(!path.empty()){
            cout << path.top();
            path.pop();
        }
    }
    else cout << "NO";

    cout << "\n";
    
    return 0;
}