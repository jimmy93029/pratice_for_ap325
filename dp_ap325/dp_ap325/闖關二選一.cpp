//#include <iostream>
//#include <algorithm>
//#include <cmath>
//#define ll long long
//using namespace std;
//
//int main()
//{
//    ll dp[100001][2];
//    ll c[100001][2];
//    ll n, t;
//
//    cin >> n >> t;
//    c[0][0] = t;  c[0][1] = t;
//    for (ll i = 1; i <= n; i++)
//        cin >> c[i][0] >> c[i][1];
//
//    dp[0][0] = 0;  dp[0][1] = 0;
//    dp[1][0] = abs(c[1][0] - t);  dp[1][1] = abs(c[1][1] - t);
//    ll value1, value2, value3, value4;
//    for (ll i = 2; i <= n; i++) {
//        value1 = min(dp[i - 2][0] + abs(c[i - 2][0] - c[i - 1][0]) + abs(c[i - 1][0] - c[i][0]),
//                        dp[i - 2][0] + abs(c[i - 2][0] - c[i - 1][1]) + abs(c[i - 1][1] - c[i][0]));
//        value2 = min(dp[i - 2][1] + abs(c[i - 2][1] - c[i - 1][0]) + abs(c[i - 1][0] - c[i][0]),
//                        dp[i - 2][1] + abs(c[i - 2][1] - c[i - 1][1]) + abs(c[i - 1][1] - c[i][0]));
//        dp[i][0] = min(value1, value2);
//
//        value3 = min(dp[i - 2][0] + abs(c[i - 2][0] - c[i - 1][0]) + abs(c[i - 1][0] - c[i][1]),
//                        dp[i - 2][0] + abs(c[i - 2][0] - c[i - 1][1]) + abs(c[i - 1][1] - c[i][1]));
//        value4 = min(dp[i - 2][1] + abs(c[i - 2][1] - c[i - 1][0]) + abs(c[i - 1][0] - c[i][1]),
//                        dp[i - 2][1] + abs(c[i - 2][1] - c[i - 1][1]) + abs(c[i - 1][1] - c[i][1]));
//        dp[i][1] = min(value3, value4);
//    }
//
//    cout << min(dp[n][0], dp[n][1]);
//}