/*
#include <iostream>
#include <queue>
#include <vector>
#define ll long long
#define pll pair<ll, ll>
#define code first
#define id second
using namespace std;


ll n, ans = 0;
ll t[100005], parent[100005], deg[100005], is1[100005];
queue < pll > que;

void solve();
int main()
{
    cin >> n;
    for (ll i = 1; i <= n - 1; i++) {
        cin >> t[i];
        parent[i] = t[i];
        deg[t[i]]++;
    }

    for (ll i = 0; i < n; i++) {
        if (deg[i] == 0) {
            que.push({0, i});
        }
    }

    solve();

    cout << ans;
}


void solve()
{
    ll id, code;
    while (!que.empty())
    {
        id = que.front().id, code = que.front().code;
        que.pop();
        // cout << "que.front().id = " << id << "\n";

        if (code && !is1[id]) {
            ans++;
            is1[id] = 1;
        }

        if (--deg[id] <= 0)
        {
            if (id == 0)
                break;

            if (is1[id])
                code = 0;
            else
                code = 1;
            que.push({ code, parent[id] });
        }

    }

}
*/
