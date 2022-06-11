#include <bits/stdc++.h>
using namespace std;

void solve(){
    int T; cin>>T;
    while(T--){
        
        int N; cin>>N;
        
        int largestMin = ceil((double)N/3)+1;
        int rem = N - largestMin; 
        
        int snd = ceil((double)rem/2), thr = floor((double)rem/2);
        if(snd == thr){
            snd++;
            thr--;
        }
        
        cout<<snd<<" "<<largestMin<<" "<<thr<<endl;
        
    }
}

int main(){
    solve();
    return 0;
}