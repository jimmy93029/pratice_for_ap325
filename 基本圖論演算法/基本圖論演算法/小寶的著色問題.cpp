/*
#include <iostream>
#include <vector>
#define ll long long
#define pll pair<ll, ll>
using namespace std;

ll T, m, n;
ll colors[10001];
bool visit[10001] = { false }, ans = true;
vector<ll> graph[10001];

void dfs(ll x, ll color);
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> T;
    while (T--)
    {
        ll a, b;

        cin >> n >> m;

        for (ll i = 0; i < m; i++){
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        for (ll i = 0; i < n; i++) {
            if (!ans)
                break;
            if (!visit[i])
                dfs(i, 1);
        }
        
        if (ans)
            cout << "yes" << endl;
        else
            cout << "no" << endl;

        for (ll i = 0; i < n; i++)
            visit[i] = false;
        
        for (ll i = 0; i < n; i++)
            graph[i].clear();
        
        ans = true;
    }
}

void dfs(ll x, ll color)
{
    visit[x] = true;
    colors[x] = color;

    for (ll child : graph[x]) {
        if (!visit[child])
            dfs(child, -color);
        else if (ans && colors[child] == color)
            ans = false;
    }
}
*/