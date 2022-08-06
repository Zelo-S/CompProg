#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N; cin>>N;
    vector<int> arr(N+1);
    for(int i=2; i<=N; ++i){
        cin>>arr[i];
    }

    int count=0;
    int start=N;
    while(start != 1){
        start = arr[start];
        ++count;
    }
    
    cout<<count<<endl;

}

int main(){
    solve();
    return 0;
}