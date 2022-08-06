#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N; cin>>N;
    vector<vector<int>> board(N, vector<int>(N));
    
    for(int i=0; i<N; ++i){
        string F; cin>>F; 
        for(int e=0; e<F.size(); ++e){
            if(F[e] == 'L') board[i][e] = 0;
            else if(F[e] == 'W') board[i][e] = 1;
            else if(F[e] == 'D') board[i][e] = 2;
            else board[i][e] = -1;
        }
    }
    
    bool valid = true;
    for(int row=0; row<N; ++row){
        for(int col=0; col<N; ++col){
            if(board[row][col] == -1) continue;
            
            int currPlay = board[row][col];
            int oppPlay = board[col][row];
            
            int minPlay = min(currPlay, oppPlay);
            int maxPlay = max(currPlay, oppPlay);
            
            if(minPlay == 2 && maxPlay != 2) valid = false;
            else if(minPlay == 0 && maxPlay != 1) valid = false;
            else if(minPlay == 1 && maxPlay != 0) valid = false;
        }
    }    
    
    if(valid) cout<<"correct"<<endl;
    else cout<<"incorrect"<<endl;

}

int main(){
    solve();
    return 0;
}