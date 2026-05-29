#include <bits/stdc++.h>

using namespace std;

#define vi vector<long long>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
typedef vector<vector<int>> graph;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k; 
    cin >> n >> k;
    vi v(n+1, 0);
    for(int i = 1 ; i <= n ; i++){
        cin >> v[i];
    }

    int minSum = 0;
    int ans = 1;

    for(int i = 1 ; i <= k ; i++){
        minSum += v[i];
    }
    
    int newSum = minSum;
    
    for(int i = 2 ; i <= n - k + 1 ; i++){
        newSum -= v[i-1]; newSum += v[i+k-1];
        if(newSum < minSum){
            ans = i; minSum = newSum;
        }
    }

    cout << ans << "\n";
    
    return 0;
}