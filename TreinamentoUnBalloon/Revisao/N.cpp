#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unordered_map<int,int> m;
    m.reserve(1e6);

    int q; cin >> q;
    while(q--){
        int op; cin >> op;
        if(op == 1){
            int k; cin >> k;
            auto it = m.find(k);
            cout << (it != m.end() ? it->second : 0) << "\n";
        }
        else{
            int k, v; cin >> k >> v;
            m[k] = v;
        }
    }
    return 0;
}