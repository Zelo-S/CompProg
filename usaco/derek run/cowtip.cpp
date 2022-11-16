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

int main()
{
    setIO("cowtip");
    int n, turns;
    turns = 0;
    string cow;
    cin >> n;
    vector<vector<int>> field(n,vector<int>(n));

    for (int i = 0; i<n; i++) {
        cin >> cow;
        for (int j = 0; j<n; j++) {
            if (cow[j] == '0') {
                field[i][j] = 0;
            }
            else {
                field[i][j] = 1;
            }
        }
    }

    for (int i = n-1; i>=0; i--) { //vertical
        for (int j = n-1; j>=0; j--) { //horizontal
            if (field[i][j] == 1) {
                turns +=1;
                for (int k = 0; k<=i; k++) {
                    for (int l = 0; l<=j; l++) {
                        if (field[k][l] == 1) {
                            field[k][l] = 0;
                        }
                        else {
                            field[k][l] = 1;
                        }
                    }
                }
            }
        }
    }

    cout << turns;

return 0;
}