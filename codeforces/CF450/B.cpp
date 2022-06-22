#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000007
typedef long long LL;

void solve(){
    LL X,Y; cin>>X>>Y;
    LL N; cin>>N;
    
    LL m3 = Y-X, m4 = -1 * X, m5 = -1 * Y, m6 = X - Y;
    LL arr[] = {m6, X, Y, m3, m4, m5};
    
    cout<<(arr[N%6] * 1LL + MAX * 2LL) % (MAX * 1LL)<<endl;
    
}

int main(){
    solve();
    return 0;
}