#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void solve(){
    ll y, x; cin >> y >> x;
    ll ans, add;

    if(y > x){
        ans = (y-1) * (y-1);
        y & 1 ? add = x : add = 2 * y - x;
    }
    else{
        ans = (x-1) * (x-1);
        !(x & 1) ? add = y : add = 2 * x - y;
    }
    cout << ans + add << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;

    while(t--) solve();
    
    return 0;
}