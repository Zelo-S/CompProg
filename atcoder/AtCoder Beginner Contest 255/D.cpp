#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll N,Q; cin>>N>>Q;
    vector<ll> arr(N);
    for(auto &f: arr) cin>>f;
    sort(arr.begin(), arr.end());
    
    vector<ll> prefix(N+1), suffix(N+1);    
    for(ll i=1; i<=N; ++i) prefix[i] = prefix[i-1] + arr[i-1];
    for(ll i=N-1; i>=0; --i) suffix[i] = suffix[i+1] + arr[i];
    
    // for(auto f : prefix) cout<<f<<" ";
    // for(auto f : suffix) cout<<f<<" ";

    while(Q--){
        ll qi; cin>>qi;
        
        ll indx = lower_bound(arr.begin(), arr.end(), qi) - arr.begin();
        ll left = abs( prefix[indx] - qi * indx );
        ll right = abs( suffix[indx] - qi * (N - indx) );
        
        cout<<left+right<<endl;

    }  

}

int main(){
    solve();
    return 0;
}