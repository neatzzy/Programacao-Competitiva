#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

const int MOD = 10e9 + 7;

vi dp(10000, -1);

int escada(int start, int finish){
    if(start == finish) return 1;
    if(start > finish) return 0;
    if(dp[start] != -1) return dp[start];

    return dp[start] = ((escada(start+1, finish) % MOD) + (escada(start+2, finish) % MOD)) % MOD;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    cout << escada(1,n) << endl;
    
    return 0;
}