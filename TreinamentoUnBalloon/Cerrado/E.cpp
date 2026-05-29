#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

unordered_map<int, int> occurence;
vi spf;
int n;

void sieve(int limit){
    spf.assign(limit + 1, 1);
    spf[0] = 0;
    if(limit >= 1) spf[1] = 1;

    for(int i = 2 ; i <= limit ; i++){
        if(spf[i] == 1){
            for(int j = i ; j <= limit ; j += i){
                if(spf[j] == 1) spf[j] = i;
            }
        }
    }
}

void getOcurrence(const vi& v){
    int mx = *max_element(v.begin(), v.end());

    if(mx < 2) return;
    sieve(mx);

    for(int i = 0 ; i < n ; i++) {
        int x = v[i];
        while (x > 1){
            occurence[spf[x]]++;
            x /= spf[x];
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    vi v(n);
    for(auto& a : v) cin >> a;
    getOcurrence(v);

    vi points;

    for(auto& [key, val] : occurence) points.pb(key * val);
    int ans = 0;

    sort(points.rbegin(), points.rend());

    int i = 0;

    for(auto& a : points){
        if(i % 2 == 0) ans += a;
        i++;
    }

    cout << ans << '\n';
    
    return 0;
}