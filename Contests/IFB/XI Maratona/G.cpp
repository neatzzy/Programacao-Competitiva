#include <bits/stdc++.h>
using namespace std;

double fun(double t, double n, double g, double d){
    return t * sqrt(n) + g * log2(n+1) + d;
}

int main(){
    double t, g, d, x;
    cin >> t >> g >> d >> x;
    
    long long l = 0, r = 1e18;
    long long mid;
    
    while(l < r){
        mid = l + (r - l + 1) / 2;
        double f = fun(t, (double)mid, g, d);
        if(f > x) r = mid - 1;
        else l = mid;
    }
    cout << l << endl;
}