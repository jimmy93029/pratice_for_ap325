/*
#include <iostream>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;

ll ribbon[200000];
ll colors[200000] = {0};
ll n, L, ans = 0;

ll f(ll L);
int main()
{
    cin >> n >> L;
    for (ll i = 0; i < n; i++)
        cin >> ribbon[i];


    ll code, kinds = 0;
    for (ll i = 0; i < L; i++) {
        code = ribbon[i];
        if (colors[code] == 0)
            kinds++;
        colors[code]++;
    }
    ans = max(kinds, ans);

    for (ll i = L; i < n; i++)
    {
        code = ribbon[i - L];
        colors[code]--;
        if (colors[code] == 0)
            kinds--;

        code = ribbon[i];
        if (colors[code] == 0)
            kinds++;
        colors[code]++;
        
        ans = max(kinds, ans);
    }

    ans = f(L);

    cout << ans;
}


ll f(ll L)
{
    map<ll, ll> colors;
    ll max_kinds = 0, code, kinds = 0;;

    for (ll i = 0; i < L; i++) {
        if (++colors[ribbon[i]] == 1) {
            cout << "++colors[ribbon[i]]" << ribbon[i] << endl;
            kinds++;
        }

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