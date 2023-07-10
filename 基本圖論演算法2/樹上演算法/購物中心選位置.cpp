/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define ll long long
#define pll pair<ll, ll>
#define w first
#define to second
using namespace std;

ll n, len = 0;
vector<pll> graph[100000];
pll dist[100000];
bool notLast[100000] = {false};

ll f(ll x);
void dfs(ll p, ll x, ll w);
int main()
{
    ll p, w;
    cin >> n;
    for (ll i = 1; i < n; i++) {
        cin >> p >> w;
        graph[i].push_back({ w, p });
        graph[p].push_back({ w, i });
        notLast[p] = true;
    }

    ll last;
    for (ll i = 0; i < n; i++){
        if (!notLast[i]) {
            last = i;
            break;
        }
    }

    dfs(-1, last, 0);

    sort(dist, dist + len);

    if (f(dist[len / 2 - 1].w) < f(dist[len / 2].w))
        cout << dist[len / 2 - 1].to << endl << f(dist[len / 2 - 1].w);
    else if (f(dist[len / 2].w) < f(dist[len / 2 - 1].w))
        cout << dist[len / 2].to << endl << f(dist[len / 2].w);
    else
    {
        ll dist_of_0;
        for (ll i = 0; i < len; i++)
            if (dist[i].to == 0)
                dist_of_0 = f(dist[i].w);

        if (abs(f(dist[len / 2 - 1].w) - dist_of_0) <= abs(f(dist[len / 2].w) - dist_of_0))
            cout << dist[len / 2].to << endl << f(dist[len / 2].w);
        else
            cout << dist[len / 2 - 1].to << endl << f(dist[len / 2 - 1].w);
    }
    
}

void dfs(ll p, ll x, ll w)
{
    dist[len++] = { w, x };

    for (pll path : graph[x]) {
        if (path.to != p)
            dfs(x, path.to, w + path.w);
    }
}

ll f(ll x)
{
    ll sum = 0;
    for (ll i = 0; i < len; i++)
        sum += abs(x - dist[i].w);
    return sum;
}
*/