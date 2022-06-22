#include <bits/stdc++.h>
using namespace std;

void solve(){
    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        vector<int> arr(N);
        for(auto& f : arr) cin>>f;
        
        int badCounter = 0;
        int max_running = arr[N-1];
        
        for(int i=N-1; i>=0; --i){
            if(arr[i] > max_running){
                ++badCounter;
                max_running = arr[i];
            }
        }
        
        cout<<badCounter<<endl;
    }
}

int main(){
    solve();
    return 0;
}