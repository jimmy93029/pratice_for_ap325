//#include <iostream>
//#include <algorithm>
//#define ll long long
//using namespace std;
//
//int main()
//{
//    ll dp[100000];
//    ll n;
//    cin >> n;
//    for (ll i = 0; i < n; i++)
//        cin >> dp[i];
//
//    dp[2] += min(dp[0], dp[1]);
//    for (ll i = 3; i < n; i++) {
//        dp[i] += min(min(dp[i - 1], dp[i - 2]), dp[i - 3]);
//    }
//
//    cout << min(dp[n - 1], dp[n - 2]);
//}