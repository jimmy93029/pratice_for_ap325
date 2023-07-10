/*
#include <iostream>
#include <algorithm>
#define ll long long
#define pll pair<ll, ll>
#define s first
#define t second
using namespace std;

struct Node
{
    ll L, R;
    pll maxt;
}arr[400005];

ll n, x, y, ans = 0;
pll stt[100001];

bool comp(ll i, pll j) { return (i < j.s); }
void build(ll l, ll r, ll v = 1)
{
    arr[v].L = l;
    arr[v].R = r;
    ll mid = (l + r) >> 1;

    if (l == r) {
        arr[v].maxt = { stt[r].t, r };
    }
    build(l, mid, v << 1);
    build(mid + 1, r, v << 1 | 1);
    arr[v].maxt = max(arr[v << 1].maxt, arr[v << 1 | 1].maxt);
}

pll query_max(ll l, ll r, ll v = 1)
{
    if (arr[v].L == l && arr[v].R == r) {
        return arr[v].maxt;
    }
    ll mid = (arr[v].L + arr[v].R) >> 1;
    return max(query_max(l, mid, v << 1), query_max(mid + 1, r, v << 1 | 1));
}


int main()
{
    cin >> n >> x >> y;
    for (ll i = 0, s , t ; i < n; i++) {
        cin >> s >> t;
        stt[i] = { s,t };
    }

    sort(stt, stt + n);

    cout << "i hvae sort " << endl;
    build(0, n - 1);

    cout << "I have build" << endl;
    ll l = 0, maxi = 0;
    bool check = false;
    for (ll i = 0; i < n; i++) {
        if (stt[i].s <= x && x <= stt[i].t && stt[i].t > maxi) {
            l = i;
            maxi = stt[l].t;
            ans = 1;
        }
    }
    if (ans == 0) {
        cout << -1;
        return 1;
    }

    ll r;
    while (stt[l].t < y)
    {
        r = upper_bound(stt + l, stt + n, stt[l].t, comp) - stt - 1;
        l = query_max(l, r).second;
        ans++;
    }

    cout << ans;
}
*/
