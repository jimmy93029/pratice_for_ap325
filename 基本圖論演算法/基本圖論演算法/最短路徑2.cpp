/*
#include <iostream>
#include <queue>
#include <vector>
#include <tuple>
#define ll long long
#define pll pair<ll, ll>
#define oo 10000000
using namespace std;

ll n, m, u, v, w, ans1 = 0, ans2 = 0;
vector<pll> graph[10005];
priority_queue<pll> pq;
ll dist[10005];

int main()
{
    cin >> n >> m;
    for (ll i = 0; i < m; i++) {
        cin >> u >> v >> w;
        graph[u].push_back({ -w, v });
        graph[v].push_back({ -w, u });
    }

    for (ll i = 1; i < n; i++) {
        dist[i] = -oo;
        pq.push({ -oo, i });
    }
    pq.push({ 0, 0 });

    ll dist_, from, to;
    while (!pq.empty())
    {
        tie(dist_, from) = pq.top();
        pq.pop();

        for (pll path : graph[from])
        {
            tie(w, to) = path;
            if (dist_ + w > dist[to]) 
            {
                dist[to] = dist_ + w;
                pq.push({ dist[to], to });
            }
        }
    }

    for (ll i = 0; i < n; i++) {
        if (dist[i] != -oo)
            ans1 = min(ans1, dist[i]);
        else
            ans2++;
    }

    cout << -ans1 << endl << ans2;
}
*/