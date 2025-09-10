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

    int n; cin >> n;

    if(n == 1) cout << 1;
    else if(n < 4) cout << "NO SOLUTION";
    else{
        for(int i = 2 ; i <= n ; i+=2) cout << i << " ";
        for(int i = 1 ; i <= n ; i+=2) cout << i << " ";
    }
    cout << endl;
    
    return 0;
}