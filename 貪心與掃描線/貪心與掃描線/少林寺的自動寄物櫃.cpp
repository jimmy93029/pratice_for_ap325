/*
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

struct item
{
    ll w, f;
};

bool comp(item i, item j) { return (i.f * j.w  > j.f * i.w); }

ll n;
item cabinet[100000];

int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> cabinet[i].w;
    for (ll i = 0; i < n; i++)
        cin >> cabinet[i].f;

    sort(cabinet, cabinet + n, comp);

    ll w_sum = 0, ans = 0;
    for (ll i = 0; i < n; i++) {
        ans += cabinet[i].f * w_sum;
        w_sum += cabinet[i].w;
    }

    cout << ans;
}
*/