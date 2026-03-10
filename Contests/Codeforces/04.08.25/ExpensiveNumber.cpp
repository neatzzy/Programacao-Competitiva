#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main(){
    
    int cases;

    cin >> cases;

    for(int i = 0 ; i < cases ; i++){
        string nro;
        int casas = 0;
        cin >> nro;

        int j = 0;

        while(nro[j] != '\0'){
            if(nro[j] != '0'){
                casas++;
            }
            j++;
        }
        casas--;

        j = nro.size() - 1;

        while(nro[j] == '0'){
            casas++;
            j--;
        }

        cout << casas << endl;
    }
    
    return 0;
}