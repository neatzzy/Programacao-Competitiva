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

// ================= DEBUG TEMPLATE =================
template<typename A, typename B> 
ostream& operator<<(ostream &os, const pair<A, B> &p) { 
    return os << '(' << p.first << ", " << p.second << ')'; 
}

template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> 
ostream& operator<<(ostream &os, const T_container &v) { 
    os << '{'; string sep; 
    for (const T &x : v) os << sep << x, sep = ", "; 
    return os << '}'; 
}

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> 
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

#ifndef ONLINE_JUDGE
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]:", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
// ==================================================


void solve(){
    int n, o; cin >> n >> o;
    int soma = 0;

    while(n--){
        int aux; cin >> aux;
        switch(aux){
        case 1: soma += 2; break;
        case 2: soma += 3; break;
        case 3: soma += 5; break;
        }
    }
    soma -= o;

    cout << (soma > 0 ? soma : 0) << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}