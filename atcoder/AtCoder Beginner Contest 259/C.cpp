#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

struct Count{
    char c;
    LL count;
};

vector<Count> reduce(string s){
    LL len = s.size();
    
    vector<Count> res;
    res.push_back({s[0], 1});
    for(LL i=1; i<len; ++i){
        if(s[i-1] == s[i]) res[res.size()-1].count++;
        else res.push_back({s[i], 1});
    }
    
    return res;
}

void solve(){
    string S,T; cin>>S>>T;
    
    vector<Count> Sres = reduce(S);
    vector<Count> Tres = reduce(T);

    // for(auto f : Sres) cout<<f.c<<" "<<f.count<<endl;
    // for(auto f : Tres) cout<<f.c<<" "<<f.count<<endl;
    
    if(Sres.size() != Tres.size()){
        cout<<"No\n"; return;
    }
    
    for(LL i=0; i<(LL)Sres.size(); ++i){
        if(Sres[i].count > Tres[i].count) {
            cout<<"No\n"; return;
        }if(Sres[i].count == 1 && Tres[i].count > 1){
            cout<<"No\n"; return;
        }
    }
    
    cout<<"Yes\n";
}

int main(){
    solve();
    return 0;
}