#include <bits/stdc++.h>
using namespace std;

struct Range{
    int leftmost, rightmost;
};

const string abc = "abcdefghijklmnopqrstuvwxyz";

void solve(){
    string S,T; cin>>S>>T;
    map<char, Range> S_ranges;
    
    for(int i=0; i<S.size(); ++i) S_ranges[S[i]].rightmost = i;
    for(int i=S.size()-1; i>=0; --i) S_ranges[S[i]].leftmost = i;

    map<char, Range> T_ranges;
    
    for(int i=0; i<T.size(); ++i) T_ranges[T[i]].rightmost = i;
    for(int i=T.size()-1; i>=0; --i) T_ranges[T[i]].leftmost = i;
    
    for(auto [chr, rng] : S_ranges){
        
    }

    bool valid = true;
    for(int ec=0; ec<26; ++ec){
        char active = abc[ec];
        
        map<char, int> s_count;
        for(int i=S_ranges[active].leftmost; i<=S_ranges[active].rightmost; ++i) ++s_count[S[i]];

        map<char, int> t_count;
        for(int i=T_ranges[active].leftmost; i<=T_ranges[active].rightmost; ++i) ++t_count[T[i]];
        
        for(auto [chr, cnt] : s_count){
            if(cnt > t_count[chr]) {
                valid = false;
                cout<<"No\n";
                return;
            }
        }
    }
    
    cout<<"Yes\n";
}

int main(){
    solve();
    return 0;
}