#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N; cin>>N;
    if(N % 100 < 10){
        cout<<0;
    }
    cout<<N%100<<endl;
}

int main(){
    solve();
    return 0;
}