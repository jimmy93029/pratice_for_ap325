/*
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

vector<ll> graph[100001];
ll w[100001], dp[100001];
ll n, u, v;

void dfs(ll fa, ll G);
int main()
{
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> w[i];
    for (ll i = 0; i < n - 1; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(0, 1);
// ans 的選法有問題: 其實也可以只選一個 P，剩下的選 C 就行了 (不能全部選 C)
    ll sumP = 0;
    for (ll P : graph[1]) {
        sumP += dp[P];
    }
    cout << min(sumP, dp[1]);

}

void dfs(ll fa, ll G)
{
    if (graph[G].size() == 1 && graph[G][0] == fa ) {
        dp[G] = w[G];
        return;
    }

    ll sumP = 0;
    for (ll P : graph[G]) {
        if (P == fa)
            continue;
        dfs(G, P);

        ll sumC = 0;
        for (ll C : graph[P])
        {
            if (C == G)
                continue;

            ll sumGS = 0;
            for (ll GS : graph[C]) {
                if (GS == P)
                    continue;

                sumGS += dp[GS];
            }

            if (sumGS == 0)
                sumC += dp[C];
            else
                sumC += min(dp[C], sumGS);
        }

        sumP += min(dp[P], sumC);
    }
    dp[G] = sumP + w[G];
}
*/

