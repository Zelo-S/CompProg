#include <bits/stdc++.h>
using namespace std;

int dig_sum(int n){
    int sum = 0;
    while(n > 0){
        sum += n%10;
        n/=10;
    }
    return sum;
}
    
int main(){
     
    map<int, int> mp;
    cout<<mp[0]<<endl;
    mp[0] = 4;
    cout<<mp[0]<<endl;
     
    return 0;
}