#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

template <typename T>
class SegmentTree {
private:
    int n;
    vector<T> tree;
    static T combine(T a, T b) {
        return a + b;
    }
    void build(const vector<T>& arr, int v, int tl, int tr) {
        if (tl == tr) {
            tree[v] = arr[tl];
        } else {
            int tm = (tl + tr) / 2;
            build(arr, v*2, tl, tm);
            build(arr, v*2+1, tm+1, tr);
            tree[v] = combine(tree[v*2], tree[v*2+1]);
        }
    }
    void update(int v, int tl, int tr, int pos, T new_val) {
        if (tl == tr) {
            tree[v] = new_val;
        } else {
            int tm = (tl + tr) / 2;
            if (pos <= tm) {
                update(v*2, tl, tm, pos, new_val);
            } else {
                update(v*2+1, tm+1, tr, pos, new_val);
            }
            tree[v] = combine(tree[v*2], tree[v*2+1]);
        }
    }
    T query(int v, int tl, int tr, int l, int r) {
        if (l > r) {
            return T();
        }
        if (l == tl && r == tr) {
            return tree[v];
        }
        int tm = (tl + tr) / 2;
        return combine(query(v*2, tl, tm, l, min(r, tm)),
                       query(v*2+1, tm+1, tr, max(l, tm+1), r));
    }
public:
    SegmentTree(const vector<T>& v) {
        n = v.size();
        tree.resize(4*n);
        build(v, 1, 0, n-1);
    }
    void update(int pos, T new_val) {
        update(1, 0, n-1, pos, new_val);
    }
    T query(int l, int r) {
        return query(1, 0, n-1, l, r);
    }
};

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for(auto& a : v) cin >> a;
    SegmentTree<int> seg(v);

    while(q--){
        int t, a, b;
        cin >> t >> a >> b;
        if(t == 1){
            seg.update(a-1, b);
        } else {
            cout << seg.query(a-1, b-1) << "\n";
        }
    }
    
    return 0;
}