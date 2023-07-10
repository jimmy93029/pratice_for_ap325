/*
#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#define x first 
#define y second
#define ll long long
using namespace std;

ll n, x, y, d = 1000000000;
pair<ll, ll> p[100001];

int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> x >> y;
        p[i] = { x, y };
    }

    sort(p, p + n);

    for (ll i = 0; i < n - 1; i++) {
        for (ll j = i + 1; j < n && p[j].x < p[i].x + d; j++) {
            d = min(d, p[j].x - p[i].x + abs(p[j].y - p[i].y));
        }
    }

    cout << d;
}
*/