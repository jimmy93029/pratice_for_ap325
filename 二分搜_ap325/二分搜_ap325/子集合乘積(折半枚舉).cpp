//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <map>
//#define ll long long
//using namespace std;
//
//ll n, p, arr[37], ans = 0;
//map<ll, ll> mapA;
//map<ll, ll> mapB;
//
//
//void subset(ll left, ll right, map<ll, ll>& map_);
//ll modInverse(ll pow_, ll num);
//int main()
//{
//    cin >> n >> p;
//    for (ll i = 0; i < n; i++)
//        cin >> arr[i];
//
//    subset(0, n/2, mapA);
//    subset(n/2 , n, mapB);
//
//    for (const auto &m : mapA) 
//    {
//        ll modinv = modInverse(p - 2, m.first);
//        auto found = mapB.find(modinv);
//        if (found != mapB.end()) {
//            // cout << "found " << m.second * found->second << " m.second" << m.second << " found->second" << found->second << endl;
//            ans = (ans +( m.second * found->second) % p) % p;
//        }
//     
//    }
//
//    // cout << "mapA[1]" << mapA[1] << " mapB[1]" << mapB[1] << endl;
//    ans = (ans + mapA[1] + mapB[1]) % p;
//    cout << ans;
//
//    return 0;
//}
//
//
//ll modInverse(ll pow_, ll num)
//{
//    if (pow_ == 0)
//        return 1;
//    else if (pow_ == 1)
//        return (num * modInverse(pow_ - 1, num)) % p;
//    else {
//        ll exp = modInverse(pow_ / 2, num);
//        return (exp * exp) % p;
//    }
//}
//
//
//void tree(ll dep, ll prod, vector<ll> &vec, map<ll, ll>& map_);
//void subset(ll left, ll right, map<ll, ll>& map_)  // ¥ª³¬¥k¶}
//{
//    vector<ll> vec(arr + left, arr + right);
//
//    tree(0, 1, vec, map_);
//
//    map_[1]--;
//}
//
//
//void tree(ll dep, ll prod, vector<ll>& vec, map<ll, ll>& map_)
//{
//    if (dep >= vec.size()) {
//        map_[prod] = (map_[prod] + 1) % p;
//        return;
//    }
//
//    tree(dep + 1, (prod * vec[dep]) % p, vec, map_);
//    tree(dep + 1, prod % p, vec, map_);
//}