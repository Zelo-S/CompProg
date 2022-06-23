#include <bits/stdc++.h>
using namespace std;

void solve(){
    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        vector<int> arr(N);
        for(auto& f : arr) cin>>f;
        
        int Aans = 0, Bans = 0;
        int aptr = 0, bptr = N-1;
        int aprevct = 0, bprevct = 0;
        int count = 0;

        while(aptr <= bptr){
            if(count % 2 == 0){
                int acurrct = 0;
                while(aptr <= bptr && acurrct <= bprevct){
                    acurrct += arr[aptr++];
                }
                Aans += acurrct;
                aprevct = acurrct;
            }else{
                int bcurrct = 0;
                while(aptr <= bptr && bcurrct <= aprevct){
                    bcurrct += arr[bptr--];
                }
                Bans += bcurrct;
                bprevct = bcurrct;
            }
            ++count;
        }
        
        cout<<count<<" "<<Aans<<" "<<Bans<<endl;

        
    }
}

int main(){
    solve();
    return 0;
}