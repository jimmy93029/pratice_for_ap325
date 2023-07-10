/*
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll n, k;
ll p[100001], dp[2][100000] = {0};

int main()
{
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
        cin >> p[i];
    k = 2;

    for (ll j = 0; j < n; j++) {
        dp[0][j] = 0;
    }
    for (ll i = 1; i < k; i++) {
        for (ll j = 0; j < n; j++) {
            for (ll t = 0; t <= j; t++) {
                dp[i][j] = max(dp[i][j], dp[i - 1][t] + p[j] - p[t]);
            }
        }
    }                                                                                                                         

}
*/