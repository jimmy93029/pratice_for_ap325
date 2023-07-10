/*
#include <iostream>
#include <algorithm>
#include <queue>
#define ll long long
using namespace std;

struct Sect
{
    ll m, s, t;
}sects[100001];

bool comp1(Sect i, Sect j) { return (i.s < j.s); }
bool comp2(ll val, Sect j) { return (val < j.s); }
struct comp3 {
    bool operator()(const Sect& i, const Sect& j) { return (i.t > j.t); }
};

ll sum = 0, n, ans = 0;;
priority_queue<Sect, vector<Sect>, comp3> pq;

int main()
{
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> sects[i].m >> sects[i].s >> sects[i].t;

    sort(sects + 1, sects + n + 1, comp1);

    ll r, num;
    for (ll l = 1; l <= n; l++) 
    {
        while (!pq.empty() && pq.top().t < sects[l].s) {
            sum -= pq.top().m;
            pq.pop();
        }


        ans = max(ans, sects[l].m + sum);

        pq.push(sects[l]);
        sum += sects[l].m;
    }

    cout << ans;
}
*/
