/*
#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;

ll n, s, t;
vector<ll> childs[100001];
ll son_deg[100001], parents[100001], r[100001];
queue<ll> que;

int main()
{
    cin >> n >> r[1];
    for (ll i = 2; i <= n ; i++) {
        cin >> s >> t;
        childs[s].push_back(i);
        parents[i] = s;
        son_deg[s]++;
        r[i] = t;
    }

    for (ll i = 1; i <= n; i++) 
        if (son_deg[i] == 0)
            que.push(i);
    
    while (!que.empty())
    {
        ll x = que.front();
        que.pop();

        ll sumS = 0, sumC = 0;
        for (ll son : childs[x]) {
            sumS += r[son];
            for (ll grandson : childs[son]) {
                sumC += r[grandson];
            }
        }
        r[x] = max(sumS, r[x] + sumC);

        if (--son_deg[parents[x]] == 0)
            que.push(parents[x]);
    }

    cout << r[1];
}
*/