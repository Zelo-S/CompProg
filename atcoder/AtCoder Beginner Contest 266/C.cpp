#include <bits/stdc++.h>
using namespace std;

struct Coords{
    int x,y;
};

int crossProd(vector<Coords> coords){
    int xf = coords[1].x - coords[0].x;
    int yf = coords[1].y - coords[0].y;
    
    int xs = coords[2].x - coords[0].x;
    int ys = coords[2].y - coords[0].y;
    
    return xf * ys - xs * yf;
}

bool isConvexQuad(vector<Coords> coords){
    int prev_prod = 0;
    int curr_prod = 0;
    for(int i=0; i<4; ++i){
        vector<Coords> getProd = { coords[i], coords[(i+1) % 4], coords[(i+2) % 4]};
        curr_prod = crossProd(getProd);
        
        if(curr_prod != 0){
            if(curr_prod * prev_prod < 0) return false;
            else prev_prod = curr_prod;
        }
    }
    
    return true;
}

void solve(){
    vector<Coords> coords(4);
    for(auto& f: coords) cin>>f.x>>f.y;
    bool isConvex = isConvexQuad(coords);
    
    if(isConvex) cout<<"Yes\n";
    else cout<<"No\n";
    
}

int main(){
    solve();
    return 0;
}