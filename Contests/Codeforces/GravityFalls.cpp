#include <bits/stdc++.h>

using namespace std;

#define vi vector<string>

void solve(){
    int n; cin >> n;

    vector<vi> v(n);

    for(int i = 0 ; i < n ; i++){
        int k; cin >> k;
        for(int j = 0 ; j < k ; j++){
            int aux; cin >> aux;
            v[i].push_back(to_string(aux));
        }
    }

    sort(v.begin(), v.end());

    vi ans = v[0];
    int j = v[0].size();

    for(int i = 1 ; i < n ; i++){
        while(j < v[i].size()){
            ans.push_back(v[i][j]);
            j++;
        }
    }

    int tam = ans.size();

    for(int i = 0 ; i < tam ; i++) cout << ans[i] << " ";
    cout << "\n";
}

int main(){
    int t; cin >> t;

    while(t--) solve();

    return 0;
}