/*
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;


ll n;
ll parent[100005], chose[100005], dp[100005][4], w[100005];
vector<ll> graph[100005];

void dfs1(ll x, ll fa);
void dfs2(ll x, ll fa);
int main()
{
    cin >> n;

    for (ll i = 1; i <= n; i++)
        cin >> w[i];

    ll u, v;
    for (ll i = 0; i < n - 1; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs1(1, 0);

    dfs2(1, 0);

    cout << min(dp[1][0], dp[1][1]);

}


void dfs1(ll x, ll fa)
{
    for (ll v : graph[x]) {
        if (v != fa) {
            parent[v] = x;
            dfs1(v, x);
        }
    }
}


void dfs2(ll x, ll fa) 
{
    dp[x][0] = w[x];

    for (ll c : graph[x]) 
    {
        if (c == fa) continue;

        dfs2(c, x);

        for (ll g : graph[c]) {
            if (g == x) continue;

            if (dp[g][1] == 0)
                dp[x][0] += min(dp[g][0], dp[g][2]);
            else
                dp[x][0] += min(dp[g][0], min(dp[g][1], dp[g][2]));
        }
    }

    ll sum = 0, diff = (!graph[x].empty())? max((ll)0, dp[graph[x][0]][0] - dp[graph[x][0]][1]) : 0;
    for (ll c : graph[x]) {
        if (c == fa)
            continue;
        sum += min(dp[c][0], dp[c][1]);
        diff = min(diff, max((ll)0, dp[c][0] - dp[c][1]));
    }

    dp[x][1] = sum + diff;
    dp[x][2] = w[parent[x]] + min(dp[x][0], sum);
}
*/
