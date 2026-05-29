#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

void solve(){
    int n; cin >> n;
    int x = 1 , y = n - 1;

    for(int i = 2 ; i * i <= n ; i++){
        if(n % i == 0){
            x = max(x, max(i, n/i));
            y = n - x;
        }
    }
    
    cout << x << ' ' << y << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}