/*
#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;

vector<ll> childs[100001];
ll parents[100001];
ll out_deg[100001];
ll n, parent, ans = 0;
queue<ll> que;
vector<ll> vec;
bool turnon[100001] = { false };

int main()
{
    cin >> n;
    for (ll i = 1; i <= n - 1; i++) {
        cin >> parent;
        childs[parent].push_back(i);
        out_deg[parent]++;
        parents[i] = parent;
    }

    que.push(0);
    while (!que.empty())
    {
        ll parent = que.front();
        vec.push_back(parent);
        que.pop();

        for (ll child : childs[parent]) 
            que.push(child);
    }

    ll indepd = 0;
    turnon[0] = true;
    indepd++;
    for (ll i = 1; i < vec.size(); i++) 
    {
        turnon[vec[i]] = true, indepd++;

        if (turnon[parents[vec[i]]] == true)
            indepd--;
        turnon[parents[vec[i]]] = false;

        for (ll child:childs[vec[i]]) {
            if (turnon[child] == true)
                indepd--;
            turnon[child] = false;
        }

        ans = max(ans, indepd);

        if (--out_deg[vec[i]] <= 0) {
            turnon[parents[vec[i]]] = true;
            indepd++;
        }
    }

    cout << ans;
}
*/