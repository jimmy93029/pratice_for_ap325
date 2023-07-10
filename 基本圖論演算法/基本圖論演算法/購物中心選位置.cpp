/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define ll long long
#define pll pair<ll, ll> 
using namespace std;

ll n, w, p, ans1 = -1, ans2 = 0;
ll son_deg[100001] = { 0 }, num[100001];
pll parents[100001];
vector<pll> graph[100001];
queue<ll> que;

void dfs(ll fa, ll x, ll w);
int main()
{
    cin >> n;
    for (ll i = 1; i <= n - 1; i++) {
        cin >> p >> w;
        parents[i] = { p, w };
        graph[p].push_back({ i, w });
        graph[i].push_back({ p, w });
        son_deg[p]++;
    }

    for (ll i = 0; i < n; i++){
        if (!son_deg[i])
            que.push(i);

        num[i] = 1;
    }

    while (!que.empty())
    {
        ll child = que.front(), parent = parents[child].first;
        que.pop();

        if (num[child] >= n / 2 && ans1 == -1) {
            ans1 = child;
        }

        ans2 += parents[child].second * min(n - num[child], num[child]);
        num[parent] += num[child];
        
        if (--son_deg[parent] == 0)
            que.push(parent);
    }

    // dfs(-1, ans1, 0);

    cout << ans1 << endl << ans2;
}

void dfs(ll fa, ll x, ll w)
{
    ans2 += w;

    for (pll path : graph[x]) {
        if (path.first != fa) {
            dfs(x, path.first, w + path.second);
        }
    }
}
*/