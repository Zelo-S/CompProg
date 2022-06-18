#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N; cin>>N;
    vector<int> A(N);
    for(auto &f : A) cin>>f;
    
    vector<int> board(4);
    
    int P = 0;
    for(int i=0; i<N; ++i){
        board[0] += 1; // place piece on A0
        for(int e=3; e>=0; --e){
            if(e + A[i] >= 4) P += board[e], board[e] = 0;
            else if(board[e] > 0){ board[e + A[i]] += board[e], board[e] = 0; break; }
        } 
    }
    
    cout<<P<<endl;

}

int main(){
    solve();
    return 0;
}