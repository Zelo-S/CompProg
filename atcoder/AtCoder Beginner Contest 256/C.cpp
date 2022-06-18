#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> h(3);
    for(auto& f : h) cin>>f;
    sort(h.begin(), h.end());

    vector<int> w(3);
    for(auto& f : w) cin>>f;
        
    int ans = 0;
    vector<vector<int>> arr(3, vector<int>(3));
    for(int hs0=1; hs0<=h[0]; ++hs0){
        for(int hs1=1; hs1<=h[0]; ++hs1){
            for(int hs2=1; hs2<=h[0]; ++hs2){

                    if(hs0 + hs1 + hs2 == h[0]){
                        arr[0][0] = hs0;
                        arr[0][1] = hs1;
                        arr[0][2] = hs2;
                        for(int hs3=1; hs3<=h[1]; ++hs3){
                            for(int hs4=1; hs4<=h[1]; ++hs4){
                                for(int hs5=1; hs5<=h[1]; ++hs5){

                                    
                                    bool valid = true;
                                    if(hs3 + hs4 + hs5 == h[1]){
                                        arr[1][0] = hs3;
                                        arr[1][1] = hs4;
                                        arr[1][2] = hs5;
                                        arr[2][0] = w[0] - arr[0][0] - arr[1][0];
                                        arr[2][1] = w[1] - arr[0][1] - arr[1][1];
                                        arr[2][2] = w[2] - arr[0][2] - arr[1][2];

                                        if(arr[2][0] < 0 || arr[2][1] < 0 || arr[2][2] < 0) valid = false;
                                        if(arr[2][0] + arr[2][1] + arr[2][2] != h[2]) valid = false;

                                    }else valid = false;

                                    if(valid) { ++ans; for(int i=0; i<3; ++i) arr[1][i] = 0; }
                                }
                            }
                        }
                        for(int i=0; i<3; ++i) for(int e=0; e<3; ++e) arr[i][e] = 0;
                    }


                for(int i=0; i<3; ++i) for(int e=0; e<3; ++e) arr[i][e] = 0;
            }
        }
    }
    cout<<ans<<endl;

}

int main(){
    solve();
    return 0;
}