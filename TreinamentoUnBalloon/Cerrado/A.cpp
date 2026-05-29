#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q; cin >> n >> q;
    vi delta(n);
    cin >> delta[0];
    int prev = delta[0];

    for(int i = 1 ; i < n ; i++){
        int aux; cin >> aux;
        delta[i] = aux - prev;
        prev = aux;
    }

    for(int i = 0 ; i < q ; i++){
        int m, h; cin >> m >> h;
        delta[0] += h;
        if(m < n) delta[m] -= h;
    }

    vi v(n); v[0] = delta[0];
    for(int i = 1 ; i < n ; i++){
        v[i] = v[i-1] + delta[i];
    }

    stack<int> st;

    for(int i = 0 ; i < n - 1 ; i++){
        if(!st.empty() and st.top() <= v[i]){
            while(!st.empty() and st.top() <= v[i]) st.pop();
        }
        st.push(v[i]);
        cout << st.size() << '\n';
    }
    
    return 0;
}