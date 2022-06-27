#include <bits/stdc++.h>
using namespace std;

struct State{
    bool has1;
    bool hasn1;
    bool has0;
};

void solve(){
    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        vector<int> a(N), b(N);
        for(auto& f : a) cin>>f;
        for(auto& f : b) cin>>f;
        
        vector<int> diff(N);
        for(int i=0; i<N; ++i){
            diff[i] = b[i] - a[i];
        }
        
        
        vector<State> states(N+1);
        for(int i=1; i<N; ++i){
            states[i].has1 = states[i-1].has1;
            states[i].hasn1 = states[i-1].hasn1;
            states[i].has0 = states[i-1].has0;
            if(a[i-1] == 1) states[i].has1 = true;
            if(a[i-1] == -1) states[i].hasn1 = true;
            if(a[i-1] == 0) states[i].has0 = true;
        }
        
        bool valid = true;
        for(int i=0; i<N; ++i){
            // if diff[i] == 0, we dont need any operations
            if(diff[i] > 0){
                if(!states[i].has1) valid = false;
            }else if(diff[i] < 0){
                if(!states[i].hasn1) valid = false;
            }
        }
        
        if(valid) cout<<"YES\n";
        else cout<<"NO\n";
        
    }

}

int main(){
    solve();
    return 0;
}