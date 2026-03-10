#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void solve(){
    string a, b;
    cin >> a >> b;

    int pA = 0, pB = 0, nA = 0, nB = 0;
    int sA = a.size(), sB = b.size();

    for(int i = sA-1; i >= 0 and a[i] != 'P' ; i--){
        nA++;
    }
    for(int i = sB-1; i >= 0 and b[i] != 'P' ; i--){
        nB++;
    }

    for(int i = 0 ; i < sA ; i++){
        if(a[i] == 'P') pA++;
    }
    for(int i = 0 ; i < sB ; i++){
        if(b[i] == 'P') pB++;
    }

    if(pA == pB and nA == nB) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}