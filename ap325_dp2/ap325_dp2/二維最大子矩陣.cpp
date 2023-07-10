/*
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

ll n, m, num, maxi = 0, maxk = 0, maxj = 0;
vector<ll> BIT[201];

ll query(vector<ll>& vec, ll l, ll r)
{
    if (l == 1) {
        ll num = 0;
        while (r != 0) {
            num += vec[r];
            r -= r & (-r);
        }
        return num;
    }
    else
        return query(vec, 1, r) - query(vec, 1, l - 1);
    
}

void update(vector<ll>& vec, ll i, ll val)
{
    while (i <= n) {
        vec[i] += val;
        i += i & (-i);
    }
}


int main()
{
    cin >> m >> n;
    for (ll i = 0; i < m; i++) {
        BIT[i].resize(n + 1);
        for (ll j = 1; j <= n; j++) {
            cin >> num;
            update(BIT[i], j, num);
        }
    }

    for (ll j = 1; j <= n; j++) {
        for (ll k = j; k <= n; k++) {
            num = 0;
            for (ll i = 0; i < m; i++) {
                num += query(BIT[i], j, k);
                maxi = max(maxi, num);

                if (num < 0)
                    num = 0;
            }
        }
    }
    // cout << "max (j, k) is at " << maxj << " " << maxk << endl;
    cout << maxi;
}
*/