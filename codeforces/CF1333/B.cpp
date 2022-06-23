#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve(){
    LL T; cin>>T;
    while(T--){
        LL N; cin>>N;
        vector<LL> a(N), b(N);
        for(auto& f : a) cin>>f;
        for(auto& f : b) cin>>f;
        
        bool valid = a[0] == b[0];

        // 0 == 0, -1 == 1, 1 == 2, -1 and 1 == 3
        for(auto& f : a){ if(f == 0) f = 0; else if(f == -1) f = 1; else if(f == 1) f = 2; }

        vector<LL> fourStatePrefix(N+1);
        for(LL i=1; i<=N; ++i){
            if(fourStatePrefix[i-1] == a[i-1]) { fourStatePrefix[i] = fourStatePrefix[i-1]; continue; }
            fourStatePrefix[i] = fourStatePrefix[i-1] + a[i-1];
            if(fourStatePrefix[i] > 3) fourStatePrefix[i] = 3;
        }
        
        for(LL i=1; i<N; ++i){ // iterating thru b
            if(fourStatePrefix[i] == 3) continue;
            if(b[i] > 0){
                if(fourStatePrefix[i] != 2) valid = false;
            }else if(b[i] < 0){
                if(fourStatePrefix[i] != 1) valid = false;
            }else if(b[i] == 0){
                if(fourStatePrefix[i] != 0) valid = false;
            }
        }
        
        // for(auto f : fourStatePrefix) cout<<f<<" "; cout<<endl;
        
        if(valid) cout<<"YES\n";
        else cout<<"NO\n";

    } 
}

int main(){
    solve();
    return 0;
}