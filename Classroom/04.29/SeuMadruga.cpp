#include <bits/stdc++.h>

using namespace std;

#define pb push_back

double somar(const vector<double>& v, double mid){
    double soma = 0;
    for(int i = (int)v.size() - 1 ; i >= 0 ; i--){
        if(mid >= v[i]) return soma;

        soma += v[i] - mid;
    }
    return soma;
}

double busca(const vector<double>& v, double a, double soma){
    double low = 0, high = v[v.size()-1], mid = 0;

    const double eps = 1e-7;
    while(high - low > eps){
        mid = (low + high) / 2.0;
        double soma2 = somar(v, mid);

        if(fabs(soma2 - a) < 1e-9) return mid;
        if(soma2 < a) high = mid;
        else low = mid;
    }
    return (low + high) / 2.0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    double a;
    
    while((cin >> n >> a) and n != 0 and a != 0){
        vector<double>v(n);

        double soma = 0;

        for(int i = 0 ; i < n ; i++){
            double x;
            cin >> x;
            v[i] = x;
            soma += x;
        }

        if(soma + 1e-9 < a) cout << "-.-";
        else if (fabs(soma - a) < 1e-9) cout << ":D";
        else{
            sort(v.begin(), v.end());
            cout << fixed << setprecision(4) << busca(v, a, soma);
        }

        cout << "\n";

    }

    
    return 0;
}