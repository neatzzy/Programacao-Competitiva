#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    multiset<int> avl;

    for(int i = 0 ; i < n ; i++){
        int x; cin >> x;
        avl.insert(x);
    }

    int total = accumulate(avl.begin(), avl.end(), 0);

    if(total % 2 == 1){
        cout << -1 << "\n";
        return 0;
    }

    vi order;
    int alice = 0, bob = 0;
    while(!avl.empty()){
        if(alice <= bob){
            auto it = lower_bound(avl.begin(), avl.end(), total/2 - alice);
            if(it == avl.end())it--;
            alice += *it;
            order.pb(*it);
            avl.erase(it);
        }
        else{
            auto it = lower_bound(avl.begin(), avl.end(), total/2 - bob);
            if(it == avl.end())it--;
            bob += *it;
            order.pb(*it);
            avl.erase(it);
        }
    }
    
    if(alice != bob) cout << -1;
    else for(auto& x : order) cout << x << " ";
    cout << '\n';
    
    return 0;
}