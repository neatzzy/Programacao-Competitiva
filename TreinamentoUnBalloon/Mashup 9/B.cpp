#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
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
    vi a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    
    int ans = 0;
    for(int l = 0; l < n; l++){
        int soma = 0;
        for(int r = l; r < n; r++){
            soma += a[r];
            bool valid = true;
            for(int i = l; i <= r; i++){
                if(soma % a[i] == 0){
                    valid = false;
                    break;
                }
            }
            if(valid){
                ans++;
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}