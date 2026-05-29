#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<ii> boxes(n);
    vi req(m);
    
    for(int i = 0 ; i < n ; i++){
        int a; cin >> a;
        boxes[i] = mp(a,i);
    }
    
    for(int i = 0 ; i < m ; i++){
        cin >> req[i];
    }
    
    sort(req.begin(), req.end());

    multiset<int> avl;
    for(auto& [key, val] : boxes) avl.insert(key);

    long long ans = 0;

    for(int i = 0 ; i < m ; i++){
        auto it = avl.lower_bound(req[i]);
        if(it == avl.end()){
            cout << -1 << '\n';
            return 0;
        }
        ans += *it;
        avl.erase(it);
    }
    
    cout << ans << '\n';
    return 0;
}