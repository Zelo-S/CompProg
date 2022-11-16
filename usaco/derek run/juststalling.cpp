#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, p, possibleCows;
    ll total = 1;
    vector<ll> cowHeights;
    vector<ll> barnHeights;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        cin >> p;
        cowHeights.push_back(p);
        //cout << cowHeights[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> p;
        barnHeights.push_back(p);
        //cout << barnHeights[i];

    }

    sort(cowHeights.begin(), cowHeights.end());
    sort(barnHeights.begin(), barnHeights.end());

    for (ll i = 0; i < n; i++) // barn height
    {
        possibleCows = -i;
        for (ll j = 0; j < n; j++) // cow height
        {
            if (barnHeights[i] >= cowHeights[j])
            {
                possibleCows += 1;
            }
        }
        total*=possibleCows;
        
    }
    cout << total;

    return 0;
}