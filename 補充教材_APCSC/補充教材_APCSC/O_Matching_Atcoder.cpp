/*
#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;

ll n, ans = 0, mod = 1000000007;
ll a[22][22];
ll p[22];

void rec(ll round, ll record);
int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (ll i = 0; i < n; i++) {
        ll num = 0;
        for (ll j = n - 1; j >= 0; j--) {
            num |= a[i][j] << (n - 1 - j);
        }
        p[i] = num;
    }

    rec(0, ~0);

    cout << ans;
}

void rec(ll round, ll record)
{
    if (round >= n) {
        ans = ans % mod;
        return;
    }

    ll num = p[round] & record;
    for (ll i = 0; i < n; i++) {
        if ((num >> i) & 1) {
            // cout << "round = " << round << ", i = " << i << endl;
            rec(round + 1, record ^ (1 << i));
        }
    }


}
*/