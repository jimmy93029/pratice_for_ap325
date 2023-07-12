//#include <iostream>
//#include <vector>
//#include <algorithm>
//#define ll long long
//using namespace std;
//
//vector<ll> timbers;
//vector<ll> heights;
//
//int main()
//{
//    ll n, l, num, sum = 0, maxi = 0;
//    cin >> n >> l;
//
//    for (ll i = 0; i < n; i++) {
//        cin >> num;
//        timbers.push_back(num);
//    }
//    timbers.push_back(l);
//
//    for (ll i = 0; i < n; i++) {
//        cin >> num;
//        heights.push_back(num);
//    }
//
//    sum++;
//    maxi = heights[0];
//    for (ll i = 1; i < n; i++) {
//        if (timbers[i] - heights[i] >= timbers[i - 1] || timbers[i] + heights[i] <= timbers[i + 1]) {
//            sum++;
//            maxi = max(maxi, heights[i]);
//        }
//    }
//
//    cout << sum << endl << maxi;
//}