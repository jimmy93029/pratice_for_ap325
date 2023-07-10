/*
#include <iostream>
#include <string>
#define ll long long
using namespace std

ll n;
string str;
ll dp[10] = { 0 }, dp2[10] = { 0 };
ll one[10] = { 0 }, two[10]{ 0 }, three[10] = { 0 };

ll makenum(ll a, ll r, ll d);
int main()
{  
    ll c, a, r, d, num;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> c >> a >> r >> d;
        num = makenum(a, r, d);
        if (c == 1)
            one[num]++;
        else if (c == 2)
            two[num]++;
        else
            three[num]++;
    }

    for (ll i = 0; i < 8; i++) {
        for (ll j = 0; j < 8; j++) {
            dp[i | j] += one[i] * two[j];
        }
    }

    for (ll i = 0; i < 8; i++) {
        for (ll k = 0; k < 8; k++) {
            dp2[i | k] += dp[i] * three[k];
        }
    }

    cout << dp2[7] << "\n";

}

ll makenum(ll a, ll r, ll d)
{
    ll num = d;
    num |= r << 1;
    num |= a << 2;
    return num;
}
*/