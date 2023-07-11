/*
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;


const ll oo = 2e9;
ll n, L;
ll p[205];
ll dp[205][205];


ll memo(ll i, ll j)
{
    if (dp[i][j])
        return dp[i][j];
    else if (i + 1 == j)
        return 0;

    ll val = oo;
    for (ll k = i + 1; k < j; k++) {
        val = min(val, memo(i, k) + memo(k, j) + p[j] - p[i]);
    }
    return dp[i][j] = val;
     
}


int main()
{
    cin >> n >> L;

    p[0] = 0;
    for (ll i = 1; i <= n; i++)
        cin >> p[i];
    p[n + 1] = L;
    n++;

    sort(p, p + n);

    memo(0, n);

    cout << dp[0][n];
}
*/
