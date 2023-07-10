/*
#include <iostream>
#include <queue>
#include <algorithm>
#define ll long long
#define pll pair<ll, ll>
using namespace std;

priority_queue<ll> pq;
ll t[200001];
ll n, m, num, mini = 1000000;

int main()
{
    cin >> n >> m;
    for (ll i = 0; i < n; i++) {
        cin >> num;
        t[i] = -num;
    }


    for (ll i = 0; i < n; i++) {
        if (i < m)
            pq.push(t[i]);
        else
        {
            num = pq.top();
            pq.pop();
            pq.push(num + t[i]);
        }
    }

    for (ll i = 0; i < m; i++) {
        mini = min(mini, pq.top());
        pq.pop();
    }

    cout << -mini;
}
*/