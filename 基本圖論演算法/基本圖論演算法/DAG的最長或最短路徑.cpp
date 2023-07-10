/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define ll long long
#define oo 1000000000
#define to first
#define w second
#define pll pair<ll, ll>
using namespace std;

ll n, m, s, t;
vector<pll> graph[10000];
ll dp_min[10000], dp_max[10000] = {0}, in_degree[10000];
queue<ll> que;

int main()
{
    cin >> n >> m >> s >> t;

    for (ll i = 0; i < n; i++)
        dp_min[i] = oo;
    for (ll i = 0; i < n; i++)
        dp_max[i] = -oo;

    dp_min[s] = 0; dp_max[s] = 0;

    ll from, to, w;
    for (ll i = 0; i < m; i++) {
        cin >> from >> to >> w;
        graph[from].push_back({ to, w });
        in_degree[to]++;
    }

    for (ll i = 0; i < n; i++) 
        if (in_degree[i] == 0)
            que.push(i);
    
    ll count = 0;
    while (!que.empty()) 
    {
        count++;
        ll parent = que.front();

        for (pll path : graph[parent]) 
        {
            if (dp_min[parent] < oo) {
                dp_min[path.to] = min(dp_min[path.to], dp_min[parent] + path.w);
                dp_max[path.to] = max(dp_max[path.to], dp_max[parent] + path.w);
            }

            if (--in_degree[path.to] == 0)
                que.push(path.to);
        }
        que.pop();
    }
    if (count != n)
        cout << "This graph is not a DAG";

    if (dp_min[t] == oo) 
        cout << "No path\nNo path";
    else
        cout << dp_min[t] << endl << dp_max[t]; 
}
*/