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

void solve(){
    int n; cin >> n;
    unordered_map<string, string> tempo;
    unordered_map<string, int> gols;

    while(n--){
        string time, tmp;
        int gol;
        cin >> time >> tmp >> gol;
        tempo[time] = max(tmp, tempo[time]);
        if(gol == 1) gols[time]++;
        else gols[time]--;
    }

    priority_queue<pair<int, string>> pq;

    for(auto&[key, val] : gols) pq.push({val, key});

    vector<pair<int, string>> empates;
    int maxGols = pq.top().first;

    while(pq.top().first == maxGols and !pq.empty()){
        empates.pb(pq.top());
        pq.pop();
    }

    if(sz(empates) == 1) cout << empates[0].second << nl;
    else{
        string maisCedo;
        string minTempo = "99:99";

        for(auto&[gol, time] : empates){
            if(tempo[time] < minTempo){
                maisCedo = time;
                minTempo = tempo[time];
            }
        }
        cout << maisCedo << nl;
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