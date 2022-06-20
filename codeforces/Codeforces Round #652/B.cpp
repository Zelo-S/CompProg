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
        
        int last0Pos = N-1, last1Pos = N-1;
        
        while(last0Pos >= 0 && last1Pos >= 0){
            if(arr[last0Pos] != 0) --last0Pos;
            if(arr[last1Pos] != 1) --last1Pos;
            
            if(arr[last0Pos] == 0 && arr[last1Pos] == 1 && last0Pos >= last1Pos){
                arr[last1Pos] = -1;
            }
            --last1Pos;
        }
        
        vector<int> res;
        for(auto f : arr) if(f != -1) res.push_back(f);
        for(auto f : res) cout<<f<<" "; cout<<endl;
    }
}

int main(){
    solve();
    return 0;
}