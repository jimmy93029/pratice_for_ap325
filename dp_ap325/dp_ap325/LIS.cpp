#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll n;
ll seq[200000];
ll dp[200000];

int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> seq[i];

    for (ll i = 0; i < n; i++) 
    {
        ll max_ = 0;
        for (ll j = 0; j < i; j++) {
            if (seq[j] < seq[i])
                max_ = max(max_, dp[j]);
        }
        dp[i] = max_ + 1;
    }

    cout << *max_element(dp, dp + n);
}
