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

    map<string, string> m;

    int n; cin >> n;
    while(n--){
        string nome, nro, clube;
        cin >> nome >> nro >> clube;

        m[nro.append(clube)] = nome;
    }
    cin >> n;
    while(n--){
        string nro, clube;
        cin >> nro >> clube;

        cout << m[nro.append(clube)] << '\n';
    }
    
    return 0;
}