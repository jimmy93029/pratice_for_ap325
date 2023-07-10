/*
#include <iostream>
#include <set>
#include <vector>
#define ll long long
using namespace std;

ll n, w_sum = 0;
multiset<ll> graph[50000];
ll visit[50000] = {0};

void dfs(ll x);
int main()
{
    cin >> n;
    for (ll a, b, w, i = 0; i < n - 1; i++) {
        cin >> a >> b >> w;
        graph[a].insert(b);
        graph[b].insert(a);
        w_sum += w;
    }

    cout << 2 * w_sum << endl;
    dfs(0);
}

void dfs(ll x)
{
    visit[x] = 1;
    cout << x << ' ';

    for (ll child : graph[x]) {
        if (!visit[child]) 
        {
            dfs(child);
            cout << x << ' ';
        }
    }
     
}
*/