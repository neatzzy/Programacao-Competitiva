#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void solve(){
    int n; cin >> n;

    for(int i = 1 ; i <= n ; i++){
        cout << '#';
        
        if(i <= (n / 2) + 1){
            for(int j = 2 ; j < n ; j++){
                if((i == j) or (j == n-i+1)) cout << '#';
                else cout << '.';
            }
        }
        else{
            for(int j = 2 ; j < n ; j++){
                cout << '.';
            }
        }

        cout << '#';
        cout << '\n';
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