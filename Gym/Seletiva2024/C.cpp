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

    int n, m; cin >> n >> m;
    vi qtd(n), tem(n), custo(n);

    for(auto& i : qtd) cin >> i;
    for(auto& i : tem) cin >> i;
    for(auto& i : custo) cin >> i;

    priority_queue<int, vi, greater<int>> atendidos;


    for(int i = 0 ; i < n ; i++){
        if(tem[i] >= qtd[i]) continue;
        else atendidos.push((qtd[i] - tem[i]) * custo[i]);
    }

    int soma = 0;
    int somat = 0;
    int res = 0;
    while(!atendidos.empty()){
            int x = atendidos.top();
            soma += x;
            if((soma + somat) > m){
                break;
            }
            else{
                somat += soma;
                res++;
            }
            atendidos.pop();
    }
        cout << res << "\n";
    return 0;
}