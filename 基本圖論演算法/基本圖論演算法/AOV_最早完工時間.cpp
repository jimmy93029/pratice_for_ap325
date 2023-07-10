
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>
#define ll long long
#define pll pair<ll, ll>
using namespace std;


queue<ll> que;
vector<ll> graph[10005], pre[10005], vital, maxs;
ll w[10005], in_deg[10005], dp[10005];
ll n, m;


void solve();
void output();
int main()
{
    cin >> n >> m;

    for (ll i = 1; i <= n; i++)
        cin >> w[i];

    ll u, v;
    for (ll i = 0; i < m; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        in_deg[v]++;
    }

    for (ll i = 1; i <= n; i++) {
        if (!in_deg[i])
            que.push(i);
    }

    solve();
    output();

}


void solve()
{
    ll u;
    while (!que.empty())
    {
        u = que.front();
        que.pop();
        dp[u] += w[u];

        for (ll v : graph[u])
        {
            if (dp[u] == dp[v]) {
                pre[v].push_back(u);
            }

            if (dp[u] > dp[v]) {
                dp[v] = dp[u];
                pre[v].clear();
                pre[v].push_back(u);
            }

            if (--in_deg[v] == 0)
                que.push(v);
        }
    } 

}


bool done[10005];
void dfs(ll v)
{
    if (done[v])
        return;
    done[v] = true;
    vital.push_back(v);

    for (ll u : pre[v]) {
        dfs(u);
    }
}



void output()
{
    ll maxi = *max_element(dp + 1, dp + n + 1);

    for (ll i = 1; i <= n; i++) {
        if (dp[i] == maxi)
            maxs.push_back(i);
    }

    cout << maxi << "\n";

    done[0] = true;
    for (ll max_: maxs)
        dfs(max_);
    
    set<ll> se (vital.begin(), vital.end());

    for (auto v : se)
        cout << v << " ";
}

