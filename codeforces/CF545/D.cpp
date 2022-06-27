#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve(){
    LL N; cin>>N;
    vector<LL> arr(N);
    for(auto& f : arr) cin>>f;
    
    sort(arr.begin(), arr.end());
    
    vector<LL> prefix(N+1);
    for(LL i=1; i<=N; ++i) prefix[i] = prefix[i-1] + arr[i-1];
    
    LL non_disappoint = 0;
    for(LL i=0; i<N; ++i){
        if(arr[i] >= prefix[i]) ++non_disappoint;
    }
    
    cout<<non_disappoint<<endl;

}

int main(){
    solve();
    return 0;
}