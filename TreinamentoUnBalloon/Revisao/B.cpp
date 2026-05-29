#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
typedef vector<vector<int>> graph;

void solve(){
    int n, m; cin >> n >> m;
    string s; cin >> s;

    vi alpha(26, 0);
    vi delta(n);

    for(int i = 0 ; i < m ; i++){
        int p; cin >> p;
        delta[p-1]++;
    }
    for(int i = n - 1 ; i > 0 ; i--){
        delta[i-1] += delta[i];
    }

    for(int i = 0 ; i < n ; i++){
        alpha[s[i] - 'a'] += delta[i];
        alpha[s[i] - 'a']++;
    }

    for(auto a : alpha){
        cout << a << ' ';
    }
    cout << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}