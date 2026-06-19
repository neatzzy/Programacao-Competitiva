#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

int extendedEuclidean(int a, int b, int& x, int& y){
    if(a == 0){
        x = 0;
        y = 1;
        return b;
    }
    int x1, y1;
    int gcd = extendedEuclidean(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return gcd;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c; cin >> a >> b >> c;
    int x, y;

    int g = extendedEuclidean(llabs(a), llabs(b), x, y);

    if((-c) % g == 0){
        int mult = (-c) / g;
        x *= mult;
        y *= mult;
        cout << x << ' ' << y << '\n';
    }
    else cout << "-1\n";
    
    return 0;
}