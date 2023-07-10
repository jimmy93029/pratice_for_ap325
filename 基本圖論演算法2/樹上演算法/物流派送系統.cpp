/*
#include <iostream>
#include <queue>
#include <vector>
#define ll long long
using namespace std;

ll n, x, w, ans1 = 0, ans2 = 0;

vector<pair<ll, ll>> child[100000];
ll w_[100000] = { 0 };
ll round_[100000] = { 0 };

void dfs(ll x, ll round, ll w);
void bfs();
int main()
{
    queue<ll> que;

    cin >> n;
    for (ll i = 1; i <= n - 1; i++) {
        cin >> x >> w;
        child[x].push_back({ i, w });
    }

    bfs();

    cout << ans1 << endl << ans2;

}


void bfs()
{
    vector<ll> que;
    ll head = 0;

    que.push_back(0);

    while (head < que.size())
    {
        ll parent = que[head++];

        bool check = true;
        for (pair<ll, ll> path : child[parent]) 
        {
            check = false;

            w_[path.first] = w_[parent] + path.second;
            round_[path.first] = round_[parent] + 1;

            que.push_back(path.first);
        }

        if (check) {
            ans1 = max(ans1, w_[parent]);
            ans2 = max(ans2, round_[parent]);
        }
    }
}

void dfs(ll x, ll round, ll w)
{
    for (pair<ll, ll> path : child[x])
    {
        dfs(path.first, round + 1, w + path.second);
    }

    ans1 = max(ans1, w);
    ans2 = max(ans2, round);
}
*/