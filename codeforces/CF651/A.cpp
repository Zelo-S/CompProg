#include <bits/stdc++.h>
using namespace std;

void solve(){
    int j1, j2; cin>>j1>>j2;
    
    int time=0;
    while(j1 > 0 && j2 > 0){
        if(j1 > j2) j1-=2, ++j2;
        else j2-=2, ++j1; 
        
        if(j1 < 0 || j2 < 0) break;
        ++time;
    }
    
    cout<<time<<endl;
}

int main(){
    solve();
    return 0;
}