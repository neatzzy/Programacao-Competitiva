#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vi v(n+2);

    for(int i = 1 ; i <= n ; i++) cin >> v[i];

    int m; cin >> m;
    while(m--){
        int bird, wire; cin >> wire >> bird;
        v[wire]--;
        int left = bird - 1;
        int right = v[wire] - left;
        v[wire-1] += left;
        v[wire+1] += right;
        v[wire] = 0;
    }

    for(int i = 1 ; i <= n ; i++) cout << v[i] << ' ';
    cout << '\n';
    
    return 0;
}