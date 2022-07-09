#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve(){
    LL N,Q; cin>>N>>Q;
    string S; cin>>S;
    LL prefix = 0;
    while(Q--){
        LL func; cin>>func;
        LL rept; cin>>rept;
        
        if(func == 1){
            prefix += rept;
        }else if(func == 2){
            LL index = ((rept - prefix) + 2LL*N) % (N * 1LL);
            cout<<S[((index-1) + 2LL*N) % (N * 1LL)]<<endl;
        }
    }
}

int main(){
    solve();
    return 0;
}