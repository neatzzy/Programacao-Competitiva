#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;

    for(int r = 0 ; r < k ; r++){
        int cnt = 0;
        for(int i = r ; i < n ; i += k) if(s[i] == '1') cnt++;
        if(cnt % 2){
            cout << "NO\n"; return; 
        }
    }
    cout << "YES\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}