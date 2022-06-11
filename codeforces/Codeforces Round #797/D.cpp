#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

void solve(){
    int T; cin>>T;
    while(T--){
        int N,K; cin>>N>>K;
        
        string S; cin>>S;
        vector<int> bin_arr(N);
        for(int i=0; i<N; ++i){
            if(S[i] - 'A' == 1) bin_arr[i] = 1;
            else bin_arr[i] = 0;
        }
        
        vector<int> prefix(N+1);
        for(int i=1; i<=N; ++i){
            prefix[i] = prefix[i-1] + bin_arr[i-1];
        }
        
        int min_change = INF;
        for(int s=0; s<N-K+1; ++s){
            int end = s + K - 1;
            
            int num_blck = prefix[end+1] - prefix[s];
            
            min_change = min(min_change, K - num_blck);
        }

        cout<<min_change<<endl;

    }
}

int main(){
    solve();
    return 0;
}