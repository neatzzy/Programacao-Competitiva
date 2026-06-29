#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;
using ll = long long;
//#define int long long
using ii = pair<int,int>;
using graph = vector<vector<int>>;

#define nl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for(int i = a ; i < (b) ; ++i)

const int INF = 1e9;
const ll LINF = 1e18;

vi findSquares(int limit){
    vector<bool> isSquare(limit + 1, false);

    for(int i = 2 ; i * i <= limit ; i++){
        isSquare[i*i] = true;
    }

    for(int i = 2 ; i * i <= limit ; i++){
        if(!isSquare[i*i]) continue;

        for(int j = 2 * i ; j * j <= limit ; j += i){
            isSquare[j * j] = false;
        }
    }

    vi res;
    for(int i = 2 ; i * i <= limit ; i++){
        if(isSquare[i*i]) res.pb(i*i);
    }

    return res;
}

void solve(){
    int n; cin >> n;
    vi v(n);
    for(auto& i : v) cin >> i;

    vi squares = findSquares(*max_element(all(v)));

    int immunes = 0;
    vi immunePos;

    for(int i = 0 ; i < n ; i++){
        int num = v[i];
        bool immune = true;

        for(int j = 0 ; j < sz(squares) and squares[j] <= num ; j++){
            if(num % squares[j] == 0){
                immune = false;
                break;
            }
        }
        if(immune){
            immunes++;
            immunePos.pb(i + 1);
        }
    }
    cout << immunes << nl;
    for(auto& i : immunePos) cout << i << ' ';
    cout << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}