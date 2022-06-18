#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    map<int, int> factor_pairs;
    int k=17;
    for(int i=1; i*i<=k; ++i){
        if(k % i == 0){
            ++factor_pairs[i];
            if(i != k / i) ++factor_pairs[k / i];
        }
    }
    
    for(auto [a,b] : factor_pairs) cout<<a<<" "<<b<<"\n";

}

int main(){
    solve();
    return 0;
}