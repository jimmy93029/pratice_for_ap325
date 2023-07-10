/*
#include <iostream>
#include <algorithm>
#include <set>
#define ll long long
using namespace std;

struct Sect
{
    ll m, s, t;
}sects[100001];

ll arr2[100001], arr1[100001];
struct Fenwick
{
    ll query(ll l, ll r, ll arr[])
    {
        if (l == 1) {
            ll num = 0;
            while (r != 0) {
                num += arr[r];
                r -= r & (-r);
            }
            return num;
        }
        else 
            return query(1, r, arr) - query(1, l - 1, arr);
    }

    void update(ll i, ll val, ll arr[])
    {
        while (i <= 100000) {
            arr[i] += val;
            i += i & (-i);
        }
    }
}BIT;

ll n, ans = 0;


bool comp1(Sect i, Sect j) { return (i.s < j.s); }
bool comp2(ll val, Sect j) { return (val < j.s); }
struct comp3 {
    bool operator()(Sect i, Sect j) { return (i.t < j.t); }
};


multiset<Sect, comp3> set_;

int main()
{
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> sects[i].m >> sects[i].s >> sects[i].t;

    sort(sects + 1, sects + n + 1, comp1);
    for (ll i = 1; i <= n; i++) 
        BIT.update(i, sects[i].m, arr2);
    
    ll r, num, i;
    for (ll l = 1; l <= n; l++) {
        r = upper_bound(sects + 1, sects + n + 1, sects[l].t, comp2) - sects - 1;
        num =  BIT.query(l, r, arr2) + ;

        set_.insert(sects[l]);
        i = set_.find(sects[l]) - set_.begin();
    }

    cout << ans;
}
*/