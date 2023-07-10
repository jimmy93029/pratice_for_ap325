//#include <iostream>
//#include <algorithm>
//#define ll long long
//using namespace std;
//
//ll dp[100000];
//ll n;
//
//int main()
//{
//    cin >> n;
//    for (ll i = 0; i < n; i++)
//        cin >> dp[i];
//
//    dp[2] += dp[0];
//    for (ll i = 3; i < n; i++) {
//        dp[i] += max(dp[i - 2], dp[i - 3]);
//    }
//    cout << max(dp[n - 1], dp[n - 2]);
//}