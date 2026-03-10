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

    string a, b;

    cin >> a >> b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    a == b ? cout << "YES" : cout << "NO";
    cout << endl;
    
    return 0;
}