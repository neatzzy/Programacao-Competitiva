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

    int n, q; cin >> n;
    vi v(n);

    for(int i = 0 ; i < n ; i++) cin >> v[i];

    cin >> q;

    while(q--){
        int op, k; cin >> op >> k;
        k--;
        if(op == 1){
            int x; cin >> x;
            v[k] = x;
        }
        else if(op == 2){
            cout << v[k] << '\n';
        } 
    }
    
    return 0;
}