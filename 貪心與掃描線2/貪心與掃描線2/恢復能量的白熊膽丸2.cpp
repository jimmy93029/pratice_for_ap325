/*
#include <iostream>
#include <algorithm>
#define ll long long
#define oo 1100001
using namespace std;

ll dp[oo], p[100001];
ll n, m, maxi;

ll f(ll F);
int main()
{
    cin >> n >> m;
    for (ll i = 0; i < n; i++) {
        cin >> p[i];
        maxi = max(maxi, p[i]);
    }

    ll F = oo;
    for (ll jump = oo - 2; jump > 0; jump /= 2) {
        if (F - jump >= 0 && dp[F - jump] == 0)
            dp[F - jump] = f(F - jump);

        while (F - jump >= 0 && dp[F - jump] <= m) {
            F = F - jump;
            if (F - jump >= 0 && dp[F - jump] == 0)
                dp[F - jump] = f(F - jump);
        }
    }

    cout << F;

}

ll f(ll F)
{
    if (F < maxi)
        return oo;

    ll m = 0, hp = F;

    hp -= p[0];
    for (ll i = 1; i < n; i++) {
        if (hp < p[i]) {
            m++;
            hp = F;
        }
        hp -= p[i];
    }

    return m;
}
*/