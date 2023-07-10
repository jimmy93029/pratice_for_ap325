/*
#include <iostream>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;

class SortedQue
{
    public:
        ll getMin();
        void push(ll i);
    private:
        ll len = 0;
        multiset<ll> sortedQue;
} sortedQue;

ll n, k;
ll cost[200001];
ll dp[200001];

int main()
{
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
        cin >> cost[i];

    ll min_;
    for (ll i = 0; i < n; i++) {
        if (i <= k)
            dp[i] = cost[i];
        else 
        {
            min_ = sortedQue.getMin();
            dp[i] = cost[i] + min_;
        }
        sortedQue.push(i);
    }

    cout << *min_element(dp + n - 1 - k , dp + n);
}

void SortedQue::push(ll i)
{
    if (i >= 0) {
        sortedQue.insert(dp[i]);
        len++;
    }

    if (len > 2 * k + 1) {
        ll dumped = sortedQue.erase(dp[i - 2 * k - 1]);
        // auto it = sortedQue.find(dp[i - 2 * k - 1]);
        // sortedQue.erase(it);
    }

}

ll SortedQue::getMin()
{
    ll min_ = *sortedQue.begin();
    return min_;
}
*/
