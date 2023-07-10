/*
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

struct Order
{
    ll t, d;
}orders[100001];

ll n, ans = 0;

bool comp(Order i, Order j) { return (i.t < j.t); }
int main()
{
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> orders[i].t;
    for (ll i = 1; i <= n; i++)
        cin >> orders[i].d;

    sort(orders + 1, orders + n + 1, comp);

    ll time = 0;
    for (ll i = 1; i <= n; i++) {
        time += orders[i].t;
        ans += orders[i].d - time;
    }

    cout << ans;
}
*/