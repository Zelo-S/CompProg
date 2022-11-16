#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int)(x).size()
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
    if(sz(name)){
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
}

void solve(){
    setIO("cowtip");
    int N; cin>>N;
    vector<vector<int>> arr(N, vector<int>(N));
    
    for(int i=0; i<N; ++i){
        string s; cin>>s;
        for(int e=0; e<N; ++e){
            if(s[e] == '0') arr[i][e] = 0;
            else arr[i][e] = 1;
        }
    }    
    
    int ans=0;
    for(int bottomUp=N-1; bottomUp>=0; --bottomUp){
        for(int rightleft=N-1; rightleft>=0; --rightleft){
            if(arr[bottomUp][rightleft] == 1){
                ++ans;
                for(int i=0; i<=bottomUp; ++i){
                    for(int e=0; e<=rightleft; ++e){
                        if(arr[i][e] == 1) arr[i][e] = 0;
                        else if(arr[i][e] == 0) arr[i][e] = 1;
                    }
                }
            }
        }
    }
    
    cout<<ans<<endl;

}

int main(){
    solve();
    return 0;
}