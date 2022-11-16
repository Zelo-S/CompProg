#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
typedef long long ll;

void solve(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("cbarn.in", "r", stdin);
	freopen("cbarn.out", "w", stdout);

    ll N; cin>>N;
    vector<ll> req(N);
    for(auto& f : req) cin>>f;
    
    ll min_ans = INF;
    for(ll enter=0; enter<N; ++enter){
        ll curr_sum = 0;
        ll front = enter;
        for(;front<N; ++front){
            curr_sum += (front - enter) * req[front];
        }
        --front;
        // cout<<"Current sum: "<<curr_sum<<"On enter: "<<enter<<" and front is: "<<front<<endl;
        for(ll back=0; back<enter; ++back){
            curr_sum += (front) * req[back];
            ++front;
        }
        min_ans = min(min_ans, curr_sum);
    }
    
    cout<<min_ans<<endl;

}

int main(){
    solve();
    return 0;
}