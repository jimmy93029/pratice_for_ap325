/*
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;


const ll oo = 2e9;

ll n, p[205];
ll dp[205][205];

ll memo(ll i, ll j);
int main()
{
    cin >> n;
    for (ll i = 0; i <= n; i++)
        cin >> p[i];

    memo(0, n);

    cout << dp[0][n]; 
}


ll memo(ll i, ll j)
{
    if (dp[i][j] != 0)
        return dp[i][j];
    else if (i <= j && j <= i + 1)
        return dp[i][j] = 0;
    
    ll val = oo;
    for (ll k = i + 1; k < j; k++) {
        val = min(val, memo(i, k) + memo(k, j) + p[i] * p[k] * p[j]);
    }
    return dp[i][j] = val;
}

/*
void solve()
{
    ll j;
    for (ll len = 2; len <= n; len++) {
        for (ll i = 0; i <= n - len; i++) {
            j = i + len;
            for (ll k = i + 1; k < j; k++) {
                dp[]
            }
        }
    }
}
*/