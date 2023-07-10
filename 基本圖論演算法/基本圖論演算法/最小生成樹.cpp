/*
#include <iostream>
#include <algorithm>
#include <tuple>
#define ll long long
using namespace std;

ll n, m, ans = 0;
tuple<ll, ll, ll> graph[100000];
ll parent[10000];

ll find_root(ll x);
bool join(ll a, ll b);
int main()
{
    cin >> n >> m;

    ll u, v, w_, round = 0;
    for (ll i = 0; i < m; i++) {
        cin >> u >> v >> w_;
        graph[i] = make_tuple( w_, u, v );
    }

    std::sort(graph, graph + m);
    
    for (ll i = 0; i < n; i++)
        parent[i] = -1;

    for (ll i = 0; i < m; i++) 
    {
        tie(w_, u, v) = graph[i];

        ll root1 = find_root(u);
        ll root2 = find_root(v);

        if (join(root1, root2)) {
            ans += w_;
            round++;
        }

        if (round == n - 1)
            break;
    }
    if (round == n - 1)
        cout << ans;
    else
        cout << -1;
}

ll find_root(ll x)
{
    if (parent[x] < 0)
        return x;
    else
        return parent[x] = find_root(parent[x]);
}

bool join(ll a, ll b)
{
    if (a == b) return false;

    if (parent[b] >= parent[a]) {
        parent[a] += parent[b];
        parent[b] = a;
    }
    else {
        parent[b] += parent[a];
        parent[a] = b;
    }
    return true;
}
*/