#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b % a, a);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k; cin >> k;

    int sum = 0;

    for(int i = 1 ; i <= k ; i++)
        for(int j = 1 ; j <= k ; j++)
            for(int l = 1 ; l <= k ; l++){
                int gij = gcd(i, j);
                sum += gcd(gij, l);
            }
    
    cout << sum << '\n';
    return 0;
}