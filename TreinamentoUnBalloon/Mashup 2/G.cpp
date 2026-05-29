#include <bits/stdc++.h>
 
using namespace std;
 
#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define usi unordered_set<int>
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;
 
int factors(int n){
    int ans = 1;
 
    if(n % 2 == 0){
        ans *= 2;
        while(n % 2 == 0) n /= 2;
    }
 
    for(int i = 3 ; i * i <= n ; i += 2){
        if(n % i == 0){
            ans *= i;
            while(n % i == 0) n /= i;
        }
    }
    ans *= n;
 
    return ans;
}
 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int a, b; cin >> a >> b;
    int div = gcd(a, b);
    a /= div; b /= div;
 
    if(b == 1){
        cout << "2\n";
        return 0;
    }
 
 
    cout << factors(b) << "\n";
    
    return 0;
}