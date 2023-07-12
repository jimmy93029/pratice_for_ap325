/*
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll arr[100000];

ll ans = 0;

void mergeSort(ll left,ll right)
{
    if (right <= left + 1)
        return;

    ll mid = (left + right) / 2;
    mergeSort(left, mid);
    mergeSort(mid, right);

    ll temp[100000];
    ll k = 0, j = mid;
    for (ll i = left; i < mid; i++) {
        while (j < right && arr[j] < arr[i]) {
            temp[k++] = arr[j++];
        }
        temp[k++] = arr[i];
        ans += j - mid;
    }

    //for (ll i = mid; i < right; i++) {
    //    ll pos = upper_bound(arr + left, arr + mid, arr[i]) - arr;
    //    ans += mid - pos;
    //}

    while (j < right)
        temp[k++] = arr[j++];

    for (ll i = 0; i < k; i++)
        arr[i + left] = temp[i];
}


int main()
{
    ll n;   cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(0, n);

    cout << ans;
}
*/
