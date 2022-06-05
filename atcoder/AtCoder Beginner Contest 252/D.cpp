#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll N; cin>>N;
    map<ll, ll> mp; // also sorted
    
    for(ll i=0; i<N; ++i){
        ll f; cin>>f;
        ++mp[f];
    }
    
    const ll sz = mp.size();

    vector<ll> order;
    for(auto [f,s] : mp) order.push_back(f);

    vector<ll> prefix(sz+1);
    vector<ll> suffix(sz+1);
    
    for(ll i=1; i<=sz; ++i) {
        prefix[i] = prefix[i-1] + mp[order[i-1]];
    }

    for(ll i=sz-1; i>=0; --i) {
        suffix[i] = suffix[i+1] + mp[order[i]];
    }
    
    ll final_sum = 0;
    for(ll i=1; i<order.size()-1; ++i){
        final_sum += mp[order[i]] * prefix[i] * suffix[i+1];
    }
    
    cout<<final_sum<<endl;

}

int main(){
    solve();
    return 0;
}