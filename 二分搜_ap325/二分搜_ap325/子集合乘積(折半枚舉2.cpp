//#include <iostream>
//#include <vector>
//#include <map>
//#define ll long long
//using namespace std;
//
//ll n, p, num, ans;
//map<ll, ll> mapA, mapB;
//vector<ll> vecA, vecB;
//
//ll fastPow(ll x, ll y, ll p);
//void rec(ll round, ll n, ll product, const vector<ll>& vec, map<ll, ll>& map_, ll p);
//
//int main()
//{
//    cin >> n >> p;
//    for (ll i = 0; i < n; i++) {
//        cin >> num;
//        if (i < n / 2)
//            vecA.push_back(num);
//        else
//            vecB.push_back(num);     
//    }
//
//    rec(0, vecA.size(), 1, vecA, mapA, p); 
//    rec(0, vecB.size(), 1, vecB, mapB, p);
//
//    mapA[1]--;
//    mapB[1]--;
//    ans = (mapA[1] + mapB[1]) % p;
//
//    for (auto& a: mapA) 
//    {
//        ll MMI = fastPow( a.first, p - 2, p );  // modular_multiplicative_inverse
//
//        auto iter_b = mapB.find(MMI);
//
//        if (iter_b != mapB.end())
//            ans = (ans + a.second * iter_b->second) % p;  // 要把 ans 加進來模 ?
//    }
//    
//    cout << ans;
//}
//
//
//void rec(ll round, ll n, ll product, const vector<ll>& vec, map<ll, ll>& map_, ll p)
//{
//    if (round >= n) {
//        map_[product] += 1;
//        return;
//    }
//
//    rec(round + 1, n, (product * (vec[round] % p)) % p, vec, map_, p);
//    rec(round + 1, n, product * 1, vec, map_, p);   
//}
//
//ll fastPow(ll x, ll y, ll p)
//{
//    if (y == 0)
//        return 1;
//    else if (y % 2 == 1)
//        return (fastPow(x, y - 1, p) * x ) % p;
//    else {
//        ll t = fastPow(x, y / 2, p);
//        return (t * t) % p;
//    }
//}