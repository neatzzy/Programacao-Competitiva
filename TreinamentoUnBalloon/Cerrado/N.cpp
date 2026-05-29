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

    int hf, mf, hi, mi;

    scanf("%d:%d", &hf, &mf);
    scanf("%d:%d", &hi, &mi);

    int hd = hf - hi;
    int md = mf - mi;

    if(md < 0){
        md += 60;
        hd--;
    }

    hd < 10 ? cout << 0 << hd << ':' : cout << hd << ':';
    md < 10 ? cout << 0 << md: cout << md;
    cout << '\n';
    
    return 0;
}