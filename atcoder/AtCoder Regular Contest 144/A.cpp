#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N; cin>>N;
    
    if(N < 4){
        cout<<N*2<<" "<<N<<endl;
    }else if(N <= 8){
        cout<<N*2<<" "<<N + (N-4)*9<<endl;
    }else{
        
    }
}

int main(){
    solve();
    return 0;
}