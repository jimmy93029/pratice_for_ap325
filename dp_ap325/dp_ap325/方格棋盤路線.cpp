//#include <iostream>
//#include <algorithm>
//#define ll long long
//using namespace std;
//
//ll dp[200][200];
//ll m, n;
//
//int main()
//{
//    cin >> m >> n;
//    for (ll i = 0; i < m; i++) {
//        for (ll j = 0; j < n; j++) {
//            cin >> dp[i][j];
//        }
//    }
//
//    for (ll i = 1; i < m; i++)
//        dp[i][0] += dp[i - 1][0];
//
//    for (ll j = 1; j < n; j++)
//        dp[0][j] += dp[0][j - 1];
//
//    for (ll i = 1; i < m; i++) {
//        for (ll j = 1; j < n; j++) {
//            dp[i][j] += max(dp[i][j - 1], dp[i - 1][j]);
//        }
//    }
//
//    cout << dp[m - 1][n - 1];
//}