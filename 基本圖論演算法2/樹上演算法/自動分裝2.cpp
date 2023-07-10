/*
#include <iostream>
#define ll long long
using namespace std;

struct Node
{
    ll left = 0, right = 0;
};

ll n, m, p, s, t;
ll goods[101];
ll w[200002];
Node nodes[100001];

ll find_w(ll x);
int main()
{
    cin >> n >> m;
    for (ll i = n; i < 2 * n; i++) 
        cin >> w[i];
    for (ll i = 0; i < m; i++)
        cin >> goods[i];
    for (ll i = 1; i <= n - 1; i++) {
        cin >> p >> s >> t;
        nodes[p].left = s;
        nodes[p].right = t;
    }
    // for (ll i = 1; i < n; i++)
    //    w[i] = -1;

    w[1] = find_w(1);
    for (ll i = 0; i < m; i++) {
        ll pos = 1;
        while (pos < n) {
            if (w[nodes[pos].left] <= w[nodes[pos].right]) {
                pos = nodes[pos].left;
                w[pos] += goods[i];             
            }
            else {
                pos = nodes[pos].right;
                w[pos] += goods[i];
            }
        }
        w[pos] += goods[i];
        cout << pos << ' ';
    }
}

ll find_w(ll x)
{
    if (x >= n)
        return w[x];
    //else if (w[x] < 0) 
    w[x] = find_w(nodes[x].left) + find_w(nodes[x].right);

    return w[x];
}
*/

