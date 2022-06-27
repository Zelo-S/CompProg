#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
typedef long long LL;

void solve(){
    LL T; cin>>T;
    while(T--){
        LL N; cin>>N;
        vector<LL> arr(N);
        for(auto& f : arr) cin>>f;
        
        sort(arr.begin(), arr.end());
        pair<LL, LL> minpair = {0, INF};

        LL minIndex = 0;
        for(LL i=1; i<N; ++i){
            if(arr[i] - arr[i-1] < minpair.second - minpair.first) minpair.first = arr[i-1], minpair.second = arr[i], minIndex = i;
        }
        
        vector<LL> newarr(N);
        newarr[0] = minpair.first;
        newarr[N-1] = minpair.second;
        
        for(LL i=minIndex + 1; i<N; ++i){
            newarr[i-minIndex] = arr[i];
        }

        for(LL i=0; i<minIndex-1; ++i){
            newarr[N-minIndex + i] = arr[i];
        }

        for(auto f : newarr) cout<<f<<" ";
        cout<<endl;

    }
}

int main(){
    solve();
    return 0;
}