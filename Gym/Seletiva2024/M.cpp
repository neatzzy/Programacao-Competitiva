#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define int long long 
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vi a(n); for(auto &x: a) cin >> x;

    map<int, int> freq;

    for(int x: a){
        for(int i=1; i*i <= x; i++){
            if(x%i == 0){
                freq[i]++;
                if(x/i != i) freq[x/i]++;
            }
        }
    }

    int res = 1;
    for(auto &[chave, val] : freq){
        if(val >= 3) res = max(res, chave);
    }

    vi ind;
    for(int i=0; i<n; i++){
        if(a[i]%res == 0) ind.push_back(i+1);
    }

    for(int i=0; i<3; i++) cout << ind[i] << " ";
    cout << "\n";
    
    return 0;
}