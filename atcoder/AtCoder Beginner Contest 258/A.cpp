#include <bits/stdc++.h>
using namespace std;

void solve(){
    int K; cin>>K;
    int hours = K / 60;
    int mins = K % 60;
    
    cout<<(21 + hours)<<":";
    if(mins < 10) cout<<"0";
    cout<<(mins)<<endl;
}

int main(){
    solve();
    return 0;
}