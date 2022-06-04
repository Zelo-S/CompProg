#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

void solve(){
    int N; cin>>N;
    vector<vector<int>> slots(10);

    for(int i=0; i<N; ++i){
        string s; cin>>s;
        for(int c=0; c<10; ++c) slots[s[c] - '0'].push_back(c);
    }
    
    
    int min_time = INF;
    for(int slot_n=0; slot_n<10; ++slot_n){
        vector<int> taken = slots[slot_n];
        
        map<int, int> mp; 
        for(int i=0; i<taken.size(); ++i) ++mp[taken[i]];
        
        int max_curr_time = 0;
        for(auto [indx, count] : mp) max_curr_time = max(max_curr_time, (count > 1) ? (count-1) * 10 + indx : indx);
        
        min_time = min(min_time, max_curr_time);
    }
    
    cout<<min_time<<endl; 

}

int main(){
    solve();
    return 0;
}