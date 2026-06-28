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
    string s1, s2; cin >> s1 >> s2;
    map<char, int> m1, m2;

    for(auto& i : s1) m1[i]++;
    for(auto& i : s2) m2[i]++;

    for(auto& [key, val] : m2){
        if(m1[key] != m2[key]) cout << key << '\n';
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}