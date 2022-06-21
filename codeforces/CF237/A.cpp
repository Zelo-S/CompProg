#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve(){
    LL N; cin>>N;
    map<pair<LL,LL>, LL> ppkl;
    
    for(LL i=0; i<N; ++i){
        LL H,M; cin>>H>>M;
        ++ppkl[{H,M}];
    }
    
    LL maxans = 1;
    for(auto f : ppkl) maxans = max(maxans, f.second);
    cout<<maxans<<endl;
    
}

int main(){
    solve();
    return 0;
}