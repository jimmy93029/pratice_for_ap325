/*
#include <iostream>
#include <algorithm>
#include <string>
#define ll long long
using namespace std;

ll mapping[501][501], dp[501][501];
string a, b;

int main()
{
    cin >> a >> b;
    a = " " + a, b = " " + b;

    ll max_i = 0, max_j = 0, ans = 0;
    for (ll i = 0; i <= a.length(); i++) {
        for (ll j = 0; j <= b.length(); j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else 
            {
                if (a[i] == b[j])
                    mapping[i][j] = 8;
                else
                    mapping[i][j] = -5;

                dp[i][j] = max(max(dp[i - 1][j] - 3, dp[i][j - 1] - 3), dp[i - 1][j - 1] + mapping[i][j]);
                dp[i][j] = (dp[i][j] < 0) ? 0 : dp[i][j];

                if (dp[i][j] > ans)
                    max_i = i, max_j = j, ans = dp[i][j];
                    
            }
        }
    }

    string ali_a = "", ali_b = "";
    ll i = max_i, j = max_j;
    while (dp[i][j] > 0)
    {
        if (dp[i][j] - mapping[i][j] == dp[i - 1][j - 1]) {
            ali_a = a[i] + ali_a, ali_b = b[j] + ali_b;
            i = i - 1, j = j - 1;
        }
        else if (dp[i][j] - (-3) == dp[i - 1][j]) {
            ali_a = a[i] + ali_a, ali_b = "-" + ali_b;
            i = i - 1;
        }
        else if (dp[i][j] - (-3) == dp[i][j - 1]) {
            ali_b = b[j] + ali_b, ali_a = "-" + ali_a;
            j = j - 1;
        }
    }
    cout << "alignment a = " << ali_a << ", alignment b = " << ali_b << endl;

    cout << ans << endl;

}
*/















/*
int main()
{
    cin >> stringa >> stringb;
    ll lena = stringa.length(), lenb = stringb.length();

    for (ll i = 0; i < lena; i++) {
        for (ll j = 0; j < lenb; j++) {
            if (stringa[i] == stringb[j])
                mapping[i][j] = 8;
            else
                mapping[i][j] = -5;

            dp1[i][j] = mapping[i][j];
        }
    }

    for (ll j = 0; j < lenb - 1; j++) {
        for (ll i = 0; i < lena; i++) {
            for (ll k = i + 1; k < lena; k++)
            {
                ll penalty = (k - i - 1) * (-3);
                if (dp1[i][j] >= 0)
                    dp1[k][j + 1] = max(dp1[k][j + 1], dp1[i][j] + mapping[k][j + 1] + penalty);
            }
        }
    }

    ll ans = 0;
    for (ll i = 0; i < lena; i++) {
        for (ll j = 0; j < lenb; j++) {
            ans = max(ans, dp1[i][j]);
        }
    }

    cout << ans;
}
*/