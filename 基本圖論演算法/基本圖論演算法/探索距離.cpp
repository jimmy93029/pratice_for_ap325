/*
#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;

ll n, m, s;
ll ans1 = 0, ans2 = 0;
vector<ll> graph[102];
queue<ll> que;

void bfs(ll s);
int main()
{
    cin >> n >> m >> s;

    ll from, to;
    for (ll i = 0; i < m; i++) {
        cin >> from >> to;
        graph[from].push_back(to);
    }

    bfs(s);

    //for (ll i = 0; i < n; i++)
    //    if (visit[i])
    //        ans1++;

    cout << ans1 << endl << ans2;
}

void bfs(ll s)
{
    ll visit[102] = { 0 };
    ll depth[102];

    visit[s] = 1;  // 忘了要讓初始點不再配尋訪
    depth[s] = 0;
    que.push(s);

    while (!que.empty()) 
    {
        ll from = que.front();
        que.pop();

        for (ll to: graph[from])           
        {
            if (visit[to])
                continue;
            visit[to] = 1;
            depth[to] = depth[from] + 1;
            que.push(to);

            ans1++;
            ans2 += depth[to];
        }
        
    }
}
*/