#include <bits/stdc++.h>
using namespace std;

void solve(){
    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        if(N == 1){ int p,c; cin>>p>>c; if(p >= c) cout<<"YES\n"; else cout<<"NO\n"; continue; }
        vector<pair<int,int>> times(N);
        for(auto& [a,b] : times) cin>>a>>b;
        
        bool valid = true;
        for(int i=1; i<N; ++i){
            if(times[i-1].first < times[i-1].second) valid = false;
            if(times[i].first < times[i].second) valid = false;
            if(times[i].first - times[i-1].first < times[i].second - times[i-1].second) valid = false;
            if(times[i].first < times[i-1].first || times[i].second < times[i-1].second) valid = false;
        }
        
        if(valid) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

int main(){
    solve();
    return 0;
}