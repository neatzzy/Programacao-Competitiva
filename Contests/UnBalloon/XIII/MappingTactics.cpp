#include <bits/stdc++.h>

using namespace std;

#define vi vector<ll>
#define ll long long
#define pb push_back
#define ii pair<ll,ll>

long long isLeft(const ii &p0, const ii &p1, const ii &p2){
  return (p1.first - p0.first) * (p2.second - p0.second) - (p2.first - p0.first) * (p1.second - p0.second);
}

bool inPoly(const ii &ponto, const vector<ii> &poly){
  ll wn = 0;
  int n = poly.size() - 1;
  
  for(ll i = 0 ; i < n ; i++){
    ll ni = (i + 1);
    if(poly[i].second <= ponto.second){
      if(poly[ni].second > ponto.second)
        if(isLeft(poly[i], poly[ni], ponto) > 0) wn++;
    }
    else{
      if(poly[ni].second <= ponto.second)
        if(isLeft(poly[i], poly[ni], ponto) < 0) wn--;
    }
  }

  return wn != 0;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

    ll n, q; cin >> n >> q;

    vector<vector<ii>> shapes(n);

    for(ll i = 0 ; i < n ; i++){
      ll k; cin >> k;
      for(ll j = 0 ; j < k ; j++){
        ii xy; cin >> xy.first >> xy.second;
        shapes[i].pb(xy);
      }
      shapes[i].pb(shapes[i][0]);
    }

    while(q--){
      ii pt; cin >> pt.first >> pt.second;
      ll ans = 0;
 
      for(const auto& it : shapes){
        if(inPoly(pt, it)) ans++;
      }
      cout << ans << "\n";
    }
    
    return 0;
}