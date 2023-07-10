/*
#include <iostream>
#include <vector>
#define ll long long
#define pll pair<ll, ll> 
#define v first
#define w second
using namespace std;

ll n, w_sum = 0, maxi = 0;
vector<pll> tree[50005];


ll dfs(ll u, ll fa);
int main()
{
    cin >> n;

    ll a, b, w;
    for (ll i = 0; i < n - 1; i++) {
        cin >> a >> b >> w;
        tree[a].push_back({ b , w });
        tree[b].push_back({ a , w });
        w_sum += w;
    }
    
    ll val = dfs(0, -1);

    cout << 2 * w_sum - maxi;
}


ll dfs(ll u, ll fa)
{
    if (tree[u].size() == 1 && tree[u][0].v == fa)
        return 0;

    ll max1 = 0, max2 = 0, val;
    for (pll path : tree[u]) 
    {
        if (path.v == fa)
            continue;

        val = dfs(path.v, u) + path.w;
        if (val > max1) {
            max2 = max1;
            max1 = val;
        }
        else if (val > max2)
            max2 = val;
    }

    maxi = max(maxi, max1 + max2);

    return max1;
}

*/