/*
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define ll long long
using namespace std;

ll n;
vector<ll> childs[100000];
ll parents[100000];
ll son_degree[100000];
ll dp[100000];
queue<ll> que;

int main()
{
    cin >> n;
    for (ll i = 1; i <= n - 1; i++) {
        cin >> parents[i];
        childs[parents[i]].push_back(i);
        son_degree[parents[i]]++;
    }

    for (ll i = 1; i < n; i++)
        if (son_degree[i] == 0)
            que.push(i);

    while (!que.empty())
    {
        ll G = que.front();
        que.pop();

        ll sum_S = 0;
        for (ll parent : childs[G]) {
            for (ll S : childs[parent])
                sum_S += dp[S];
        }
        dp[G] = sum_S + 1;

        if (G == 0)
            break;
        if (--son_degree[parents[G]] == 0) {
            que.push(parents[G]);

            for (ll S : childs[G]) {
                ll sum_Gg = 0;
                for (ll Gg : childs[S])
                    sum_Gg += dp[Gg];

                dp[S] = max(dp[S], sum_Gg);
            }
        }
    }

    ll sum = 0;
    for (ll son : childs[0]) {
        sum += dp[son];
    }
    cout << max(dp[0], sum);

}
*/

