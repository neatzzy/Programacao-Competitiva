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

    vector<int> cnt(26, 0);
    for(char c : s) cnt[c - 'a']++;

    int odd = 0;
    for(int x : cnt) odd += (x & 1);

    int need = odd - ((n - k) & 1);
    cout << (k >= need ? "YES" : "NO") << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}