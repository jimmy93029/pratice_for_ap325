/*
#include <iostream>
#include <queue>
#define ll long long
using namespace std;

struct Node
{
    ll left = 0, right = 0;
    ll w_left = 0, w_right = 0;
    ll parent = 0, self;
};

ll n, m, p, s, t;
ll goods[101];
ll out_degree[100000];
Node nodes[200005];
queue<Node> que;

int main()
{
    cin >> n >> m;

    for (ll i = n; i < 2 * n; i++) 
        cin >> nodes[i].w_left;
    
    for (ll i = 0; i < m; i++)
        cin >> goods[i];
    
    for (ll i = 1; i <= n; i++) {
        cin >> p >> s >> t;
        nodes[p].left = s;
        nodes[p].right = t;
        nodes[s].parent = p;
        nodes[t].parent = p;
    }

    for (ll i = 1; i < 2 * n; i++) 
    {
        nodes[i].self = i;

        if (i < n) 
            out_degree[i] = 2;
        else 
            que.push(nodes[i]);      
    }
        
    while (!que.empty())
    {
        Node node = que.front();

        if (node.self == 1)
            break;

        if (nodes[node.parent].left == node.self)
            nodes[node.parent].w_left += node.w_left + node.w_right;
        else
            nodes[node.parent].w_right += node.w_left + node.w_right;

        if (--out_degree[node.parent] == 0)
            que.push(nodes[node.parent]);
    }

    for (ll i = 0; i < m; i++) 
    {
        ll pos = 1;
        while (pos < n) {
            if (nodes[pos].w_left <= nodes[pos].w_right) {
                nodes[pos].w_left += goods[i];
                pos = nodes[pos].left;         
            }
            else {
                nodes[pos].w_right += goods[i];
                pos = nodes[pos].right;
            }
        }

        nodes[pos].w_left += goods[i];
        cout << pos << ' ';
    }
}
*/