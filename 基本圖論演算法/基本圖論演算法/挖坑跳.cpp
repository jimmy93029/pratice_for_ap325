/*
#include <iostream>
#define ll long long
#define pll pair<ll, ll>
#define fi first
#define se second
using namespace std;

ll graph[502][502], dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
pll boss[502][502];
ll m, n, k, maxi = 0, numboss = 0, ans1 = 0, ans2 = 0;

pll find_boss(ll i, ll j);
void join(pll a, pll b);
int main()
{
    cin >> m >> n >> k;

    for (ll i = 0; i <= m + 1; i++) {
        for (ll j = 0; j <= n + 1; j++) {
            if (i == 0 || i == m + 1 || j == 0 || j == n + 1)
                graph[i][j] = 0;
            else {
                cin >> graph[i][j];
                boss[i][j] = { -1 , 0 };

                if (graph[i][j] == 1) 
                    numboss++;                     
            }
        }
    }

    cout << "maxi = " << maxi << endl;
    cout << "numboss = " << numboss << endl;

    for (ll i = 1; i <= m; i++) {
        for (ll j = 1; j <= n; j++) 
        {
            if (graph[i][j] != 1)
                continue;

            for (ll dir = 0; dir < 4; dir++) {
                if (graph[i + dx[dir]][j + dy[dir]] == 1) 
                    join(find_boss(i, j), find_boss(i + dx[dir], j + dy[dir]));             
            }
        }
    }
    ans1 += maxi;
    ans2 += numboss;

    cout << "maxi = " << maxi << endl;
    cout << "numboss = " << numboss << endl;

    ll a, b;
    for (ll i = 0; i < k; i++) {
        cin >> a >> b;

        if (graph[a][b] == 1)
            continue;

        graph[a][b] = 1;

        for (ll dir = 0; dir < 4; dir++) {
            if (graph[a + dx[dir]][b + dy[dir]] == 1)
                join(find_boss(a, b), find_boss(a + dx[dir], b + dy[dir]));
        }
        ans1 += maxi;
        ans2 += numboss;

        cout << "maxi = " << maxi << endl;
        cout << "numboss = " << numboss << endl;
    }

    cout << ans1 << endl << ans2;

}


pll find_boss(ll i, ll j)
{
    if (boss[i][j].fi < 0)
        return {i, j};
    else {
        return boss[i][j] = find_boss(boss[i][j].fi, boss[i][j].se);
    }
}

void join(pll a, pll b)
{
    if (a == b)
        return;

    if (b.first < a.first)
        join(b, a);

    numboss--;
    boss[a.fi][a.se].fi += boss[b.fi][b.se].first;
    boss[b.fi][b.se] = { a.first, a.se };
    maxi = max(maxi, -boss[a.fi][a.se].fi);

}
*/
