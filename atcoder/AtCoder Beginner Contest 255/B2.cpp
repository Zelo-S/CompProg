#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f3f;
typedef long long ll;

struct Coord{
    ll x,y;
};

void solve(){
    
    ll N,K; cin>>N>>K;
    vector<ll> lamps(K);
    vector<ll> isLit(N);
    for(auto& f : lamps) cin>>f, isLit[f-1]=1;
    
    vector<Coord> coords(N);
    for(auto& [x,y] : coords) cin>>x>>y;
    
    long double max_distsq = 0;
    for(ll noLight=0; noLight<N; ++noLight){
        if(isLit[noLight]) continue;
        Coord noLighter = coords[noLight];
        
        long double curr_min_dist = INF;
        for(ll light=0; light<K; ++light){
            Coord lighter = coords[lamps[light]-1];
            long double distsq = 1ll * pow(lighter.x - noLighter.x, 2) + 1ll * pow(lighter.y - noLighter.y, 2);
            curr_min_dist = min(curr_min_dist, distsq);
        }
        isLit[noLight] = 1;
        max_distsq = max(max_distsq, curr_min_dist);
    }
    
    cout<<setprecision(6)<<fixed<<sqrt(max_distsq)<<endl;

}

int main(){
    solve();
    return 0;
}