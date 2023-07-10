/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define ll long long
#define pll pair<ll, ll> 
using namespace std;

ll n, m, u, v;
ll in_deg[10001], dp[10001] = {0}, choose[10001] = {0};
vector<ll> graph[10001], workseq[10001];
queue<ll> que;

int main()
{
    cin >> n >> m;
    for (ll i = 1; i <= n; i++)
        cin >> dp[i];
    for (ll i = 0; i < m; i++) {
        cin >> u >> v;
        in_deg[v]++;
        graph[u].push_back(v);
    }

    for (ll i = 1; i <= n; i++) {
        if (in_deg[i] == 0) {
            que.push(i);
            workseq[i].push_back(i);
        }
    }

    while (!que.empty())
    {
        u = que.front();
        que.pop();
        // cout << "u = " << u << endl;

        for (ll v : graph[u])
        {
            if (dp[u] > dp[choose[v]])
                choose[v] = u;

            if (--in_deg[v] == 0) {
                // cout << "--in_deg[" << v << "] == 0" << endl;
                workseq[v].assign(workseq[choose[v]].begin(), workseq[choose[v]].end());
                workseq[v].push_back(v);
                dp[v] += dp[choose[v]];
                que.push(v);
            }
        }
    }
    
    for (ll i = 1; i <= n; i++)
        cout << "dp[" << i << "] = " << dp[i] << endl;
  
    
    ll max_ = 0;
    for (ll i = 1; i <= n; i++) {
        if (dp[i] > dp[max_])
            max_ = i;
    }
    
    cout << dp[max_] << endl;
    sort(workseq[max_].begin(), workseq[max_].end());
    for (ll work : workseq[max_])
        cout << work << ' ';
    
}
*/