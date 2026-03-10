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

    int a, b;
    char op;

    cin >> a >> b >> op;

    switch (op){
    case '+':
      cout << a + b;
      break;
    
    case '-':
      cout << a - b;
      break;

    case '*':
      cout << a * b;
      break;
    
    case '/':
      cout << a / b;
    }

    cout << endl;
    
    return 0;
}