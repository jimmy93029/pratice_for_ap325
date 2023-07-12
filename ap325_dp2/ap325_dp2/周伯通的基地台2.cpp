
#include <iostream>
#include <algorithm>
#include <deque>
#define ll long long
using namespace std;

ll n, k;
ll c[200000];
ll dp[200000];
deque<ll> minq;

void push(ll i);
int main()
{
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
        cin >> c[i];

    for (ll i = 0; i < n; i++) 
    {
        if (i <= k) 
            dp[i] = c[i];                   
        else 
            dp[i] = c[i] + dp[minq.front()];
        
        push(i);
    }

    cout << *min_element(dp + n - k - 1, dp + n);
}

void push(ll i)
{
    while (!minq.empty() && dp[minq.back()] >= dp[i])
        minq.pop_back();

    minq.push_back(i);

    if (minq.front() <= i - 2 * k - 1)
        minq.pop_front();
}
