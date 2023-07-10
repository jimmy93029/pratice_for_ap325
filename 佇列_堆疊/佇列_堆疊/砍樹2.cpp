//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <stack>
//#define ll long long
//#define oo 1000000001
//using namespace std;
//
//stack<ll> unaxed;
//ll timbers[100002];
//ll heights[100002];
//ll sum = 0, maxi;
//
//void axeTimber(ll n);
//int main()
//{
//    ll n, l, num;
//    cin >> n >> l;
//
//    timbers[0] = 0;
//    for (ll i = 1; i <= n; i++) 
//        cin >> timbers[i];    
//    timbers[n + 1] = l;
//
//    heights[0] = oo;
//    for (ll i = 1; i <= n; i++) 
//        cin >> heights[i];        
//    heights[n + 1] = oo;
//
//    axeTimber(n);
//
//    cout << sum << endl << maxi;
//}
//
//void axeTimber(ll n)
//{
//    unaxed.push(0);
//    for (ll i = 1; i <= n; i++) {
//        if (timbers[i] + heights[i] <= timbers[i + 1] || timbers[i] - heights[i] >= timbers[unaxed.top()]) {
//            maxi = max(maxi, heights[i]);
//            sum++;
//            while (timbers[unaxed.top()] + heights[unaxed.top()] <= timbers[i + 1]) {
//                maxi = max(maxi, heights[unaxed.top()]);
//                unaxed.pop();
//                sum++;
//            }
//        }
//        else
//            unaxed.push(i);
//    }
//}