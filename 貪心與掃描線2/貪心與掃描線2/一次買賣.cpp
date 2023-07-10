/*
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll n;
ll prices[100000];
ll dp[100000];

int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> prices[i];

    ll min_ = prices[0];
    for (ll i = 1; i <= n; i++) {
        dp[i] = prices[i] - min_; 
        min_ = min(min_, prices[i]);
    }

    cout << *max_element(dp + 1, dp + n);
}
*/