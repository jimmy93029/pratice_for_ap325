/*
#include <iostream>
#include <queue>
#define ll long long
using namespace std;

ll p[100001] = {0}, w[100001], son_deg[100001] = {0}, h[100001];
bool notLeaf[100001] = { false };
queue<ll> que;
ll n, child, ans = 0;

int main()
{
    cin >> n;
    for (ll i = 2; i <= n; i++) {
        cin >> p[i];
        notLeaf[p[i]] = true;
        son_deg[p[i]]++;
    }
    for (ll i = 2; i <= n; i++)
        cin >> w[i];

    for (ll i = 1; i <= n; i++) {
        if (!notLeaf[i])
            que.push(i);

        h[i] = 1;
    }

    while (!que.empty())
    {
        child = que.front();
        que.pop();

        ans += h[child] * (n - h[child]) * 2 * w[child];
        h[p[child]] += h[child];

        if (--son_deg[p[child]] == 0)
            que.push(p[child]);
    }

    cout << ans;
}
*/