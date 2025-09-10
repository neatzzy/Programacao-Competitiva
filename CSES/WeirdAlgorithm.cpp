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

    ll n; cin >> n;

    cout << n << " ";

    while(n != 1){
        if(n & 1)  n = n * 3 + 1;
        else n >>= 1;
        cout << n << " ";
    }
    cout << endl;

    return 0;
}