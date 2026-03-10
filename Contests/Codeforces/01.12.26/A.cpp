#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void solve(){
    int n; cin >> n;

    if(n==2) cout << 2 << '\n';
    else if(n == 3) cout << 1 << '\n';
    else if(!(n%2) or !(n%3)) cout << 0 << '\n';
    else{
        ll ans = min(abs((n/2) - (n%2)), abs((n/3) - (n%3)));
        cout << ans << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}