#include <iostream>
#define ll long long
using namespace std;

ll dp[10000000], match[22][22], dp2[10000000];
ll n;

int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++)
            cin >> match[i][j];
    }

    for (ll j = 0; j < n; j++) {
        if (match[0][j])
            dp[1 << j] = 1;
    }
    for (ll k = 1; k < (1 << n); k++) {
        cout << "dp[" << k << "] = " << dp[k] << endl;
    }


    for (ll i = 1; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            if (!match[i][j])
                continue;

            for (ll k = 1; k < (1 << n); k++) {
                dp2[k] = dp[k];
            }

            for (ll k = 1; k < (1 << n); k++) {
                if (((k >> j) & 1) == 0) {
                    dp2[k | (1 << j)] += dp[k];
                    if ((k | (1 << j)) == 7)
                        cout << "dp2[(" << k << " | (1 << " << j << "))<" << (k | (1 << j)) << ">] += " << dp[k] << endl;
                }

            }

            for (ll k = 1; k < (1 << n); k++) {
                dp[k] = dp2[k];
            }
        }
    }

    for (ll k = 1; k < (1 << n); k++) {
        cout << "dp[" << k << "] = " << dp[k] << endl;
    }

    cout << dp[(1 << n) - 1];

}