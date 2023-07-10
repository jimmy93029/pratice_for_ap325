//#include <iostream>
//#include <string>
//#define ll long long
//using namespace std;
//
//ll modeBigNum(string bignum, ll p);
//ll rec(ll x, ll y, ll p);
//int main()
//{
//    string bigx;
//    ll y, p, ans;
//    cin >> bigx >> y >> p;
//
//    ll x = modeBigNum(bigx, p);
//    ans = rec(x, y, p);
//
//    cout << ans;
//}
//
//
//ll rec(ll x,ll y,ll p)
//{
//    if (y == 0)
//        return 1;
//    else if (y % 2 == 1)
//        return (rec(x, y - 1, p) * x) % p;
//    else {
//        ll t = rec(x, y / 2, p);
//        return (t * t) % p;
//    }
//}
//
//ll modeBigNum(string bignum, ll p)
//{
//    ll num1, num = 0, len = bignum.size();
//
//    for (int i = len - 1; i >= 0; i--) {
//        num1 = (bignum[i] - '0') % p;
//        num = (num *10) % p ;
//        num = (num + num1) % p;
//    }
//
//    return num;
//}
//
//
//ll basic(ll x, ll y, ll p)
//{
//    ll ans = 1;
//    for (int i = 0; i < y; i++)
//    {
//        ans *= x;
//        ans = ans % p;
//    }
//
//    return ans;
//}


