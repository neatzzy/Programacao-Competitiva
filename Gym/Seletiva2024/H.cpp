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

    int a;
    stack<int> p1;
    stack<int> p2;
    int sumj1 = 0;
    int sumj2 = 0;

    for(int i = 0; i < 10; i++){
        cin >> a;
        if((i % 2) == 0){
            if(a == -1){
                if(!p2.empty()){
                    p2.pop();
                }
            }
            else{
                p1.push(a);
            }
        }
        else{
            if(a == -1){
                if(!p1.empty()){
                    p1.pop();
                }
            }
            else{
                p2.push(a);
            }
        }
    }
    while(!p1.empty()){
        sumj1 += p1.top();
        p1.pop();
    }

    while(!p2.empty()){
        sumj2 += p2.top();
        p2.pop();
    }

    if(sumj1 > sumj2){
        cout << "1\n";
    }

    else if(sumj1 < sumj2){
        cout << "2\n";
    }

    else{
        cout << "0\n";
    }

    return 0;
}