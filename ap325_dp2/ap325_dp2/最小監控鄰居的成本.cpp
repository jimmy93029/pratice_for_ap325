/*
#include <iostream>
#include <algorithm>
#include <deque>
#define ll long long
using namespace std;

deque<ll> dque;
ll c[100001], dp[100001];
ll n;

void push(ll i);
int main()
{
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> c[i];

    for (ll i = 1; i <= n; i++) {
        if (i <= 2)
            dp[i] = c[i];
        else {
            dp[i] = c[i] + dp[dque.front()];
        }
        push(i);
    }

    if (n == 1)
        cout << dp[1];
    else
        cout << min(dp[n], dp[n - 1]);
}

void push(ll i)
{
    while ((!dque.empty()) && dp[dque.back()] > dp[i])
        dque.pop_back();

    dque.push_back(i); 

    if (dque.front() <= i - 3)
        dque.pop_front();
}
*/