/*
#include <iostream>
#include <algorithm>
#include <queue>
#define ll long long
#define pll pair<ll, ll>
#define x first
#define y second
using namespace std;

ll m, n;
char board[502][502];
ll dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
ll dist[502][502];
queue<pll> que;

int main()
{
    cin >> m >> n;

    char endline;
    for (ll i = 0; i <= m + 1; i++) {
        for (ll j = 0; j <= n + 1; j++) {
            if (i == 0 || i == m + 1 || j == 0 || j == n + 1)
                board[i][j] = '1';
            else
                board[i][j] = cin.get();
        }
        cin.get(endline);;
    }

    for (ll i = 1; i <= m; i++) {
        for (ll j = 1; j <= n; j++)
            dist[i][j] = -1;
    }

    que.push({ 1, 1 });
    while (!que.empty() && dist[m][n] < 0)
    {
        pll s = que.front();
        que.pop();

        for (ll i = 0; i < 4; i++) 
        {
            ll tx = s.x + dx[i], ty = s.y + dy[i];

            while (board[tx][ty] == '0')
            {
                if (dist[tx][ty] == -1) {
                    dist[tx][ty] = dist[s.x][s.y] + 1;
                    que.push({ tx, ty });
                }
                tx = tx + dx[i];
                ty = ty + dy[i];
            }
        }
    }
    if (m == 1 && n == 1)
        cout << 0;
    else
        cout << dist[m][n];
}
*/