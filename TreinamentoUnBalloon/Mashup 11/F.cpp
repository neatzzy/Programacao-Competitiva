#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q; cin >> n >> q;
    vi v(n+1);

    for(int i = 1 ; i <= n ; i++) cin >> v[i];

    while(q--){
        int start, qty; cin >> start >> qty;
        int end = start;
        while(qty--){
            end = v[start];
            start = end;
        }
        cout << end << '\n';
    }

    
    return 0;
}