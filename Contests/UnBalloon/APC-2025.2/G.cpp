#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

    ll n, m; cin >> n >> m;
    if((n == 0 and m == 0) or(n == 1 and m == 1)) cout << "SeleCiC" << endl;
    else cout << "Calouros" << endl;

    return 0;
}