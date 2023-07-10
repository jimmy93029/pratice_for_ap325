/*
#include <iostream>
#include <vector>
#include <queue>
#define ll long long
#define pll pair<ll, ll>
#define oo 100000000000
#define to first
#define w second
using namespace std;

queue<ll> que;
vector<pll> graph[2501];
ll dist[2501], score[2501];
bool circle = false, vis[2501] = {false};
ll n, m, s;

int main()
{
    cin >> n >> m;
    for (ll i = 1, a, b, x; i <= m; i++) {
        cin >> a >> b >> x;
        graph[a].push_back({ b, -x });
    }

    for (ll i = 1; i <= n; i++) 
        score[i] = oo;
    
    score[1] = 0;
    dist[1] = 0;
    vis[s] = true;
    que.push(1);
    while (!que.empty())
    {
        s = que.front();
        que.pop();
        vis[s] = false;

        for (pll path : graph[s]) {
            if (score[path.to] > score[s] + path.w) 
            {
                score[path.to] = score[s] + path.w;
                // cout << "score[" << path.to << "] = " << score[path.to] << endl;
                dist[path.to] = dist[s] + 1;

                if (dist[path.to] >= n) {
                    circle = true;
                    break;
                }

                if (!vis[path.to]) {
                    vis[path.to] = true;
                    que.push(path.to);
                }
            }
        }
    }

    if (circle)
        cout << -1;
    else
        cout << -score[n];

}
*/