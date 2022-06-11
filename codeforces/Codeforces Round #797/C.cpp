#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve(){

    LL T; cin>>T;
    while(T--){
        LL N; cin>>N;
        // change to ll later
        
        vector<LL> s(N);
        vector<LL> f(N);
        
        for(auto& z : s) cin>>z;
        for(auto& z : f) cin>>z;
        
        cout<<f[0] - s[0]<<" "; // first task
        for(LL task_num=1; task_num<N; ++task_num){
            if( s[task_num] < f[task_num-1] ) {
                cout<<f[task_num] - f[task_num-1]<<" ";
            }else{
                cout<<f[task_num] - s[task_num]<<" ";
            }
        }
        
        cout<<endl;
    }

}

int main(){
    solve();
    return 0;
}