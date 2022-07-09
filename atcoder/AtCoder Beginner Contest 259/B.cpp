#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265358979323846

void solve(){
    int x,y,d; cin>>x>>y>>d;
    
    double deg = (double) d * PI / 180;
    double x_new = ((double)x * cos(deg)) - ((double)y * sin(deg));
    double y_new = ((double)y * cos(deg)) + ((double)x * sin(deg));
    
    cout<<setprecision(12)<<x_new<<" "<<y_new<<endl;
}

int main(){
    solve();
    return 0;
}