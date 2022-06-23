#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
typedef long long LL;

void solve(){

    LL N; cin>>N;
    vector<LL> arr(N+1);
    for(LL i=1; i<=N; ++i) cin>>arr[i];

    vector<LL> prefix(N+1);
    for(LL i=1; i<=N; ++i){
        prefix[i] = arr[i-1] - arr[i];
    }
    
    LL min_amount = INF;
    for(LL i=1; i<=N; ++i){
        prefix[i] = prefix[i] + prefix[i-1];
        min_amount = min(min_amount, prefix[i]);
    }
    
    cout<<abs(min_amount)<<endl;

}

int main(){
    solve();
    return 0;
}