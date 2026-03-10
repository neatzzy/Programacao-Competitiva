#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define vs vector<string>

vs gray(int n){
    if(n == 1)return{"0", "1"};

    vs prev = gray(n-1);
    vs rev = prev; reverse(rev.begin(), rev.end());

    int tam = prev.size();
    int i = 0;

    while(i < tam){
        string aux = "0" + prev[i];
        prev[i] = "1" + rev[i];
        prev.pb(aux);
        i++;
    }
    
    return prev;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;

    vs ans = gray(n);

    for(const auto s : ans){
        cout << s << "\n";
    }
    
    return 0;
}