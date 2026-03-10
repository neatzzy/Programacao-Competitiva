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

  int n; cin >> n;

  vector<ll> h(n+1);

  for(int i = 0; i < n; ++i) cin >> h[i];

  h[n] = 0;

  stack<int> st;

  ll best = 0;

  for(int i = 0; i <= n; ++i){
    while(!st.empty() && h[st.top()] > h[i]){
      int tp = st.top(); st.pop();

      ll height = h[tp];
      int width = st.empty() ? i : i - st.top() - 1;
      
      best = max(best, height * (ll)width);
    }
    st.push(i);
  }

  cout << best << '\n';
  return 0;
}