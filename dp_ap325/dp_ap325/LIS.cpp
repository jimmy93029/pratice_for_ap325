/*
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

ll n, ans;
ll seq[200000];
ll position[200000] = { 0 };
vector<ll> tempseq;

ll LIS(ll seq[], ll n);
int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> seq[i];

    ans = LIS(seq, n);

    cout << ans;
}

ll LIS(ll seq[], ll n)
{
    // if (n == 0)
    //     return 0;

    tempseq.push_back(seq[0]);

    for (ll i = 1; i < n; i++) {
        if (seq[i] > tempseq.back()) {
            tempseq.push_back(seq[i]);
            position[i] = tempseq.size();
        }
        else {
            ll pos = lower_bound(tempseq.begin(), tempseq.end(), seq[i]) - tempseq.begin();
            tempseq[pos] = seq[i];
            position[i] = pos + 1;
        }
    }
    
    ll len = 1;
    for (ll i = 0; i < n; i++) {
        if (len == position[i]) {
            len++;
            cout << seq[i] << ' ';
        }
    }
    return tempseq.size();
}
*/

#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll n;
ll seq[200000];
ll dp[200000];

int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> seq[i];

    for (ll i = 0; i < n; i++) 
    {
        ll max_ = 0;
        for (ll j = 0; j < i; j++) {
            if (seq[j] < seq[i])
                max_ = max(max_, dp[j]);
        }
        dp[i] = max_ + 1;
    }

    cout << *max_element(dp, dp + n);
}
