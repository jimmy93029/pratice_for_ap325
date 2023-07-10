//#include <iostream>
//#include <vector>
//# define ll long long
//using namespace std;
//
//
//ll n, num, ans = 0;
//const ll p = 10009;
//vector<ll> vec;
//
//
//void bitDp();
//void rec(ll round, ll product);
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> num;
//        vec.push_back(num);
//    }
//
//    //rec(0, 1 * vec[0] % p);
//    // rec(0, 1);
//
//    //cout << ans - 1 << endl;
//}
//
//
//void bitDp()
//{
//    ll product;
//
//    //  此題融合了位元dp
//    for (int i = 1; i < (1 << n); i++) {
//        product = 1;
//        for (int j = 0; j < n; j++) {
//            if (i & (1 << j)) {
//                product = product * vec[j] % p;
//            }
//        }
//        if (product == 1)
//            ans++;
//    }
//
//    cout << ans;
//
//}
//
//void rec(ll round, ll product)
//{
//    round++;
//
//
//    if (round == n)
//    {
//        ll isOne = product % p;
//        if (isOne == 1)
//            ans++;
//        return;
//    }
//    rec(round, (product * vec[round]) % p);  // 利用 mode 規則， 處理掉overflow 的 WA 問題
//    rec(round, product % p);
//}