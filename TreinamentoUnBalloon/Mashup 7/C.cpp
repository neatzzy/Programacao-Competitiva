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
    if(n < k){
        cout << 0 << "\n";
        return;
    }

    int curW = 0;
    for(int i = 0; i < k; i++) if(s[i] == 'W') curW++;
    int minRecolors = curW;
    if(minRecolors == 0){ 
        cout << 0 << '\n'; return;
    }

    for(int i = 1; i <= n - k; i++){
        if(s[i-1] == 'W') curW--;
        if(s[i+k-1] == 'W') curW++;
        minRecolors = min(minRecolors, curW);
        if(minRecolors == 0) break;
    }

    cout << minRecolors << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}