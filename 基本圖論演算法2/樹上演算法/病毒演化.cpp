#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define ll long long
#define pll pair<ll, ll>
#define v first
#define c second
using namespace std;


ll n, m, root = 0, ans = 0;
vector<ll> graph[1005];
ll gen[1005][100], fa[1005], son_deg[1005];
queue<ll> que;

void solve(ll mi);
int main()
{
    cin >> n >> m;

    ll u, v;
    string rna;
    for (ll i = 0; i < n; i++) 
    {
        cin >> v >> u >> rna;

        for (ll mi = 0; mi < m; mi++) {
            if (rna[mi] == 'A')
                gen[v][mi] = 0;
            else if (rna[mi] == 'U')
                gen[v][mi] = 1;
            else if (rna[mi] == 'G')
                gen[v][mi] = 2;
            else if (rna[mi] == 'C')
                gen[v][mi] = 3;
            else
                gen[v][mi] = 4;
        }

        fa[v] = u;

        if (u != v)
            son_deg[u]++;
    }
    // cout << "into solve" << "\n";

    for (ll mi = 0; mi < m; mi++)
        solve(mi);
    
    cout << ans;
}


vector<vector<ll>> dic;

void solve(ll mi)
{
    dic.resize(n + 1);
    for (ll i = 1; i <= n; i++)
        dic[i].resize(5);

    for (ll i = 1; i <= n; i++) {
        if (son_deg[i] == 0)
            que.push(i);
    }
    cout << "do mi = " << mi << "\n";

    ll x, sum = 0;
    while (!que.empty())
    {
        x = que.front();
        que.pop();

        if (x != fa[x]) {
            dic[x][gen[fa[x]][mi]]++;
        }
        if (gen[x][mi] == 4){
            gen[x][mi] = max_element(dic[x].begin(), dic[x].begin() + 4) - dic[x].begin();
        }
        if (x != fa[x])
            dic[x][gen[fa[x]][mi]]--;
          
        sum = 0;
        for (ll i = 0; i < 4; i++)
            sum += dic[x][i];
        ans += sum - dic[x][gen[x][mi]];
        cout << "sum = " << sum << "\n";

        dic[fa[x]][gen[x][mi]]++;
        if (--son_deg[fa[x]] == 0)
            que.push(fa[x]);
    }

    dic.clear();
}











/*
void dfs(ll x, ll fa, ll mi)
{
    ll dic[4] =  {0}, maxii;

    if (fa != x)
        dic[gen[fa][mi]]++;

    for (ll v : graph[x]){
        if (gen[v][mi] < 4)
            dic[gen[v][mi]]++;
    }

    if (gen[x][mi] == 4) {
        maxii = max_element(dic, dic + 4) - dic;
        gen[x][mi] = maxii;
    }

    ans += (gen[fa][mi] == gen[x][mi]) ? 0 : 1;

    for (ll v : graph[x])
        dfs(v, x, mi);
     
}
*/
