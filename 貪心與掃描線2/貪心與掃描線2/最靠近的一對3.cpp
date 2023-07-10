/*
#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
#define x second
#define y first
#define ll long long
using namespace std;

ll n, x, y, d = 1000000000;
pair<ll, ll> p[100001];
multimap<ll, ll> line;

bool comp(pair<ll, ll> i, pair<ll, ll> j) { return (j.x > i.x); }
int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> x >> y;
        p[i] = { y, x };
    }

    sort(p, p + n, comp);

    for (ll i = 0; i < n; i++) 
    {
        auto it = line.lower_bound(p[i].y - d);

        for (; it != line.end() && it->y < p[i].y + d; it++) {
            if (it->x < p[i].x - d) 
                line.erase(it);
            else
                d = min(d, p[i].x - it->x + abs(p[i].y - it->y));
        }
        line.insert({ p[i].y, p[i].x });
    }

    cout << d;

}
*/