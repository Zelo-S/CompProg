#include <bits/stdc++.h>
using namespace std;

void solve(){
    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        vector<int> a(N);
        vector<int> b(N);
        
        for(auto& f : a) cin>>f;
        for(auto& f : b) cin>>f;
    
        int max_diff = 0;
        for(int i=0; i<N; ++i){
            max_diff = max(max_diff, a[i] - b[i]);
        }
        
        
        bool valid = true;
        for(int i=0; i<N; ++i){
            a[i] = max(a[i] - max_diff, 0); // a-sim
            if(a[i] != b[i]) {valid= false;}
        }
        
        if(valid)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}

int main(){
    solve();
    return 0;
}