//#include <iostream>
//#include <vector>
//#include <string>
//#include <tuple>
//#include <algorithm>
//#define ll long long
//using namespace std;
//
//
//int main()
//{
//    ll m, n, ans = 0;
//    cin >> m >> n;
//    
//    vector<tuple<ll, vector<ll>, vector<ll>>> teams;
//    for (ll i = 0; i < n; i++) 
//    {
//        string stri; cin >> stri;
//        vector<ll> vec1;  vec1.resize(m);
//
//        ll lens = stri.size(), num;
//        for (ll i = 0; i < lens; i++) {
//            num = stri[i] - 'a';
//            vec1[num] = 1;
//        }
//
//        vector<ll> vec2;  vec2.resize(m);
//        for (ll i = 0; i < m; i++) {
//            if (vec1[i] == 0)
//                vec2[i] = 1;
//        }
//
//        ll len = 0;
//        for (ll i = 0; i < m; i++)
//            if (vec1[i] == 1)
//                len++;
//
//        auto team = make_tuple(len, vec1, vec2);
//
//        teams.push_back(team);
//    }
//
//    sort(teams.begin(), teams.end());
//
//    ll j = n - 1;
//    for (ll i = 0; i < n; i++) {
//        if (j <= i) break;
//
//        while ((j > i + 1) && get<0>(teams[j]) > m - get<0>(teams[i]))
//            j--;
//
//        if ((get<0>(teams[j]) == m - get<0>(teams[i])) && (get<1>(teams[j]) == get<2>(teams[i])))
//            ans++;
//    }
//
//    cout << ans++;
//}