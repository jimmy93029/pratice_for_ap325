/*
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

struct Event
{
    ll s, t, e;

} events[100000];

ll dp[100000];

bool comp1(Event i, Event j)
{
    if (i.t < j.t)                     return true;
    else if (i.t == j.t && i.s < j.s)  return true;
    else                               return false;
}

bool comp2(Event i, ll j) {return (i.t < j);}

int main()
{
    ll n, pos;
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> events[i].s >> events[i].t >> events[i].e;

    sort(events, events + n, comp1);

    dp[0] = events[0].e;
    for (ll i = 1; i < n; i++) {
        pos = lower_bound(events, events + i, events[i].s, comp2) - events - 1;
        dp[i] = max(dp[i - 1], dp[pos] + events[i].e);
    }

    cout << dp[n - 1];
}
*/