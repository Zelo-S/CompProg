#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("whereami.in", "r", stdin);
	freopen("whereami.out", "w", stdout);

    int strLength;
    string str1;
    int k = 0;

    //cout << str1.substr(0,3);

    cin >> strLength >> str1;

    map<string, int> map1;

    for (int j = 0; j<=strLength; j++) { 
        for (int i = 0; i<(strLength-j+1); i++) {
            //cout << str1.substr(i,j) << endl;
            map1[str1.substr(i,j)]++;
        }
    }

    //cout << map1["ABCD"];


    for (k = strLength; k>0; k--) {
        bool isNumberValid = true;
        for (auto a: map1) {
            if (a.second>1 && a.first.size() == k) {
                isNumberValid=false;
            }
        }
    if (isNumberValid == false) {
        cout << k+1;
        break;
        }
    }


    return 0;
}