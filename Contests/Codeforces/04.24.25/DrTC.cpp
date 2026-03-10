#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main(){
    
    int casos; cin >> casos;

    for(int i = 0 ; i < casos ; i++){
        int n; cin >> n;
        int uns = 0;
        string bin; cin >> bin;

        for(int j = 0 ; j < n ; j++){
            string copy = bin;
            copy[j] == '0' ? copy[j] = '1' : copy[j] = '0';

            for(int k = 0 ; k < n ; k++){
                if(copy[k] == '1') uns++;
            }
        }
        cout << uns << "\n";
    }
    
    return 0;
}