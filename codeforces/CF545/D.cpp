#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve(){
    LL N; cin>>N;
    vector<LL> arr(N);
    
    for(auto& f : arr) cin>>f;
    sort(arr.begin(), arr.end());
    
    LL disappoints = 0, timesum = 0;
    for(LL i=0; i<N; ++i){
        if(arr[i] < timesum){ // "push to end"
            ++disappoints;
            continue;
        }
        else timesum += arr[i];
    }
    
    cout<<N-disappoints<<endl;
    
}

int main(){
    solve();
    return 0;
}