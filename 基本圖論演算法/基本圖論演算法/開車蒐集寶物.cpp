/*
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

ll n, m, ans = 0;
ll treasures[50000];
vector<ll> graph[50000];
ll visit[50000] = { 0 };

ll dfs(ll from);
int main()
{
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
        cin >> treasures[i];

    for (ll from, to, i = 0; i < m; i++) {
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    for (ll i = 0; i < n; i++)
        if (!visit[i]) {
            visit[i] = 1;
            ll num = dfs(i);
            // cout << num << endl;
            ans = max(ans, num);
        }

    cout << ans;
}

ll dfs(ll from)
{
    ll price = 0;

    for (ll to : graph[from])
        if (!visit[to]) {
            visit[to] = 1;
            price += dfs(to);
        }
  
    return (price + treasures[from]);
}
*/