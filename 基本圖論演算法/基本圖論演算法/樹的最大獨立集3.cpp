/*
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

ll n;
vector<ll> childs[100000];
ll dp_[100000];

ll dp(ll x);
int main()
{
    cin >> n;

    ll parent;
    for (ll i = 1; i <= n - 1; i++) {
        cin >> parent;
        childs[parent].push_back(i);
    }
    for (ll i = 0; i < n; i++)
        dp_[i] = -1;

    cout << dp(0);
}


ll dp(ll x)
{
    if (dp_[x] >= 0)
        return dp_[x];
    else {
        ll sum_C = 0, sum_S = 0;
        for (ll child : childs[x]) {
            sum_C += dp(child);
            for (ll grandson : childs[child])
                sum_S += dp(grandson);
        }
        dp_[x] = max(sum_C, sum_S + 1);
        return dp_[x];
    }
}
*/