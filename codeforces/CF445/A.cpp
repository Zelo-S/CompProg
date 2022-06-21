#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N,M; cin>>N>>M;
    
    vector<vector<char>> board(N, vector<char>(M));
    for(auto& f : board) for(auto& g : f) cin>>g;
    
    vector<vector<char>> temp(N, vector<char>(M));
    for(int i=0; i<N; ++i){
        for(int e=0; e<M; ++e){
            if((i + e) % 2 == 0) temp[i][e] = 'W';
            else temp[i][e] = 'B';
            if(board[i][e] == '-') temp[i][e] = '-';
        }
    }
    
    for(auto f : temp){
        for(auto g : f) cout<<g;
        cout<<endl;
    }
}

int main(){
    solve();
    return 0;
}