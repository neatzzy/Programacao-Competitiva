#include <bits/stdc++.h>
 
using namespace std;
 
#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
 
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    float n, k; cin >> n >> k;
    int cmax = floor(n / 2) + 1;
    int cmin = (ceil((n - 1) / k)) + 1;
    cout << cmax << " " << cmin << endl;
    
    return 0;
}