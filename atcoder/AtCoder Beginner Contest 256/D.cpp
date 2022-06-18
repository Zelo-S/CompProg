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
    
    int startptr = 0, endptr = startptr+1;
    while(startptr < N || endptr <= N) {
        if(arr[endptr].f > arr[endptr-1].s){
            cout<<arr[startptr].f<<" "<<arr[endptr-1].s<<endl;
            startptr = endptr;
        }
        ++endptr; 
    }

}

int main(){
    solve();
    return 0;
}