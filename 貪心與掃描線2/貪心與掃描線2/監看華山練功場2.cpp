/*
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll n, x, y, ans = 0;
struct Disciple
{
    ll s, t;
}stt[100001];

bool comp(Disciple i, Disciple j) { return (i.s < j.s); }
int main()
{
    cin >> n >> x >> y;
    for (ll i = 0; i < n; i++) {
        cin >> stt[i].s >> stt[i].t;
    }

    sort(stt, stt + n, comp);

    ll pos = 0, r = 0;
    for (ll i = 0; i < n; i++) {
        if (stt[i].s <= x && x <= stt[i].t && stt[i].t >= r)
            pos = i, r = stt[pos].t, ans = 1;
    }

    bool check = false;
    for (ll i = 0; i < n; i++) {
        if (stt[i].s > r) {
            r = stt[pos].t;
            ans++;
        }
        if (r >= y) {
            check = true;
            break;
        }
        if (stt[i].s <= r && stt[i].t > stt[pos].t)
            pos = i;
    }

    if (check)
        cout << ans;
    else
        cout << -1;

}
*/