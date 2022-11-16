#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MAX =  998244353;

void solve(){
    ll N; cin>>N;
    int mod = N % MAX;
    if(mod < 0) cout<<MAX + mod<<endl; 
    else cout<<mod<<endl;
}

int main(){
    solve();
    return 0;
}
