#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve(){
    LL N,K; cin>>N>>K;
    
    vector<LL> arr(N);
    for(LL i=0; i<N; ++i){
        char c; cin>>c;
        arr[i] = c - 'a';
    }
    
    map<LL, LL> validchar;
    for(LL i=0; i<K; ++i){
        char c; cin>>c; ++validchar[c - 'a'];
    }
    
    vector<LL> substring_lengths;
    LL current_longest_substr = 0;
    for(LL i=0; i<N; ++i){
        if( validchar.find(arr[i]) == validchar.end() ){
            substring_lengths.push_back(current_longest_substr);
            current_longest_substr = 0;
            continue;
        }
        ++current_longest_substr;
        if(i == N - 1) substring_lengths.push_back(current_longest_substr);
    }
    
    LL sum = 0;
    for(auto f : substring_lengths) {
        sum += f * (f+1) / 2;
    }
    
    cout<<sum<<endl;
}

int main(){
    solve();
    return 0;
}