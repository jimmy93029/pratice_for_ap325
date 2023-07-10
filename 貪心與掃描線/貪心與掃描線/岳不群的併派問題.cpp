/*
#include <iostream>
#include <algorithm>
#include <queue>
#define ll long long
using namespace std;

ll n;
ll sects[200000];
priority_queue<ll> pq;

int main()
{
    cin >> n;

    ll num;
    for (ll i = 0; i < n; i++) {
        cin >> num;
        pq.push(-num);
    }

    ll cost = 0;
    while (pq.size() > 1)
    {
        ll m = pq.top();
        pq.pop();
        m += pq.top();
        pq.pop();

        cost += m;
        pq.push(m);
    }

    cout << -pq.top() << endl << -cost;
}
*/