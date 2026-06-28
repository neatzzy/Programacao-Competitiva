#include <bits/stdc++.h>
using namespace std;

typedef struct Point{
    int x, y;
};

class DSU{
    vector<int> parent;
    vector<int> setSize;
public:
    DSU(int size){
        parent.resize(size);
        setSize.assign(size, 1);
        iota(parent.begin(), parent.end(), 0);
    }
    
    int find(int i){
        return parent[i] == i ? i : parent[i] = find(parent[i]);
    }
    
    bool join(int I, int J){
        int i = find(I), j = find(J);
        if(i == j) return false;
    
        if(setSize[i] < setSize[j]) swap(i, j);
    
        parent[j] = i; 
    
        setSize[i] += setSize[j]; 
        return true;
    }
    
    int size(int i){ return setSize[find(i)]; }
};

double dist(Point p1, Point p2){
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main(){
    int n;double d; cin >> n >> d;
    vector<Point> pts(n);
    DSU dsu(n);
    
    for(auto& i : pts) cin >> i.x >> i.y;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(dist(pts[i], pts[j]) <= d) dsu.join(i, j);
        }
    }
    
    int maior = 0;
    for(int i = 0 ; i < n ; i++) maior = max(maior, dsu.size(i));
    cout << maior << endl;
}