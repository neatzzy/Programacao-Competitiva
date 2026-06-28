#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;
using ll = long long;
#define int long long
using ii = pair<int,int>;
using graph = vector<vector<int>>;

#define nl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for(int i = a ; i < (b) ; ++i)

const int INF = 1e9;
const ll LINF = 1e18;
map<int, int> m;
void solve(){
    int h, b;
    int f = 0;
    cin >> h >> b;
    int vez = 1;
if(((h % 2) == 0) && ((b%2) == 0)){
    cout << "-1\n";
}
else{
    int k = h;
    while(k != 1){
        if(k == 1){
            break;
        }
        m[k]++;
        if(m[k] > 1){
            f = 1;
            break;
        }
        k = (k * h);
        if(k >= b){
            k = (k % b) ;
        }
        vez++;
    }   
    if(f != 1){
    cout << vez << nl;
}
else{
    cout << "-1\n";
}
}
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}