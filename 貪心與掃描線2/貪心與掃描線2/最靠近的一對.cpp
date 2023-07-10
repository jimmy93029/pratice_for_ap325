/*
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define pll pair<ll, ll>
#define x first
#define y second
using namespace std;

struct Node
{
    ll R, L, min_c_d, max_cdp;
};
ll n;
pll points[100001];
vector<pll> up, down;
Node seg[400004];

void build(ll l, ll r, ll v);
ll query_c_d(ll l, ll r, ll v);
ll query_cdp(ll l, ll r, ll v);
int main()
{
    ll x, y;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> x >> y;
        points[i] = { x, y };
    }

    sort(points, points + n);


    for (ll i = 0; i < n; i++) {
        if (points[i].y >= points[0].y)
            up.push_back(points[i]);
        else
            down.push_back(points[i]);
    }



}


void build(ll l, ll r, ll v)
{
    if (l == r) {
        seg[v].min_c_d = up[r].x - up[r].y;
        seg[v].max_cdp = up[r].x + up[r].y;
    }

    ll mid = (l + r) >> 1;
    build(l, mid, v << 1);
    build(mid + 1, r, v << 1 | 1);

    seg[v].min_c_d = min(seg[v << 1].min_c_d, seg[v << 1 | 1].min_c_d);
}

ll query_c_d(ll l, ll r, ll v)
{
    ll mid = (seg[v].L + seg[v].R) / 2;
    if (seg[v].L == l && seg[v].R == r) {
        return seg[v].min_c_d;
    }
    else if (r <= mid)
        return query_c_d(l, r, v << 1);
    else if (l > mid)
        return query_c_d(l, r, v << 1 | 1);
    else {
        return min(query_c_d(l, mid, v << 1), query_c_d(mid + 1, r, v << 1 | 1));
    }
}

ll query_cdp(ll l, ll r, ll v)
{
    ll mid = (seg[v].L + seg[v].R) / 2;
    if (seg[v].L == l && seg[v].R == r) {
        return seg[v].max_cdp;
    }
    else if (r <= mid)
        return query_cdp(l, r, v << 1);
    else if (l > mid)
        return query_cdp(l, r, v << 1 | 1);
    else {
        return max(query_cdp(l, mid, v << 1), query_cdp(mid + 1, r, v << 1 | 1));
    }
}
*/