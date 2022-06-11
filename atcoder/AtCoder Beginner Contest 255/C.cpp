#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve(){
    // change to ll later
    ll X,A,D,N; cin>>X>>A>>D>>N;
    X -= A;
    if(D == 0){
        cout<<abs( X )<<endl;
    }
    
    ll factor_up = ceil( (ld)X / D ) * D;
    ll factor_down = floor( (ld)X / D ) * D;
    
    
    ll ans = 0;
    if(factor_down < 0 || factor_up < 0){
        ans = min(0 - factor_down, 0-factor_up);
    }else{
        ans = min(factor_up - )
    }
    
    cout<<factor_up<<" "<<factor_down<<endl;

}

int main(){
    solve();
    return 0;
}