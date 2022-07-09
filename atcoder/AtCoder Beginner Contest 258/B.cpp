#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve(){
    LL N; cin>>N;
    vector<vector<LL>> arr(N, vector<LL>(N));
    for(auto& f : arr) for(auto& e : f){ char c; cin>>c; e = c-'0'; } 
    
    LL ans = 0;
    for(int i=0; i<N; ++i){
        for(int e=0; e<N; ++e){
            pair<LL,LL> largest_spot = {i,e};
            for(LL direc=0; direc<8; ++direc){
                string largest_num = "";

                LL x=largest_spot.first, y=largest_spot.second; 
                // process linear moves first
                for(LL moves=0; moves<N; ++moves){
                    largest_num += to_string(arr[x][y]);
                    if(direc == 0) ++x;        
                    else if(direc == 1) --x;
                    else if(direc == 2) ++y;
                    else if(direc == 3) --y;
                    
                    else if(direc == 4) ++x, ++y;
                    else if(direc == 5) --x, --y;
                    else if(direc == 6) --x, ++y;
                    else if(direc == 7) ++x, --y;
                    
                    if(x >= N) x = 0;
                    if(y >= N) y = 0;
                    if(x < 0) x = N-1;
                    if(y < 0) y = N-1;
                }    
                ans = max(ans, stoll(largest_num));
            }
        }
    } 
   
    cout<<ans<<endl; 

}

int main(){
    solve();
    return 0;
}