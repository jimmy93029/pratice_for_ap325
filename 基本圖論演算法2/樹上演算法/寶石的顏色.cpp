/*
#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#define ll long long
using namespace std;

ll n, s, t, max_ = 0;
vector<ll> childs[200005];
ll c[200005], parent[200005], out_degree[200005];

// void d_bfs();
// void bfs();
void dfs(ll _max_, ll x);
int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> c[i];
    for (ll i = 0; i < n - 1; i++) {
        cin >> s >> t;
        childs[s].push_back(t);
        parent[t] = s;
        out_degree[s]++;
    }
    
    dfs(0, 0);

    cout << max_;

}

map<ll, ll> colors;
void dfs(ll _max_, ll x)
{
    if (++colors[c[x]] > _max_) {
        _max_ = colors[c[x]];
    }

    for (ll child : childs[x]) {
        dfs(_max_, child);
    }

    max_ = max(max_, _max_);

    if (colors[c[x]]-- == _max_)
        _max_--;
}


struct Node
{
    map<ll, ll> colors;
    ll x, max_ = 0;
};

void bfs()
{
    Node node;
    queue<Node> que;

    node.x = 0;
    if (++node.colors[c[0]] > node.max_)
        node.max_ = node.colors[c[0]];

    que.push(node);

    while (!que.empty())
    {
        Node parent = que.front();
        que.pop();

        if (++parent.colors[c[parent.x]] > parent.max_)
            parent.max_ = parent.colors[c[parent.x]];

        bool check = true;
        for (ll child : childs[parent.x]) {
            node.x = child;
            node.colors = parent.colors;
            node.max_ = parent.max_;
            que.push(node);
            check = false;
        }

        if (check)
            max_ = max(max_, node.max_);
    }
}


ll visit[200005] = { 0 };
ll out_deg[200005];
void d_bfs()
{
    cout << "inot d_bfs";
    ll pos = 0, check = 0, _max_ = 0;
    map<ll, ll> colors;

    for (ll i = 0; i < n; i++) {
        out_deg[i] = out_degree[i];
        cout << "out_deg[" << i << "] = " << out_deg[i] << endl;
    }

    cout << pos;
    while (true)
    {
        if (pos == 0) {
            if (++check >= out_degree[0] + 1)
                break;
        }

        if (visit[pos] == 1)
        {
            if (colors[c[pos]]-- == _max_)
                _max_--;

            pos = parent[pos];
        }
        if (visit[pos] = 0)
        {
            if (out_deg[pos] == out_degree[pos] && ++colors[c[pos]] > _max_)
                _max_ = colors[c[pos]];

            if (out_deg[pos] == 0) {
                visit[pos] = 1;
                pos = pos;
            }
            else {
                out_deg[pos]--;
                if (out_deg[pos] <= 0)
                    visit[pos] = 1;

                pos = childs[pos][out_deg[pos]];
            }
        }
        max_ = max(_max_, max_);
        cout << " -> " << pos;
    }
}
*/


