/*
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll A[100000];
ll n, ans = 0;

int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> A[i];

    ll len = 0;
    for (ll i = 0; i < n; i++) {
        len += A[i];
        ans = max(ans, len);
        if (len < 0)
            len = 0;
    }

    cout << ans;
}
*/