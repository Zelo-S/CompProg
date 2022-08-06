#include <bits/stdc++.h>
using namespace std;

void solve(){
    map<int, int> res;
    int firstNum=0;
    for(int i=0; i<5; ++i){
        int t; cin>>t; if(i ==0 ) firstNum = t;
        ++res[t];
    }    
    
    if(res.size() == 2){
        int first = res[firstNum];
        int rem = 5 - first;
        
        if(min(first, rem) == 2 && max(first, rem) == 3) cout<<"Yes\n";
        else cout<<"No\n";
    }
    else{
        cout<<"No\n";
    }

}

int main(){
    solve(); return 0;
}