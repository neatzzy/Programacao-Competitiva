#include <bits/stdc++.h>

using namespace std;

#define vi vector<ll>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n; cin >> n;
    vi v(n);
    ll ans = 0;

    cin >> v[0];
    for(ll i = 1 ; i < n ; i++){
        cin >> v[i];
        if(v[i-1] > v[i]){
            ans += (v[i-1] - v[i]);
            v[i] = v[i-1];
        }
    }
    cout << ans << endl;
    
    return 0;
}