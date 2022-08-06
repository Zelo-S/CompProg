#include <bits/stdc++.h>
using namespace std;
// NOTE: Credits to GeeksForGeeks for combination generation code
void combination_util(vector<vector<int>>& res, vector<int>& temp, int N, int left, int M){
    if (M == 0) {
        res.push_back(temp);
        return;
    }
    for (int i=left; i<=N; ++i){
        temp.push_back(i);
        combination_util(res, temp, N, i + 1, M - 1);
        temp.pop_back();
    }
}
 
vector<vector<int>> makeCombination(int N, int K){
    vector<vector<int>> res;
    vector<int> temp;
    combination_util(res, temp, N, 1, K);
    return res;
}

void solve(){
    int N; int M; cin>>N>>M;
    vector<vector<int>> combins = makeCombination(M, N);
    
    
    for(int i=0; i<combins.size(); ++i){
        sort(combins[i].begin(), combins[i].end());
    }
    sort(combins.begin(), combins.end());
    
    for(int i=0; i<combins.size(); ++i){
        bool curr_valid=true;
        for(int e=1; e<combins[i].size(); ++e){
            if(combins[i][e] <= combins[i][e-1]) curr_valid = false;
        }
        if(curr_valid == true){
            for(int e=0; e<combins[i].size(); ++e) cout<<combins[i][e]<<" ";
            cout<<endl;
        }
    }

}

int main(){
    solve();
    return 0;
}