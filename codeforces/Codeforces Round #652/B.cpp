#include <bits/stdc++.h>
using namespace std;

void solve(){
    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        vector<int> arr(N);
        for(int i=0; i<N; ++i){
            char c; cin>>c;
            arr[i] = c - '0';
        }
        
        int lm_1 = 0, rm_0 = N;
        for(lm_1 = 0; lm_1<N; ++lm_1) if(arr[lm_1] == 1) break;
        for(rm_0 = N-1; rm_0>=0; --rm_0) if(arr[rm_0] == 0) break;
        
        if(lm_1 < rm_0) {
            for(int rmv1=lm_1+1; rmv1<rm_0; ++rmv1) if(arr[rmv1] == 1) arr[rmv1] = -1; // delete all 1's between (lm_1, rm_0]
            for(int rmv0=rm_0-1; rmv0>lm_1; --rmv0) if(arr[rmv0] == 0) arr[rmv0] = -1; // delete all 0's between [lm_1, rm_0)

    
            for(int rmv1=lm_1; rmv1<rm_0; ++rmv1) if(arr[rmv1] == 1) arr[rmv1] = -1; // delete all 1's between [lm_1, rm_0]
        }

        for(auto f : arr) if(f != -1) cout<<f; cout<<endl;
        
    }
}

int main(){
    solve();
    return 0;
}