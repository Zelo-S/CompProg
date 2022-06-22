#include <bits/stdc++.h>
using namespace std;

void solve(){
    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        vector<int> arr(N);
        for(auto& f : arr) cin>>f;
        vector<int> taken(N);
        
        /*
        vector<int> prefix(N+1), suffix(N+1);
        for(int i=1; i<=N; ++i) prefix[i] = prefix[i-1] + arr[i-1];
        for(int i=N-1; i>=0; --i) suffix[i] = suffix[i+1] + arr[i];
        */
        
        int A_ptr = 0, B_ptr = N-1;
        int A_count = 0, B_count = 0;
        int move_count = 0;
        
        bool isATurn = true;

        int AprevAdd = 0, BprevAdd = 0;
        while(A_ptr < B_ptr){
            if(isATurn){
                AprevAdd = 0;
                while(AprevAdd <= BprevAdd && !taken[A_ptr]) {
                    AprevAdd += arr[A_ptr];
                    taken[A_ptr] = 1;
                    ++A_ptr;
                }
                A_count += AprevAdd;
            }else{
                BprevAdd = 0;
                while(BprevAdd <= AprevAdd && !taken[B_ptr]) {
                    BprevAdd += arr[B_ptr];
                    taken[B_ptr] = 1;
                    --B_ptr;
                }
                B_count += BprevAdd;
            }
            
            ++move_count;
            isATurn = !isATurn;
        }
        
        cout<<move_count<<" "<<A_count<<" "<<B_count<<endl;
    }
}

int main(){
    solve();
    return 0;
}