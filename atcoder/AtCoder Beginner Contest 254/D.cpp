#include <bits/stdc++.h>
using namespace std;

#define MAX 2e5

void solve(){
    unordered_map<int, int> primes;
    for(int i=2; i<=MAX; ++i){
        bool valid = true;
        for(int e=2; e*e<=i; ++e){
            if(i % e == 0) { valid = false; break; }
        }
        if(valid) ++primes[i];
    }

    cout<<primes.size()<<endl;

}

int main(){
    solve();
    return 0;
}