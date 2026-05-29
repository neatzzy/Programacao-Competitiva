#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
typedef vector<vector<int>> graph;

void solve(){
    int n, k; cin >> n >> k;
    set<int> s;

    for(int i = 1 ; i <= n ; i++){
        int aux; cin >> aux;
        if(aux){
            int target = abs(k - i);
            if(s.find(target) == s.end()){
                s.insert(i);
            }
            else{
                cout << "No\n";
                return;
            }
        }
    }

    if(s.empty()){
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}