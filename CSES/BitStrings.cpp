#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define MOD 1000000007

ll expo(ll base, ll expoente){
  ll res = 1;
  base %= MOD;

  while(expoente > 0){
    if(expoente % 2) res = (res * base) % MOD;
    base = (base * base) % MOD;
    expoente /= 2;
  }

  return res;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n; cin >> n;

  cout << expo(2, n) << endl;
  
  return 0;
}