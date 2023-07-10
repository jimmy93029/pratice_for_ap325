#include <iostream>
#include <string>
#define ll long long
using namespace std;

ll out_deg[200001] = {0};
ll n, m, u, v;

int main()
{
    cin >> n >> m;
    for (ll i = 0; i < m; i++) {
        cin >> u >> v;
        out_deg[u]++;
        out_deg[v]++;
    }

    bool check = true;
    ll up = 0;
    for (ll i = 1; i <= n; i++) {
        if (out_deg[i] == 1)
            up++;
        else if (out_deg[i] == 2)
            continue;
        else
            check = false;
    }
    if (up != 2)
        check = false;

    if (check)
        cout << "Yes";
    else
        cout << "No";
}