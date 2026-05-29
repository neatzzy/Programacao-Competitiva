#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
typedef vector<vector<int>> graph;

void solve(){
    int n; cin >> n;
    string a, b; cin >> a >> b;

    if(a == b){
        cout << 0 << '\n';
        return;
    }

    int aA = 1, aB = 1;

    for(int i = 1 ; i < n ; i++){
        if(a[0] != a[i]) aA = 0;
        if(b[0] != b[i]) aB = 0;
    }

    aA or aB ? cout << 1 : cout << 0;
    cout << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}