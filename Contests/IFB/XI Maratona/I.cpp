#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

void solve(unsigned int n){
    int count = 0;

    while(n != 1){
        n = popcount(n);
        count++;
    }

    cout << count << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned int t;
    while(cin >> t and t != 0) solve(t);
    
    return 0;
}