#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll N, K; cin>>N>>K;
    vector<ll> arr(N);
    for(auto& f: arr) cin>>f;

    vector<ll> sorted = arr;
    sort(sorted.begin(), sorted.end());
    
    for(ll link_n=0; link_n<K; ++link_n){
        map<ll, ll> run_uns;
        for(ll ptr_uns=link_n; ptr_uns<N; ptr_uns+=K) { // ptr_uns = pointer for unsorted array(arr)
            ++run_uns[arr[ptr_uns]];
        }

        map<ll, ll> run_sr;
        for(ll ptr_sr=link_n; ptr_sr<N; ptr_sr+=K) { // ptr_sr = pointer for sorted array(sorted)
            ++run_sr[sorted[ptr_sr]];
        }
        
        for(auto [f, s] : run_uns){
            if(run_sr[f] != s){
                cout<<"No\n";
                return;
            }
        }
    }
    
    cout<<"Yes\n";
    
}

int main(){
    solve();
    return 0;
}