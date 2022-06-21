#include <bits/stdc++.h>
using namespace std;

#define MAX 0x3f3f3f3f3f
typedef long long LL;

LL digitSum(LL num){
    LL sum = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void solve(){
        
    LL K; cin>>K;
    vector<LL> arr;
    // change to LL later?
    for(LL i=19; i<= MAX && arr.size() <= 10000; i+=9){
        if(digitSum(i) == 10) arr.push_back(i); 
    }
   
    cout<<arr[K-1]<<endl;
   
}

int main(){
    solve();
    return 0;
}