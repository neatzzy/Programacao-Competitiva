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

    string str; cin >> str;
    int tam = str.length(), maior = 0, maiorAtual = 1;

    for(int i = 1 ; i < tam ; i++){
        if(str[i-1] == str[i]) maiorAtual++;
        else{
            maior = max(maior, maiorAtual);
            maiorAtual = 1;
        }
    }
    maior = max(maior, maiorAtual);
    cout << maior << endl;

    return 0;
}