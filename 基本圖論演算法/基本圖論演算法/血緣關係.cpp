/*
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

ll n, a, b, maxi = 0;
vector<ll> childs[100001];
bool notRoot[100001] = { false };
ll height[100001] = { 0 };

void dfs(ll x);
int main()
{
    cin >> n; 
    for (ll i = 0; i < n - 1; i++) {
        cin >> a >> b;
        childs[a].push_back(b);
        notRoot[b] = true;
    }

    ll root;
    for (ll i = 0; i < n; i++) {
        if (!notRoot[i])
            root = i;
    }

    dfs(root);

    cout << maxi;
}

void dfs(ll x)
{
    for (ll child : childs[x]) 
    {
        dfs(child);
        maxi = max(maxi, height[x] + height[child] + 1);
        height[x] = max(height[x], height[child] + 1);
    }
}
*/