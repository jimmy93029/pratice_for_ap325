/*
#include <iostream>
#include <queue>
#include <vector>
#define ll long long
#define oo 10000000
#define pll pair<ll, ll>
#define v first 
#define w second 
using namespace std;

vector<pll> graph[10000];
ll dist[10000];

struct comp
{
   bool operator()(ll i, ll j) { return (dist[i] > dist[j]); }
};

int main()
{
    ll n, m, u, v, w;
    cin >> n >> m;
    for (ll i = 0; i < m; i++) {
        cin >> u >> v >> w;
        graph[u].push_back({ v, w });
        graph[v].push_back({ u, w });
    }

    priority_queue<ll, vector<ll>, comp> pq;

    for (ll i = 0; i < n; i++) {
        dist[i] = oo;
        pq.push(i);
    }

    dist[0] = 0;
    
    while (!pq.empty())
    {
        u = pq.top();
        pq.pop();

        for (pll path : graph[u])
        {
            if (dist[u] + path.w < dist[path.v]) {
                dist[path.v] = dist[u] + path.w;
                // cout << "dist[" << path.v << "] = " << dist[u] + path.w << endl;
            }
        }
    }

    ll ans1 = -1, ans2 = 0;
    for (ll i = 0; i < n; i++) {
        if (dist[i] < oo)
            ans1 = max(ans1, dist[i]);
        else
            ans2++;
    }

    cout << ans1 << endl << ans2;
}

*/