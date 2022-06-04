#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N; cin>>N;
    vector<vector<int>> arr(N, vector<int>(N));
    
    for(int i=0; i<N; ++i){
        for(int j=0; j<=i; ++j){
            if(j==0 || j == i){
                arr[i][j] = 1;
            }else{
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }

    for(int i=0; i<N; ++i){
        for(int j=0; j<=i; ++j){
            cout<<arr[i][j]<<" ";
        }
        
        cout<<endl;
    }
}

int main(){
    solve();
    return 0;
}