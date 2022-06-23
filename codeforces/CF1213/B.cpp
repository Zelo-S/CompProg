#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

void solve(){
    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        vector<int> arr(N);
        for(auto& f : arr) cin>>f;
        
        int currMIN = INF;
        int goodCounter = 0;
        for(int i=N-1; i>=0; --i){
            if(arr[i] <= currMIN) { ++goodCounter; currMIN = arr[i]; }
        }
        
        cout<<N - goodCounter<<endl;
    }
}

int main(){
    solve();
    return 0;
}