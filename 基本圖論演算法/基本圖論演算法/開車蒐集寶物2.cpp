/*
#include <iostream>
#define ll long long
using namespace std;

ll n, m, ans = 0;
ll parent[50000];
ll w[50000];

ll find_root(ll x);
void join(ll a, ll b);
int main()
{
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
        cin >> w[i];
    
    for (ll i = 0; i < n; i++)
        parent[i] = -1;

    ll loc1, loc2;
    for (ll i = 0; i < m; i++) 
    {
        cin >> loc1 >> loc2;
        ll root1 = find_root(loc1);
        ll root2 = find_root(loc2);
        join(root1, root2);
    }

    for (ll i = 0; i < n; i++)
        if (parent[i] < 0)
            ans = max(ans, w[i]);

    cout << ans;
}

ll find_root(ll x)
{
    if (parent[x] < 0)
        return x;
    else{
        ll root = find_root(parent[x]);
        parent[x] = root;
        return root;
    }
}

void join(ll a, ll b)
{
    if (a == b)
        return;

    ll new_boss, brother;
    ll sum = parent[a] + parent[b];
    ll w_sum = w[a] + w[b];

    if (parent[a] < parent[b])
        new_boss = a, brother = b;
    else
        new_boss = b, brother = a;
    
    parent[brother] = new_boss;
    w[new_boss] = w_sum;
    parent[new_boss] = sum;
}
*/