#include <bits/stdc++.h>
using namespace std;

void solve(){
    int L1, R1, L2, R2; cin>>L1>>R1>>L2>>R2;
    
    int count1 = 0;
    for(int i=L1; i<=R1; ++i){
        if(i >= L2 && i <= R2) ++count1;
    }

    int count2 = 0;
    for(int i=L2; i<=R2; ++i){
        if(i >= L1 && i <= R1) ++count2;
    }
    
    cout<< max(count1, count2)<<endl;
    
}

int main(){
    solve();
    return 0;
}