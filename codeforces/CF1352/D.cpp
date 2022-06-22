#include <bits/stdc++.h>
using namespace std;

void solve(){
    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        vector<int> arr(N);
        for(auto& f : arr) cin>>f;
        
        vector<int> prefix(N+1), suffix(N+1);
        for(int i=1; i<=N; ++i) prefix[i] = prefix[i-1] + arr[i-1];
        for(int i=N-1; i>=0; --i) suffix[i] = suffix[i+1] + arr[i];
        
        int A_ptr = 0, B_ptr = N;
        int A_count = 0, B_count = 0;
        int move_count = 0;
        
        bool isATurn = true;

        while(A_ptr < B_ptr){
            if(isATurn){
                while(prefix[A_ptr] - A_count <= suffix[B_ptr] - B_count && A_ptr<B_ptr){
                    ++A_ptr; 
                }
                A_count = prefix[A_ptr];
            }else{
                while(suffix[B_ptr] - B_count <= prefix[A_ptr] - A_count && A_ptr<B_ptr){
                    --B_ptr;
                }
                B_count = suffix[B_ptr];
            }
            
            if(isATurn) cout<<"A: ";
            else cout<<"B: ";
            cout<<A_ptr<<": "<<A_count<<" "<<B_ptr<<": "<<B_count<<endl;
            
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