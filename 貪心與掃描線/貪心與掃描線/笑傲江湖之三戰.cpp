//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <functional>
//#define ll long long
//using namespace std;
//
//ll enemy[100000];
//ll me[100000];
//
//int main()
//{
//    ll n, wins = 0;
//
//    cin >> n;
//    for (ll i = 0; i < n; i++)
//        cin >> enemy[i];
//
//    for (ll i = 0; i < n; i++)
//        cin >> me[i];
//
//    sort(enemy, enemy + n);
//    sort(me, me + n);
//
//    for (ll i = 0, j = 0; i < n && j < n; i++) {
//        if (me[i] > enemy[j]) {
//            j++;
//            wins++;
//        }
//    }
//
//    cout << wins;
//}