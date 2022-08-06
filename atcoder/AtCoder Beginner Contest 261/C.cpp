#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N; cin>>N;
    vector<string> order(N);
    for(auto& f : order){
        cin>>f;
    }

    map<string, int> dupl;
    for(auto f : order){
        cout<<f;
        if(dupl[f] <= 0) {cout<<endl;}
        else cout<<"("<<dupl[f]<<")"<<endl;

        ++dupl[f];
    }

}

int main(){
    solve();
    return 0;
}