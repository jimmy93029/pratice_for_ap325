/*
#include <iostream>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;

map<ll, ll> dp_R;
ll point[50000];
ll n, k;

ll f(ll R);
int main()
{
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
        cin >> point[i];

    sort(point, point + n);

    ll R = 9000000000;
    for (ll jump = 8999999999; jump > 0; jump = jump / 2) 
    {
        if (dp_R[R - jump] == 0)
            dp_R[R - jump] = f(R - jump);

        while (dp_R[R - jump] <= k) 
        {
            R = R - jump;

            if (dp_R[R - jump] == 0)
                dp_R[R - jump] = f(R - jump);
        }
    }

    cout << R;
}

ll f(ll R)
{
    ll num_baseStation = 1, rightBound = point[0] + R;

    for (ll i = 0; i < n; i++) {
        if (point[i] > rightBound) {
            rightBound = point[i] + R;
            num_baseStation++;
        }
    }

    return num_baseStation;
}
*/