#include <bits/stdc++.h>
using namespace std;

struct Trip{
    int a,b,c;
};

void solve(){
    vector<int> h(3);
    for(auto& f : h) cin>>f;
    sort(h.begin(), h.end());

    vector<int> w(3);
    for(auto& f : w) cin>>f;
        
    vector<Trip> h0;
    for(int i=1; i<=h[0]; ++i){
        for(int e=1; e<=h[0]; ++e){
            for(int f=1; f<=h[0]; ++f){
                if(i + e + f == h[0]) h0.push_back({i,e,f});
            }
        }
    }

    // for(auto f : h0) cout<<f.a<<" "<<f.b<<" "<<f.c<<endl;

    vector<Trip> h1;
    for(int i=1; i<=h[1]; ++i){
        for(int e=1; e<=h[1]; ++e){
            for(int f=1; f<=h[1]; ++f){
                if(i + e + f == h[1]) h1.push_back({i,e,f});
            }
        }
    }
    
    int ans=0;
    for(int i=0; i<h0.size(); ++i){
        for(int e=0; e<h1.size(); ++e){
            Trip top = h0[i];
            Trip bot = h1[e];
            
            int mid0 = w[0] - top.a - bot.a;
            int mid1 = w[1] - top.b - bot.b;
            int mid2 = w[2] - top.c - bot.c;
            
            if(mid0 > 0 && mid1 > 0 && mid2 > 0 && mid0 + mid1 + mid2 == h[2]) { ++ans; }
        }
        
    }
    cout<<ans<<endl;
}

int main(){
    solve();
    return 0;
}