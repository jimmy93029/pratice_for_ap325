/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#define ll long long
using namespace std;

ll m, n, ans = 0;
ll ribbon[200005];
ll colors[200005] = {0};

int main()
{
    cin >> m >> n;
    for (ll i = 0; i < n; i++)
        cin >> ribbon[i];

    set<ll> set_(ribbon, ribbon + n);
    vector<ll> vec(set_.begin(), set_.end());
    for (ll i = 0; i < n; i++) {
        ribbon[i] = lower_bound(vec.begin(), vec.end(), ribbon[i]) - vec.begin();
    }


    ll kinds = 0;

    for (ll i = 0; i < m; i++)
        if (++colors[ribbon[i]] == 1)
            kinds++;

    for (ll i = m; i < n; i++) {
        if (++colors[ribbon[i]] == 1)
            kinds++;

        if (colors[ribbon[i - m]]-- == 1)
            kinds--;

        if (kinds == m)
            ans++;
    }

    cout << ans;

}



ll kinds = 0, left = 0;
for (ll right = 0; right < n; right++) {
    if (++colors[ribbon[right]] == 1)
        kinds++;

    if (kinds == m) {
        while (colors[ribbon[left]] > 1) {
            colors[ribbon[left]]--;
            left++;
        }

        if (right - left + 1 == m)
            ans++;
    }
}
*/