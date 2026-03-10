#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int testes; cin >> testes;

    for(int i = 0 ; i < testes ; i++){
        int n, x; cin >> n >> x;

        if(x == 0){
            for(int j = 1 ; j < n ; j++){
                cout << j << " ";
            }
            cout << "0" << endl;
        }
        else if(x < n){
            for(int j = 0 ; j < x ; j++){
                cout << j << " ";
            }
            for(int j = x+1 ; j < n ; j++){
                cout << j << " ";
            }
            cout << x << endl;
        }
        else{
            for(int j = 0 ; j < n ; j++){
                cout << j << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}