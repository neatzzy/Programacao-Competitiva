#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void solve(){
    int k; cin >> k;
    vector<ll> odds;
    ll sumEven = 0;

    for(int i = 0; i < k; ++i){
        ll x; cin >> x;
        if(!(x & 1)) sumEven += x;
        else odds.pb(x);
    }

    if(odds.empty()){
        cout << 0 << "\n";
        return;
    }

    sort(odds.begin(), odds.end(), greater<ll>());

    int count = (odds.size() + 1) / 2;
    ll sumOdds = 0;
    for(int i = 0; i < count; i++) sumOdds += odds[i];

    cout << sumEven + sumOdds << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;

    while(t--) solve();
    
    return 0;
}