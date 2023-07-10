/*
#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;

ll n, k, ans = 0;
ll p[50005];

void rec(ll round, ll s, ll t);
int main()
{
    cin >> n >> k;
    for (ll i = 1; i <= n; i++)
        cin >> p[i];

    rec(1, 1, n);

    cout << ans;
}

void rec(ll round, ll s, ll t)
{
    if (t - s < 2)
        return;

    ll perflix_sum = 0, sum = 0, m = s + 1;
    for (ll i = s; i <= t; i++) {
        sum += p[i];
        perflix_sum += p[i] * i;
    }

    for (ll i = s + 1; i < t; i++) {
        if (abs(perflix_sum - i * sum) < abs(perflix_sum - m * sum))
            m = i;
    }

    // cout << "p[m] = " << p[m] << endl;
    ans += p[m];

    if (round >= k)
        return;

    rec(round + 1, s, m - 1);
    rec(round + 1, m + 1, t);
}
*/