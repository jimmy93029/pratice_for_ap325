//#include <iostream>
//#include <algorithm>
//#include <deque>
//#define ll long long
//using namespace std;
//
//ll arr[200000];
//deque<ll> max_q;
//deque<ll> min_q;
//
//void push_max(ll i);
//void push_min(ll i);
//
//int main()
//{
//    ll n, l, ans = 0;
//    cin >> n >> l;
//    for (ll i = 0; i < n; i++)
//        cin >> arr[i];
//
//    for (ll i = 0; i < n; i++) 
//    {
//        push_max(i);
//        if (max_q.front() <= i - l)
//            max_q.pop_front();
//
//        push_min(i);
//        if (min_q.front() <= i - l)
//            min_q.pop_front();
//
//        ans = max(ans, arr[max_q.front()] - arr[min_q.front()]);
//    }
//
//    cout << ans;
//}
//
//void push_max(ll i)
//{
//    while (!max_q.empty() && arr[max_q.back()] <= arr[i])
//        max_q.pop_back();
//
//    max_q.push_back(i);
//}
//
//void push_min(ll i)
//{
//    while (!min_q.empty() && arr[min_q.back()] >= arr[i])
//        min_q.pop_back();
//
//    min_q.push_back(i);
//}


//void way1(ll arr[], ll l, ll n)
//{
//    multiset<ll> area(arr, arr + l);
//
//    ll ans = *area.rbegin() - *area.begin();
//    for (ll i = l; i < n; i++)
//    {
//        area.erase(arr[i - l]);
//        area.insert(arr[i]);
//        ans = max(ans, *area.rbegin() - *area.begin());
//    }
//
//    cout << ans;
//}