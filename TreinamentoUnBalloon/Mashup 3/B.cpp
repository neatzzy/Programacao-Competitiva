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

    int n; cin >> n;

    for(int i = 0 ; i < n/2 ; i++){
        for(int j = 1 ; j <= n ; j++){
            abs(j - ((n/2) + 1)) <= i ? cout << 'D' : cout << '*';
        } cout << '\n';
    }

    for(int i = 0 ; i < n ; i++) cout << 'D'; cout << '\n';

    for(int i = n/2 ; i > 0 ; i--){
        for(int j = n ; j > 0 ; j--){
            abs(j - ((n/2) + 1)) >= i ? cout << '*' : cout << 'D';
        } cout << '\n';
    }
    
    return 0;
}