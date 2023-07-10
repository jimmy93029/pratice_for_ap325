/*
#include <iostream>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;

ll dp_L[200000] = {0};
ll ribbon[200000];
ll n, ans;

ll f(ll L);
int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> ribbon[i];

    ll L = n, nc = f(n);
    for (ll jump = n - 1; jump > 0; jump = jump/2) {
        if (dp_L[L - jump] == 0)
            dp_L[L - jump] = f(L - jump);
        while (dp_L[L - jump] == nc) {
            L = L - jump;
            if (dp_L[L - jump] == 0)
                dp_L[L - jump] = f(L - jump);
        }
    }

    cout << L;
}


ll f(ll L)
{
    map<ll, ll> colors;
    ll max_kinds = 0, kinds = 0;;

    for (ll i = 0; i < L; i++) {
        if (++colors[ribbon[i]] == 1) 
            kinds++;
    }
    max_kinds = max(kinds, max_kinds);

    for (ll i = L; i < n; i++)
    {
        if (--colors[ribbon[i - L]] == 0)
            kinds--;

        if (++colors[ribbon[i]] == 1)
            kinds++;

        max_kinds = max(kinds, max_kinds);
    }

    return  max_kinds;
}
*/
