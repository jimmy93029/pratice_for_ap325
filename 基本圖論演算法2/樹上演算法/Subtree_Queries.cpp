/*
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

const ll maxN = 2e5 + 5;

ll n, q, t = 1;
ll val[maxN], in[maxN], out[maxN];
vector<ll> graph[maxN];

ll bit[2 * maxN];

ll query(ll l, ll r)
{
    if (l > 1)
        return query(1, r) - query(1, l - 1);
    else
    {
        ll sum = 0;
        for (ll i = r; i > 0; i -= i & (-i))
            sum += bit[i];
        return sum;
    }
}


void update(ll i, ll x)
{
    for (; i <= 2 * n; i += i & (-i)) {
        bit[i] += x;
    }
}


void tour(ll u, ll fa)
{
    in[u] = t;
    update(t, val[u]);
    t++;

    for (ll v : graph[u]) {
        if (v == fa)
            continue;
        tour(v, u);
    }

    out[u] = t;
    update(t, val[u]);
    t++;
}


int main()
{
    cin >> n >> q;

    for (ll i = 1; i <= n; i++)
        cin >> val[i];

    ll u, v;
    for (ll i = 0; i < n - 1; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    tour(1, 0);

    ll c, s, x;
    for (ll i = 0; i < q; i++) {
        cin >> c;
        if (c == 1) {
            cin >> s >> x;
            update(in[s], x - val[s]);
            update(out[s], x - val[s]);
            val[s] = x;
        }
        else {
            cin >> s;
            cout << query(in[s], out[s]) / 2 << "\n";
        }
    }
}
*/