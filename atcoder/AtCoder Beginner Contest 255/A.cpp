#include <bits/stdc++.h>
using namespace std;

void solve(){
    int R, C; cin>>R>>C;
    vector<vector<int>> matr(2, vector<int>(2));
    for(auto& f : matr){
        for(auto&z : f) cin>>z;

    }

    cout<<matr[R-1][C-1]<<endl;

}

int main(){
    solve();
    return 0;
}