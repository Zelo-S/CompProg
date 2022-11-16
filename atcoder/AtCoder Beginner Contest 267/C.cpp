#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f3f3f3f

typedef long long ll;

void solve(){
    ll N, M; cin>>N>>M;
    vector<ll> arr(N);
    for(auto& f: arr) cin>>f;
    
    vector<ll> prefix(N+1);
    for(ll i=1; i<=N; ++i){
        prefix[i] = prefix[i-1] + arr[i-1];
    }
    
    ll max_pre=-1 * INF;
    for(ll i=1; i<=N; ++i){
        max_pre=max(max_pre, prefix[i]);
    }
    
    vector<ll> indexes;
    for(ll i=1; i<=N; ++i){
        if(prefix[i] == max_pre) indexes.push_back(i);
    }
    

    ll max_sum=-1 * INF;
    for(auto f : indexes){
        ll sum=0;
        ll temp=M;
        for(ll i=f; i>f-M; --i){
            sum+= (arr[i-1] * temp);
            temp--;
        }
        max_sum = max(max_sum, sum);
    }
    
    cout<<max_sum<<endl;

}

int main(){
    solve();
    return 0;
}