#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

ll calc(int startPos, vi &posA){
    ll cost = 0;
    for(int i = 0; i < posA.size(); i++){
        cost += abs(posA[i] - (startPos + 2*i));
    }
    return cost;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string s; cin >> s;
    vi posA;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A') posA.pb(i);
    }

    cout << min(calc(0, posA), calc(1, posA)) << "\n";
    
    return 0;
}