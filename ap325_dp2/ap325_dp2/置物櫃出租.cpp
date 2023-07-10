/*
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll m, n, s, sum = 0;
ll f[101];
ll dp[2][200001];

int main()
{
    cin >> n >> m >> s;
    for (ll i = 1; i <= n; i++) {
        cin >> f[i];
        sum += f[i];
    }

    ll temp, from = 0, to = 1, w_max = m - s;
    for (ll i = 0; i <= n; i++) {
        for (ll w = 0; w <= w_max; w++) {
            if (i == 0 || w == 0)
                dp[to][w] = 0;
            else if (f[i] > w)
                dp[to][w] = dp[from][w];
            else
                dp[to][w] = max(dp[from][w], f[i] + dp[from][w - f[i]]);
        }
        temp = from;
        from = to;
        to = temp;
    }

    cout << sum - dp[from][w_max];
}
*/