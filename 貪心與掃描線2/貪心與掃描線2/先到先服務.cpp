/*
#include <iostream>
#include <set>
#define ll long long
using namespace std;

ll n, m;
ll customers[200000];
multiset<ll> counters;

int main()
{
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
        cin >> customers[i];

    for (ll i = 0; i < m; i++)
        counters.insert(customers[i]);

    ll min;
    for (ll i = m; i < n; i++) {
        min = *counters.begin();
        counters.erase(min);
        counters.insert(min + customers[i]);
    }

    cout << *counters.crbegin();
}
*/