#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
typedef vector<vector<int>> graph;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    int ans = 1;
    vi v(n), pos(n+1);

    for(int i = 0 ; i < n ; i++) cin >> v[i];
    for(int i = 0 ; i < n ; i++) pos[v[i]] = i;
    for(int i = 1 ; i < n ; i++) if(pos[i+1] < pos[i]) ans++;

    cout << ans << '\n';
    
    return 0;
}