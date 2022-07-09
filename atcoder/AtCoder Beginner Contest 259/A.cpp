#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N, M, X, T, D;
    cin>>N>>M>>X>>T>>D;
    
    if(M >= X) cout<<T<<endl;
    else if(M < X){
        int zero_birth_age = T - D * (X-M); 
        cout<<zero_birth_age<<endl;
    }
}

int main(){
    solve();
    return 0;
}