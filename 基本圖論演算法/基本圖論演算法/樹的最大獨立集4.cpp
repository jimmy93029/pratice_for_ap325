/*
#include <iostream>
#include <queue>
#define ll long long
using namespace std;

ll n, indp = 0;
ll son_deg[100000];
ll parents[100000];
bool chosen[100000];
queue<ll> que;

int main()
{
    cin >> n;
    for (ll i = 1; i <= n - 1; i++) {
        cin >> parents[i];
        son_deg[parents[i]]++;
    }

    for (ll i = 0; i < n; i++) {
        if (son_deg[i] == 0) 
            que.push(i);
        chosen[i] = true;
    }

    while (!que.empty())
    {
        ll child = que.front();
        que.pop();

        if (chosen[child]) {
            indp++;
            chosen[parents[child]] = false;
        }

        if (--son_deg[parents[child]] == 0)
            que.push(parents[child]);
    }

    cout << indp;

}
*/