#include <bits/stdc++.h>
using namespace std;

void solve(){
    string S; cin>>S;
    
    if(S[0] == '1'){
        cout<<"No\n";
        return;
    }
    
    vector<vector<char>> cols(7);
    cols[0].push_back(S[6]);

    cols[1].push_back(S[3]);

    cols[2].push_back(S[7]);
    cols[2].push_back(S[1]);
    
    cols[3].push_back(S[4]);
    cols[3].push_back(S[0]);

    cols[4].push_back(S[8]);
    cols[4].push_back(S[2]);
    
    cols[5].push_back(S[5]);
    
    cols[6].push_back(S[9]);
    
    for(int fCol=0; fCol<7; ++fCol){
        for(int sCol=fCol+2; sCol<7; ++sCol){

            vector<char> fvector = cols[fCol];
            vector<char> svector = cols[sCol];

            if(find(fvector.begin(), fvector.end(), '1') == fvector.end()) { continue; }
            if(find(svector.begin(), svector.end(), '1') == svector.end()) { continue; }
            
            for(int i=fCol+1; i<sCol; ++i){
                vector<char> ivector = cols[i];
                if(find(ivector.begin(), ivector.end(), '1') == ivector.end()){
                    cout<<"Yes\n";
                    return;
                }
            }

        }
    }
    
    cout<<"No\n"<<endl;

}

int main(){
    solve();
    return 0;
}