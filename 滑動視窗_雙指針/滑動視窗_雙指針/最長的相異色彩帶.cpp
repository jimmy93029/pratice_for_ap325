/*
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll ribbon[200000];
ll colors[200000] = {0};
ll n, ans = 0;

int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++) 
        cin >> ribbon[i];
    
    ll left = 0;
    for (ll right = 0; right < n; right++)
    {
        colors[ribbon[right]]++;

        while (colors[ribbon[right]] > 1) {
            colors[ribbon[left]]--;
            left++;
        }

        ans = max(ans, right - left + 1);
    }

    cout << ans;
}
*/