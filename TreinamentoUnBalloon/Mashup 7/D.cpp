#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

int kadane(vi v){
    int maxSum = -100000;
    int maxLocal = -100000;

    for(int i = 0; i < v.size(); i++){
        int a = v[i];
        if((a % 2 + 2) % 2 == (v[i - 1] % 2 + 2) % 2) maxLocal = a;
        else maxLocal = max(a, maxLocal + a);
        maxSum = max(maxSum, maxLocal);
    }

    return maxSum;
}

void solve(){
    int n; cin >> n;
    vi v(n);

    for(int i = 0 ; i < n ; i++) cin >> v[i];

    cout << kadane(v) << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}