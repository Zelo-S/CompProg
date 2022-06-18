#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

struct prr{
    int f,s;
};

bool cmp(prr& a, prr& b){
    return a.f < b.f;
}

void solve(){
    int N; cin>>N;
    vector<prr> arr(N+1);
    for(int i=0; i<N; ++i) cin>>arr[i].f>>arr[i].s;
    arr[N] = {INF, INF};
    
    sort(arr.begin(), arr.end(), cmp);
    
    int earliest = arr[0].f, latest = arr[0].s, ptr = 0;
    while(ptr <= N) {
        if(latest >= arr[ptr].f) {
            // continue a chain, so keep on updating latest's position
            latest = max(latest, arr[ptr].s);
        }else if(latest < arr[ptr].f){ // we can break a chain now
            cout<<earliest<<" "<<latest<<endl;
            earliest = arr[ptr].f, latest = arr[ptr].s; // update earliest and latest to ptr's spot. We are now starting a new chain
        }
        ++ptr; // advance ptr
    }
    
    // ok i know I could've used a for loop for this but whatever, it makes my code look more complex

}

int main(){
    solve();
    return 0;
}