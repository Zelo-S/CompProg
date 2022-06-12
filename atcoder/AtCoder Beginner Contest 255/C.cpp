#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve(){
    // change to ll later
    ll X,A,D,N; cin>>X>>A>>D>>N;
    
    X-=A; // normalize
    ll low = 0;
    ll high = D * (N-1);
    if(high < low) swap(low, high);
    
    if(D == 0){
        cout<<abs(X)<<endl; return;
    }

    if(X < low){
        cout<<abs(X - low)<<endl;
        return;
    }else if(X > high){
        cout<<abs(X - high)<<endl;
        return;
    }else{
        ll low_bound = floor((ld)X/D) * D;
        ll up_bound = ceil((ld)X/D) * D;
        
        cout<<min(abs(X - low_bound), abs(X-up_bound))<<endl;
        return;
    }

}

int main(){
    solve();
    return 0;
}