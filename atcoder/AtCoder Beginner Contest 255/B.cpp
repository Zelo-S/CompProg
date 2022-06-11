#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 0x3f3f3f;

struct Coord{
    ll x,y;
};

void solve(){
    ll N, K; cin>>N>>K;
    vector<ll> hasLight(K);
    for(auto& f : hasLight){
        cin>>f;
    }

    vector<ll> hasLamp(N);
    for(auto f : hasLight) hasLamp[f] = 1;
    
    vector<ll> isLit(N);
    for(auto f : hasLight) isLit[f] = 1;
    
    vector<Coord> ppl(N);
    for(ll i=0; i<N; ++i){
        ll a,b;
        cin>>a>>b;
        ppl[i] = {a,b};
    }
    
    double max_of_min_sq = 0;

    for(ll e=0; e<N; ++e){
        double min_dist_sq = INF;
        if(isLit[e+1] == 1) continue; // lit, or same person

        for(ll i=0; i<K; ++i){

            
            Coord person_light = ppl[hasLight[i]-1];
            Coord person_noLight = ppl[e];
            
            double dist_sq = pow(person_light.x - person_noLight.x, 2) + pow(person_light.y - person_noLight.y, 2);
            cout<<1<<endl;
            cout<<dist_sq<<endl;

            min_dist_sq = min(min_dist_sq, dist_sq);

        }
        isLit[e+1] = 1;
        
        max_of_min_sq = max(max_of_min_sq, min_dist_sq);

    }
    
    cout<<fixed;
    cout<<endl;
    cout<<setprecision(10)<<sqrt(max_of_min_sq)<<endl;
    
}

int main(){
    solve();
    return 0;
}