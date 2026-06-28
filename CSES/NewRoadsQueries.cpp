#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

class DSU{
    vi parent;

    public:
        DSU(int size){
            parent.resize(size);
            for(int i = 0 ; i < size ; i++) parent[i] = i;
        }

        int find(int i){ return parent[i] == i ? i : parent[i] = find(parent[i]);}

        bool join(int I, int J){
            int i = find(I), j = find(j);
            if(i == j) return false;
            parent[i] = j;
            return true;
        }
};

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q; cin >> n >> m >> q;
    
    return 0;
}