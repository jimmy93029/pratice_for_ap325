//#include <iostream>
//#define ll long long
//using namespace std;
//
//ll memo[101];
//ll n, p = 1000000009;
//
//ll catalan(ll n);
//int main()
//{
//    cin >> n;
//
//    memo[0] = 1;
//    for (ll i = 1; i <= n; i++)
//        memo[i] = -1;  // 用 -1 標記出誰沒被記到
//
//    cout << catalan(n);
//
//}
//
//ll catalan(ll n)
//{
//    if (memo[n] >= 0)
//        return memo[n];
//
//    ll sum = 0;
//    for (ll i = 0; i < n; i++) {
//        sum = (sum + (catalan(i) * catalan(n - 1 - i))) % p;
//    }
//
//    return  (memo[n] = sum);
//}